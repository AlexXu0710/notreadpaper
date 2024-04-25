import os
import re
import subprocess
import cantools
from Excel_Parser import ExcelParser as ep
import logging


# parse .dbc
def parse_dbc(dbc_file_path):
    dbc_info = {}
    signal_length_dict = {}
    dbc_info['messages'] = []
    cycle_time_list = []
    for file_name in os.listdir(dbc_file_path):
        if file_name.endswith('.dbc'):
            dbc_file = os.path.join(dbc_file_path, file_name)
            dbc_name = os.path.splitext(file_name)[0]
            db = cantools.database.load_file(dbc_file)
            
            for message in db.messages:
                message_info = {
                    'name': f'{dbc_name}_{message.name}',
                    'Cycle Time': message.cycle_time,
                    'is_fd': message.is_fd,
                    'nodes': list(message.senders) + list(message.receivers),
                    'signals' : []
                }
                cycle_time = message.cycle_time
                print(f'Message: {message.name}, Cycle Time: {cycle_time}')

                for signal in message.signals:
                    signal_info = {
                        'name': signal.name,
                        'length': signal.length,
                        'Factor': signal.scale
                    }
                    message_info['signals'].append(signal_info)
                    signal_length_dict[f"{message.name}_{signal.name}"] = "{:02d}".format(signal.length)

                dbc_info['messages'].append(message_info)
                cycle_time = message.cycle_time
                if cycle_time != None and cycle_time not in cycle_time_list:
                    cycle_time_list.append(cycle_time)
    cycle_time_list.sort()
    cycle_time_c = ['void Timer_{}ms ( void )\n{{\n}}'.format(ct) for ct in cycle_time_list]
    cycle_time_h = ['void Timer_{}ms( void );'.format(ct) for ct in cycle_time_list]
    return dbc_info, signal_length_dict, cycle_time_c, cycle_time_h

