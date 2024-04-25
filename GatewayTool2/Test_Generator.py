import os
from string import Template
import openpyxl
import cantools

# parse .dbc
def parse_dbc(dbc_file_path):
    dbc_info = {}
    cycle_time_dict = {}
    is_fd_dict = {}
    type_dict = {}
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
                    'signals' : []
                }

                signals = message.signals
                for signal in signals:
                    signal_info = {
                        'Factor' : signal.scale
                    }
                    type_dict[signal.name] = signal.scale
                cycle_time_dict[message.name] = message.cycle_time
                is_fd_dict[message.name] = message.is_fd
                cycle_time = message.cycle_time
                if cycle_time != None and cycle_time not in cycle_time_list:
                    cycle_time_list.append(cycle_time)
    cycle_time_list.sort()
    msTimer = ['msTimer PROJ_SendMSGTimer_{}ms;'.format(ct) for ct in cycle_time_list]
    setTimer = ['setTimer (PROJ_SendMSGTimer_{}ms,  10);'.format(ct) for ct in cycle_time_list]
    return cycle_time_dict, type_dict, is_fd_dict, msTimer, setTimer

def generate_test(dbc_file_path, sheet, CAN_BUS, dbc_name, output_file_path):
    with open('input/FCM_template.can', 'r') as template, open('input/Variable_signals_MPC.xml', 'r') as xml_template, open('input/test_pri.can', 'r') as test_template:
        template_content = Template(template.read())
        xml_content = xml_template.read()
        test_content = Template(test_template.read())

    in_values = sheet["L"]
    out_values = sheet["M"]
    in_message_names = sheet["C"]
    in_signal_names = sheet["A"]
    cycle_time_dict, type_dict, is_fd_dict, msTimer, setTimer = parse_dbc(dbc_file_path)
    messages = []
    signal_infos = []
    on_timer_templates =[]
    signals = []
    testcases = []
    variable = []
    brs = {}
    out = {}

    for i, cell in enumerate(in_values[1:]):
        message_name = in_message_names[i+1].value
        signal_name = in_signal_names[i+1].value
        if cell.value == None:
            continue

        can = f'\tmessage can{CAN_BUS}.{message_name} {message_name} = {{DIR = TX}};'
        if can not in messages:
            messages.append(can)

        cycle_time = cycle_time_dict[message_name]
        brs[cycle_time] = []
        out[cycle_time] = []
        timer = f'on timer PROJ_SendMSGTimer_{cycle_time}ms\n{{\n{{brs}}\n{{out}}\n\tsetTimer(PROJ_SendMSGTimer_{cycle_time}ms, 20);\n}}'
        if timer not in on_timer_templates:
            on_timer_templates.append(timer)

    for i, cell in enumerate(in_values[1:]):
        message_name = in_message_names[i+1].value
        signal_name = in_signal_names[i+1].value
        if cell.value == None:
            continue

        cycle_time = cycle_time_dict[message_name]
        is_fd = is_fd_dict[message_name]
        if f'\t{"" if is_fd else "//"}{message_name}.BRS = 0;' not in brs[cycle_time]:
            brs[cycle_time].append(f'\t{"" if is_fd else "//"}{message_name}.BRS = 0;')
        if f'\toutput({message_name});' not in out[cycle_time]:
            out[cycle_time].append(f'\toutput({message_name});')

    for i, cell in enumerate(in_values[1:]):
        message_name = in_message_names[i+1].value
        signal_name = in_signal_names[i+1].value
        if cell.value == None:
            continue
        
        cycle_time = cycle_time_dict[message_name]
        for m, on_timer_template in enumerate(on_timer_templates):
            if f'PROJ_SendMSGTimer_{cycle_time}ms' in on_timer_template:
                on_timer_templates[m] = on_timer_template.replace('{brs}', '\n'.join(brs[cycle_time]))
                on_timer_templates[m] = on_timer_templates[m].replace('{out}', '\n'.join(out[cycle_time]))
        
        signal_infos.append(f'\t{cell.value};')

    for i, cell in enumerate(out_values[1:]):
        if cell.value == None:
            continue
        message_name = cell.value.split("=", 1)[0].strip().split(".")[0]
        signal_name = cell.value.split("=", 1)[0].strip().split(".")[1]
        value = cell.value.split("=", 1)[1].strip()
        signal_type = "int" if type_dict[signal_name] == 1 else "float"
        variable.append(f'\t\t\t<variable name="i_{signal_name}" type="{signal_type}" startValue="{value}" />')
        signals.append(f'{message_name}_{signal_name}();')
        if signal_type == "int":
            oOrf = "o"
            testcase = f'testcase {message_name}_{signal_name}()\n{{\n\tsignalvalue1 = getSignal({signal_name});\n\twrite("{signal_name} :%f",signalvalue1);\n\twrite("i_{signal_name} :%{oOrf}",@{dbc_name}_Signals::i_{signal_name});\n\n\ttestStep("get expect variable value: ","i_{signal_name} :%{oOrf}",@{dbc_name}_Signals::i_{signal_name});\n\n\tif(signalvalue1==@{dbc_name}_Signals::i_{signal_name})\n\t{{\n\ttestStepPass("Pass","i_{signal_name} :%f",signalvalue1);\n\t}}\n\telse\n\t{{\n\ttestStepFail("Fail","i_{signal_name} :%f",signalvalue1);\n\t}}\n}}'
            testcases.append(testcase)
        elif signal_type == "float":
            oOrf = "f"
            testcase = f'testcase {message_name}_{signal_name}()\n{{\n\tsignalvalue1 = getSignal({signal_name});\n\twrite("{signal_name} :%f",signalvalue1);\n\twrite("i_{signal_name} :%{oOrf}",@{dbc_name}_Signals::i_{signal_name});\n\n\ttestStep("get expect variable value: ","i_{signal_name} :%{oOrf}",@{dbc_name}_Signals::i_{signal_name});\n\n\tif((abs(@{dbc_name}_Signals::i_{signal_name})*0.9<=abs(signalvalue1))&&(abs(signalvalue1)<=abs(@{dbc_name}_Signals::i_{signal_name})*1.1))\n\t{{\n\ttestStepPass("Pass","i_{signal_name} :%f",signalvalue1);\n\t}}\n\telse\n\t{{\n\ttestStepFail("Fail","i_{signal_name} :%f",signalvalue1);\n\t}}\n}}'
            testcases.append(testcase)

    replace_content = template_content.substitute(message = '\n'.join(messages), msTimer = '\n\t'.join(msTimer), setTimer = '\n\t\t'.join(setTimer), on_timer = '\n'.join(on_timer_templates), signal = '\n'.join(signal_infos))
    xml_content = xml_content.format(name = dbc_name, variable = '\n'.join(variable))
    test_content = test_content.substitute(testcases = '\n\n'.join(testcases), signals = '\n'.join(signals))
            
    with open(os.path.join(output_file_path, f'FCM_{dbc_name}.can'), 'w') as output, open(os.path.join(output_file_path, f'MPC_{dbc_name}.xml'), 'w') as xml_output, open(os.path.join(output_file_path, f'test_pri_{dbc_name}.can'), 'w') as test_output:
        output.write(replace_content)
        xml_output.write(xml_content)
        test_output.write(test_content)

def main(CAN_BUS: str, dbc_name, source_folder_path):
    workbook = openpyxl.load_workbook('./output/Gateway_template.xlsx')
    if CAN_BUS == '1':
        sheet = workbook.worksheets[2]
        output_file_path = './output/ecu2vehicle'
        if not os.path.exists(output_file_path):
            os.makedirs(output_file_path)
        generate_test(source_folder_path, sheet, CAN_BUS, dbc_name, output_file_path)
    elif CAN_BUS == '2':
        sheet = workbook.worksheets[3]
        output_file_path = './output/vehicle2ecu'
        if not os.path.exists(output_file_path):
            os.makedirs(output_file_path)
        generate_test(source_folder_path, sheet, CAN_BUS, dbc_name, output_file_path)

if __name__ == "__main__":
    main('1', 'ecu', '.\input\_DBC')
    main('2', 'vehicle', '.\input\_DBC')