# generate Case_Timer.c & .h
def generate_case_timer(dbc_file_path, output_file_path, case_timer_c, case_timer_h, ecu_read_msg, vehicle_read_msg, ecu_c, ecu_h, vehicle_c, vehicle_h, ecu_txrx_can_c, ecu_txrx_can_h, vehicle_txrx_can_c, vehicle_txrx_can_h):
    c_template = '''
#include "datatypes.h"
#include "can.h"
#include "can_user.h"
#include "hardware.h"
#include "lpc407x_8x_177x_8x.h"
#include "ecu_Tx_On_Timer.h"
#include "vehicle_Tx_On_Timer.h"

{function_prototypes}
'''

    h_template = ['void Timer_1ms( void );',
'void Timer_5ms( void );',
'void Timer_10ms( void );',
'void Timer_20ms( void );',
'void Timer_30ms( void );',
'void Timer_40ms( void );',
'void Timer_50ms( void );',
'void Timer_100ms( void );',
'void Timer_450ms( void );',
'void Timer_500ms( void );',
'void Timer_1000ms( void );',
'void Timer_5000ms( void );']


    function_prototypes = ['void Timer_1ms ( void )\n{\n}',
'void Timer_5ms ( void )\n{\n}',
'void Timer_10ms ( void )\n{\n}',
'void Timer_20ms ( void )\n{\n}',
'void Timer_30ms ( void )\n{\n}',
'void Timer_40ms ( void )\n{\n}',
'void Timer_50ms ( void )\n{\n}',
'void Timer_100ms ( void )\n{\n}',
'void Timer_450ms ( void )\n{\n}',
'void Timer_500ms ( void )\n{\n}',
'void Timer_1000ms ( void )\n{\n}',
'void Timer_5000ms ( void )\n{\n}']

    txrx_can_c_template = '''
#include "datatypes.h"
#include "can.h"
#include "{dbc_name}.h"
#include "{dbc_name}_Tx_mapping.h"

static unsigned int length2dlc[64 + 1] = {{0,
1, 2, 3, 4, 5, 6, 7, 8,
9, 9, 9, 9, 10,10,10,10,
11,11,11,11,12,12,12,12,
13,13,13,13,13,13,13,13,
14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,
15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,
}};

{txrx_can_c}
'''

    txrx_can_h_template = '''
#ifndef __{dbc_name}_TXRX_CAN_H__
#define __{dbc_name}_TXRX_CAN_H__

#include "datatypes.h"
#include "can.h"

{txrx_can_h}

#endif
'''

    dbc_info, _, cycle_time_c, cycle_time_h = parse_dbc(dbc_file_path)    
    h_template = list(set(h_template + cycle_time_h))
    function_prototypes = list(set(function_prototypes + cycle_time_c))
    messages = dbc_info['messages']
    ecu_read_msgs = []
    vehicle_read_msgs = []
    ecu_cs = []
    ecu_hs = []
    vehicle_cs = []
    vehicle_hs = []
    ecu_txrx_can_cs = []
    ecu_txrx_can_hs = []
    vehicle_txrx_can_cs = []
    vehicle_txrx_can_hs = []
    for message in messages:
        message_name = message['name']
        dbc_name = message_name.split("_")[0]
        can_bus = "CAN_BUS1" if dbc_name == 'ecu' else "CAN_BUS2"
        message_cycle_time = message['Cycle Time']
        message_cycle_time = 0 if message_cycle_time == None else message_cycle_time

        if dbc_name == 'ecu':
            ecu_read_msgs.append(f'case {camel_to_underscore(message_name).upper()}_FRAME_ID:\t{{ {message_name.upper()}_Read_Msg();\tbreak; }}')
            ecu_cs.append(f'struct {camel_to_underscore(message_name).lower()}_t g_{message_name.lower()};')
            ecu_hs.append(f'extern struct {camel_to_underscore(message_name).lower()}_t g_{message_name.lower()};')
            ecu_txrx_can_cs.append(f'void {message_name.upper()}_Read_Msg()\n{{\n\t{camel_to_underscore(message_name).lower()}_unpack(&g_{message_name.lower()}, RxMsg.Data8, {camel_to_underscore(message_name).upper()}_LENGTH);\n}}\nvoid {message_name.upper()}_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)\n{{\n\tTxMsg.bufftype = CAN_BUFFER_TX_MSG;\n\tTxMsg.msgtype = Msgtype;\n\tTxMsg.dlc = length2dlc[{camel_to_underscore(message_name).upper()}_LENGTH]; TxMsg.id = {camel_to_underscore(message_name).upper()}_FRAME_ID;\n\t{camel_to_underscore(message_name).lower()}_pack(TxMsg.Data8, &g_{message_name.lower()},  {camel_to_underscore(message_name).upper()}_LENGTH);\n\tCAN_Write(Direction,&TxMsg);\n}}')
            ecu_txrx_can_hs.append(f'extern void {message_name.upper()}_Read_Msg();\nextern void {message_name.upper()}_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);')
        elif dbc_name == 'vehicle':
            vehicle_read_msgs.append(f'case {camel_to_underscore(message_name).upper()}_FRAME_ID:\t{{ {message_name.upper()}_Read_Msg();\tbreak; }}')
            vehicle_cs.append(f'struct {camel_to_underscore(message_name).lower()}_t g_{message_name.lower()};')
            vehicle_hs.append(f'extern struct {camel_to_underscore(message_name).lower()}_t g_{message_name.lower()};')
            vehicle_txrx_can_cs.append(f'void {message_name.upper()}_Read_Msg()\n{{\n\t{camel_to_underscore(message_name).lower()}_unpack(&g_{message_name.lower()}, RxMsg.Data8, {camel_to_underscore(message_name).upper()}_LENGTH);\n}}\nvoid {message_name.upper()}_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)\n{{\n\tTxMsg.bufftype = CAN_BUFFER_TX_MSG;\n\tTxMsg.msgtype = Msgtype;\n\tTxMsg.dlc = length2dlc[{camel_to_underscore(message_name).upper()}_LENGTH]; TxMsg.id = {camel_to_underscore(message_name).upper()}_FRAME_ID;\n\t{camel_to_underscore(message_name).lower()}_pack(TxMsg.Data8, &g_{message_name.lower()},  {camel_to_underscore(message_name).upper()}_LENGTH);\n\tCAN_Write(Direction,&TxMsg);\n}}')
            vehicle_txrx_can_hs.append(f'extern void {message_name.upper()}_Read_Msg();\nextern void {message_name.upper()}_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);')
        for i, function_prototype in enumerate(function_prototypes):
            if f'{message_cycle_time}ms' in function_prototype: # if f'_{message_cycle_time}ms' in function_prototype:
                function_prototypes[i] = function_prototype.replace(
                    '}', f'    on_Timer_{message_name}          ({can_bus});\n}}'
                    )
        
    c_content = c_template.format(
        function_prototypes = '\n\n'.join(function_prototypes)
    )
    

    with open(case_timer_c, 'w') as f:
        f.write(c_content)
    with open(case_timer_h, 'w') as f:
        f.write('\n'.join(h_template))
    with open(ecu_read_msg, 'w') as f:
        f.write('\n'.join(ecu_read_msgs))
    with open(vehicle_read_msg, 'w') as f:
        f.write('\n'.join(vehicle_read_msgs))

    with open(ecu_c, 'r', encoding='utf-8') as f:
        lines = f.readlines()
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path + '\\', '')
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path.upper() + '\\', '')
    lines.insert(34, '\n'.join(ecu_cs) + '\n')
    with open(ecu_c, 'w', encoding='utf-8') as f:
        f.writelines(lines)
    with open(ecu_h, 'r', encoding='utf-8') as f:
        lines = f.readlines()
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path + '\\', '')
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path.upper() + '\\', '')
    lines.insert(45, '\n'.join(ecu_hs) + '\n')
    with open(ecu_h, 'w', encoding='utf-8') as f:
        f.writelines(lines)
    with open(vehicle_c, 'r', encoding='utf-8') as f:
        lines = f.readlines()
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path + '\\', '')
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path.upper() + '\\', '')
    lines.insert(34, '\n'.join(vehicle_cs) + '\n')
    with open(vehicle_c, 'w', encoding='utf-8') as f:
        f.writelines(lines)
    with open(vehicle_h, 'r', encoding='utf-8') as f:
        lines = f.readlines()
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path + '\\', '')
        for i, line in enumerate(lines):
            lines[i] = line.replace(output_file_path.upper() + '\\', '')
    lines.insert(45, '\n'.join(vehicle_hs) + '\n')
    with open(vehicle_h, 'w', encoding='utf-8') as f:
        f.writelines(lines)
    
    with open(ecu_txrx_can_c, 'w') as f:
        f.write(txrx_can_c_template.format(dbc_name = 'ecu', txrx_can_c = '\n'.join(ecu_txrx_can_cs)))
    with open(vehicle_txrx_can_c, 'w') as f:
        f.write(txrx_can_c_template.format(dbc_name = 'vehicle', txrx_can_c = '\n'.join(vehicle_txrx_can_cs)))
    with open(ecu_txrx_can_h, 'w') as f:
        f.write(txrx_can_h_template.format(dbc_name = 'ECU', txrx_can_h = '\n'.join(ecu_txrx_can_hs)))
    with open(vehicle_txrx_can_h, 'w') as f:
        f.write(txrx_can_h_template.format(dbc_name = 'VEHICLE', txrx_can_h = '\n'.join(vehicle_txrx_can_hs)))

    return

def camel_to_underscore(variable_name):
    # 将驼峰命名的变量名转换为下划线命名
    pattern = re.compile(r'(?<!^)[A-Z](?=[a-z])|(?<=[a-z])(?=[A-Z][a-z])|(?<=[a-z])(?=[A-Z])|(?<=[0-9])(?=[A-Z])')
    underscore_name = pattern.sub(lambda x: '_' + x.group().lower(), variable_name).lower()
    underscore_name = underscore_name.replace("__", "_")
    return underscore_name

# generate TX_on _Timer.c/.h
def generate_tx_on_timer(dbc_file_path, output_ecu_file, output_vehicle_file, output_ecu_h_file, output_vehicle_h_file):
    timer_template = '''
#include "datatypes.h"
#include "can.h"
//#include "crc_CAN.h"
#include "{dbc_name}_Tx_mapping.h"
#include "{dbc_name}.h"
#include "{dbc_name}_txrx_can.h" 

{function_prototypes}
'''

    template_h = '''#ifndef __{dbc_name}_TX_ON_TIMER_H__
#define __{dbc_name}_TX_ON_TIMER_H__
#include "datatypes.h"

{function_prototypes}
#endif
'''

    function_prototypes_ecu = []
    function_prototypes_vehicle = []
    function_prototypes_ecu_h = []
    function_prototypes_vehicle_h = []
    messages = parse_dbc(dbc_file_path)[0]['messages']

    for message in messages:
        message_name = message['name']
        dbc_name = message_name.split('_')[0]
        message_cycle_time = message['Cycle Time']
        message_is_fd = message['is_fd']
        if dbc_name == 'ecu':
            function_prototype_ecu = f'void on_Timer_{message_name} (u8_t Direction)\n{{\n}}'
            function_prototype_ecu_h = f"void on_Timer_{message_name}      (u8_t Direction);"
            function_prototypes_ecu.append(function_prototype_ecu)
            function_prototypes_ecu_h.append(function_prototype_ecu_h)
        elif dbc_name == 'vehicle': 
            function_prototype_vehicle = f'void on_Timer_{message_name} (u8_t Direction)\n{{\n}}'
            function_prototypes_vehicle.append(function_prototype_vehicle)
            function_prototype_vehicle_h = f"void on_Timer_{message_name}      (u8_t Direction);"
            function_prototypes_vehicle_h.append(function_prototype_vehicle_h)

        signals = message['signals']
        for signal in signals:
            signal_name = signal['name']
            signal_length = "{:02d}".format(signal['length'])                 
                    
            for i, function_prototype_ecu in enumerate(function_prototypes_ecu):
                if f'void on_Timer_{message_name}' in function_prototype_ecu:
                    function_prototypes_ecu[i] = function_prototype_ecu.replace(
                        '}', f"\tg_{message_name.lower()}.{camel_to_underscore(signal_name)} = {camel_to_underscore(message_name).lower()}_{camel_to_underscore(signal_name)}_encode(calc_{message_name}_{signal_name}());\n}}"
                        )

            for i, function_prototype_vehicle in enumerate(function_prototypes_vehicle):
                if f'void on_Timer_{message_name}' in function_prototype_vehicle:
                    function_prototypes_vehicle[i] = function_prototype_vehicle.replace(
                        '}', f"\tg_{message_name.lower()}.{camel_to_underscore(signal_name)} = {camel_to_underscore(message_name).lower()}_{camel_to_underscore(signal_name)}_encode\t(calc_{message_name}_{signal_name}());\n}}"
                        )

        for i, function_prototype_ecu in enumerate(function_prototypes_ecu):
            if f'void on_Timer_{message_name}' in function_prototype_ecu:                 
                if message_is_fd:
                    function_prototypes_ecu[i] = function_prototype_ecu.replace(
                        '}', f'\t{message_name.upper()}_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );\n}}'
                        )
                else:
                    function_prototypes_ecu[i] = function_prototype_ecu.replace(
                        '}', f'\t{message_name.upper()}_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );\n}}'
                        )

        for i, function_prototype_vehicle in enumerate(function_prototypes_vehicle):
            if f'void on_Timer_{message_name}' in function_prototype_vehicle:                 
                if message_is_fd:
                    function_prototypes_vehicle[i] = function_prototype_vehicle.replace(
                        '}', f'\t{message_name.upper()}_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );\n}}'
                        )
                else:
                    function_prototypes_vehicle[i] = function_prototype_vehicle.replace(
                        '}', f'\t{message_name.upper()}_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );\n}}'
                        )

    ecu_content = timer_template.format(
        dbc_name = 'ecu',
        function_prototypes = '\n'.join(function_prototypes_ecu)
        )
    vehicle_content = timer_template.format(
        dbc_name = 'vehicle',
        function_prototypes = '\n'.join(function_prototypes_vehicle)
    )
    ecu_content_h = template_h.format(
        dbc_name = "ECU",
        function_prototypes = '\n'.join(function_prototypes_ecu_h)
        )
    vehicle_content_h = template_h.format(
        dbc_name = "VEHICLE",
        function_prototypes = '\n'.join(function_prototypes_vehicle_h)
    )

    with open(output_ecu_file, 'w') as f:
        f.write(ecu_content)
    with open(output_vehicle_file, 'w') as f:
        f.write(vehicle_content)
    with open(output_ecu_h_file, 'w') as f:
        f.write(ecu_content_h)
    with open(output_vehicle_h_file, 'w') as f:
        f.write(vehicle_content_h)

    return 

# generate mapping.c/.h
def generate_mapping_file(dbc_file_path, mapping_rule_excel, output_ecu_mapping_c_file, output_vehicle_mapping_c_file,
                            output_ecu_mapping_h_file, output_vehicle_mapping_h_file):
    mapping_c_template = '''
#include "datatypes.h"
#include "{dbc_name}.h"

{function_prototypes}
'''
    mapping_h_template = '''#ifndef __{dbc_name}_TX_MAPPING_H__
#define __{dbc_name}_TX_MAPPING_H__

{function_prototypes}

#endif
'''

    ecu_function_prototypes_c = []
    vehicle_function_prototypes_c = []
    ecu_function_prototypes_h = []
    vehicle_function_prototypes_h = []
    messages = parse_dbc(dbc_file_path)[0]['messages']
    signal_length_dict = parse_dbc(dbc_file_path)[1]
    # sheet3 is ecu2vehicle, sheet4 is vehicle2ecu 
    mapping_rules_ecu = ep(mapping_rule_excel).parse_mapping_rules(3, signal_length_dict, device= "vehicle")
    mapping_rules_vehicle = ep(mapping_rule_excel).parse_mapping_rules(2, signal_length_dict, device= "ecu")
    for message in messages:
        message_name = message['name']
        dbc_name = message_name.split("_")[0]
        signals = message['signals']

        for signal in signals:
            signal_name = signal['name']
            signal_length = signal['length']
            Factor = signal['Factor']
            
            mapping_rules = mapping_rules_vehicle if dbc_name == "vehicle" else mapping_rules_ecu
              
            mapping_rule = ''
            signal_info = 0
            for i, row in enumerate(mapping_rules):
                if f'{message_name.split("_", 1)[1]}_{signal_name}' in row:
                    if mapping_rules[i][2].startswith('Default'):
                        mapping_rule = ""
                        signal_info = re.findall(r'0x[\da-fA-F]+', mapping_rules[i][2])[0]
                    else:
                        mapping_rule = mapping_rules[i][2]
                        signal_info = f'{mapping_rules[i][0]}'
                    break

            function_prototype_c = '''
{type} calc_{message_signal_name}()
{{
    {type} l_temp = {dbc_message_signal_name_length} ;
{mapping_rule}

    return l_temp;
}}
'''
            function_prototype_c = function_prototype_c.format(
                type = "int" if Factor == 1 else "float",
                message_signal_name = f'{message_name}_{signal_name}',
                mapping_rule = mapping_rule,
                dbc_message_signal_name_length = signal_info
            )
            function_prototype_h = f'extern {"int" if Factor == 1 else "float"} calc_{message_name}_{signal_name}();\n'

            if dbc_name == "ecu":
                ecu_function_prototypes_c.append(function_prototype_c)
                ecu_function_prototypes_h.append(function_prototype_h)

            elif dbc_name == "vehicle":
                vehicle_function_prototypes_c.append(function_prototype_c)
                vehicle_function_prototypes_h.append(function_prototype_h)

    ecu_mapping_c_content = mapping_c_template.format(
        dbc_name = "vehicle",
        function_prototypes = '\n'.join(ecu_function_prototypes_c)
    )
    vehicle_mapping_c_content = mapping_c_template.format(
        dbc_name = "ecu",
        function_prototypes = '\n'.join(vehicle_function_prototypes_c)
    )
    ecu_mapping_h_content = mapping_h_template.format(
        dbc_name = "ECU",
        function_prototypes = '\n'.join(ecu_function_prototypes_h)
    )
    vehicle_mapping_h_content = mapping_h_template.format(
        dbc_name = "VEHICLE",
        function_prototypes = '\n'.join(vehicle_function_prototypes_h)
    )    

    with open(output_ecu_mapping_c_file, 'w') as f:
        f.write(ecu_mapping_c_content)   
    with open(output_vehicle_mapping_c_file, 'w') as f:
        f.write(vehicle_mapping_c_content)  
    with open(output_ecu_mapping_h_file, 'w') as f:
        f.write(ecu_mapping_h_content)   
    with open(output_vehicle_mapping_h_file, 'w') as f:
        f.write(vehicle_mapping_h_content)                  

    return

def main(source_folder_path, output_file_path, mapping_rule_excel):
    if not os.path.exists('./output'):
        os.makedirs('./output')
    logging.basicConfig(filename='output/mapping_rule_error.log', level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s', encoding = 'utf-8') # , encoding = 'utf-8'
        
    for file_name in os.listdir(source_folder_path):
        if file_name.endswith('.dbc'):
            dbc_file = os.path.join(source_folder_path, file_name)
            output_file = os.path.join(output_file_path, file_name.split('.')[0])
            subprocess.run(r'python.exe -X utf8 -m cantools generate_c_source --database-name {} {}'.format(output_file, dbc_file))

    case_timer_c = os.path.join(output_file_path, 'Case_Timer.c')
    case_timer_h = os.path.join(output_file_path, 'Case_Timer.h')
    ecu_read_msg = os.path.join(output_file_path, 'ecu_Read_Msg_case.h')
    vehicle_read_msg = os.path.join(output_file_path, 'vehicle_Read_Msg_case.h')
    ecu_c = os.path.join(output_file_path, 'ecu.c')
    ecu_h = os.path.join(output_file_path, 'ecu.h')
    vehicle_c = os.path.join(output_file_path, 'vehicle.c')
    vehicle_h = os.path.join(output_file_path, 'vehicle.h')
    ecu_txrx_can_c = os.path.join(output_file_path, 'ecu_txrx_can.c')
    ecu_txrx_can_h = os.path.join(output_file_path, 'ecu_txrx_can.h')
    vehicle_txrx_can_c = os.path.join(output_file_path, 'vehicle_txrx_can.c')
    vehicle_txrx_can_h = os.path.join(output_file_path, 'vehicle_txrx_can.h')
    output_ecu_file = os.path.join(output_file_path, 'ecu_Tx_On_Timer.c')
    output_vehicle_file = os.path.join(output_file_path, 'vehicle_Tx_On_Timer.c')
    output_ecu_h_file = os.path.join(output_file_path, 'ecu_Tx_On_Timer.h')
    output_vehicle_h_file = os.path.join(output_file_path, 'vehicle_Tx_On_Timer.h')
    output_ecu_mapping_c_file = os.path.join(output_file_path, 'ecu_TX_mapping.c')
    output_vehicle_mapping_c_file = os.path.join(output_file_path, 'vehicle_TX_mapping.c')
    output_ecu_mapping_h_file = os.path.join(output_file_path, 'ecu_TX_mapping.h')
    output_vehicle_mapping_h_file = os.path.join(output_file_path, 'vehicle_TX_mapping.h')
    generate_case_timer(source_folder_path, output_file_path, case_timer_c, case_timer_h, ecu_read_msg, vehicle_read_msg, ecu_c, ecu_h, vehicle_c, vehicle_h, ecu_txrx_can_c, ecu_txrx_can_h, vehicle_txrx_can_c, vehicle_txrx_can_h)
    generate_tx_on_timer(source_folder_path, output_ecu_file, output_vehicle_file, output_ecu_h_file, output_vehicle_h_file)
    generate_mapping_file(source_folder_path, mapping_rule_excel, output_ecu_mapping_c_file, output_vehicle_mapping_c_file,
                                output_ecu_mapping_h_file, output_vehicle_mapping_h_file)

    logging.shutdown()

if __name__ == "__main__":
    main(source_folder_path='.\input\_DBC', output_file_path='.\Gen_new', mapping_rule_excel='./Gateway_template.xlsx')