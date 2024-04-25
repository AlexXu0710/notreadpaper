
#include "datatypes.h"
#include "can.h"
#include "ecu.h"
#include "ecu_Tx_mapping.h"

static unsigned int length2dlc[64 + 1] = {0,
1, 2, 3, 4, 5, 6, 7, 8,
9, 9, 9, 9, 10,10,10,10,
11,11,11,11,12,12,12,12,
13,13,13,13,13,13,13,13,
14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,
15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,
};

void ECU_ACC_382_Read_Msg()
{
	ecu_acc_382_unpack(&g_ecu_acc_382, RxMsg.Data8, ECU_ACC_382_LENGTH);
}
void ECU_ACC_382_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_382_LENGTH]; TxMsg.id = ECU_ACC_382_FRAME_ID;
	ecu_acc_382_pack(TxMsg.Data8, &g_ecu_acc_382,  ECU_ACC_382_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2A4_Read_Msg()
{
	ecu_gw_2_a4_unpack(&g_ecu_gw_2a4, RxMsg.Data8, ECU_GW_2_A4_LENGTH);
}
void ECU_GW_2A4_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_A4_LENGTH]; TxMsg.id = ECU_GW_2_A4_FRAME_ID;
	ecu_gw_2_a4_pack(TxMsg.Data8, &g_ecu_gw_2a4,  ECU_GW_2_A4_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_765_Read_Msg()
{
	ecu_gw_765_unpack(&g_ecu_gw_765, RxMsg.Data8, ECU_GW_765_LENGTH);
}
void ECU_GW_765_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_765_LENGTH]; TxMsg.id = ECU_GW_765_FRAME_ID;
	ecu_gw_765_pack(TxMsg.Data8, &g_ecu_gw_765,  ECU_GW_765_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_76D_Read_Msg()
{
	ecu_acc_76_d_unpack(&g_ecu_acc_76d, RxMsg.Data8, ECU_ACC_76_D_LENGTH);
}
void ECU_ACC_76D_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_76_D_LENGTH]; TxMsg.id = ECU_ACC_76_D_FRAME_ID;
	ecu_acc_76_d_pack(TxMsg.Data8, &g_ecu_acc_76d,  ECU_ACC_76_D_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_791_Read_Msg()
{
	ecu_gw_791_unpack(&g_ecu_gw_791, RxMsg.Data8, ECU_GW_791_LENGTH);
}
void ECU_GW_791_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_791_LENGTH]; TxMsg.id = ECU_GW_791_FRAME_ID;
	ecu_gw_791_pack(TxMsg.Data8, &g_ecu_gw_791,  ECU_GW_791_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_799_Read_Msg()
{
	ecu_acc_799_unpack(&g_ecu_acc_799, RxMsg.Data8, ECU_ACC_799_LENGTH);
}
void ECU_ACC_799_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_799_LENGTH]; TxMsg.id = ECU_ACC_799_FRAME_ID;
	ecu_acc_799_pack(TxMsg.Data8, &g_ecu_acc_799,  ECU_ACC_799_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_752_Read_Msg()
{
	ecu_gw_752_unpack(&g_ecu_gw_752, RxMsg.Data8, ECU_GW_752_LENGTH);
}
void ECU_GW_752_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_752_LENGTH]; TxMsg.id = ECU_GW_752_FRAME_ID;
	ecu_gw_752_pack(TxMsg.Data8, &g_ecu_gw_752,  ECU_GW_752_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_75A_Read_Msg()
{
	ecu_las_75_a_unpack(&g_ecu_las_75a, RxMsg.Data8, ECU_LAS_75_A_LENGTH);
}
void ECU_LAS_75A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_75_A_LENGTH]; TxMsg.id = ECU_LAS_75_A_FRAME_ID;
	ecu_las_75_a_pack(TxMsg.Data8, &g_ecu_las_75a,  ECU_LAS_75_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_763_Read_Msg()
{
	ecu_gw_763_unpack(&g_ecu_gw_763, RxMsg.Data8, ECU_GW_763_LENGTH);
}
void ECU_GW_763_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_763_LENGTH]; TxMsg.id = ECU_GW_763_FRAME_ID;
	ecu_gw_763_pack(TxMsg.Data8, &g_ecu_gw_763,  ECU_GW_763_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_76B_Read_Msg()
{
	ecu_las_76_b_unpack(&g_ecu_las_76b, RxMsg.Data8, ECU_LAS_76_B_LENGTH);
}
void ECU_LAS_76B_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_76_B_LENGTH]; TxMsg.id = ECU_LAS_76_B_FRAME_ID;
	ecu_las_76_b_pack(TxMsg.Data8, &g_ecu_las_76b,  ECU_LAS_76_B_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_592_Read_Msg()
{
	ecu_las_592_unpack(&g_ecu_las_592, RxMsg.Data8, ECU_LAS_592_LENGTH);
}
void ECU_LAS_592_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_592_LENGTH]; TxMsg.id = ECU_LAS_592_FRAME_ID;
	ecu_las_592_pack(TxMsg.Data8, &g_ecu_las_592,  ECU_LAS_592_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_594_Read_Msg()
{
	ecu_acc_594_unpack(&g_ecu_acc_594, RxMsg.Data8, ECU_ACC_594_LENGTH);
}
void ECU_ACC_594_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_594_LENGTH]; TxMsg.id = ECU_ACC_594_FRAME_ID;
	ecu_acc_594_pack(TxMsg.Data8, &g_ecu_acc_594,  ECU_ACC_594_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_50_Read_Msg()
{
	ecu_gw_50_unpack(&g_ecu_gw_50, RxMsg.Data8, ECU_GW_50_LENGTH);
}
void ECU_GW_50_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_50_LENGTH]; TxMsg.id = ECU_GW_50_FRAME_ID;
	ecu_gw_50_pack(TxMsg.Data8, &g_ecu_gw_50,  ECU_GW_50_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_170_Read_Msg()
{
	ecu_gw_170_unpack(&g_ecu_gw_170, RxMsg.Data8, ECU_GW_170_LENGTH);
}
void ECU_GW_170_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_170_LENGTH]; TxMsg.id = ECU_GW_170_FRAME_ID;
	ecu_gw_170_pack(TxMsg.Data8, &g_ecu_gw_170,  ECU_GW_170_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_180_Read_Msg()
{
	ecu_gw_180_unpack(&g_ecu_gw_180, RxMsg.Data8, ECU_GW_180_LENGTH);
}
void ECU_GW_180_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_180_LENGTH]; TxMsg.id = ECU_GW_180_FRAME_ID;
	ecu_gw_180_pack(TxMsg.Data8, &g_ecu_gw_180,  ECU_GW_180_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_244_Read_Msg()
{
	ecu_acc_244_unpack(&g_ecu_acc_244, RxMsg.Data8, ECU_ACC_244_LENGTH);
}
void ECU_ACC_244_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_244_LENGTH]; TxMsg.id = ECU_ACC_244_FRAME_ID;
	ecu_acc_244_pack(TxMsg.Data8, &g_ecu_acc_244,  ECU_ACC_244_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_278_Read_Msg()
{
	ecu_gw_278_unpack(&g_ecu_gw_278, RxMsg.Data8, ECU_GW_278_LENGTH);
}
void ECU_GW_278_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_278_LENGTH]; TxMsg.id = ECU_GW_278_FRAME_ID;
	ecu_gw_278_pack(TxMsg.Data8, &g_ecu_gw_278,  ECU_GW_278_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_298_Read_Msg()
{
	ecu_gw_298_unpack(&g_ecu_gw_298, RxMsg.Data8, ECU_GW_298_LENGTH);
}
void ECU_GW_298_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_298_LENGTH]; TxMsg.id = ECU_GW_298_FRAME_ID;
	ecu_gw_298_pack(TxMsg.Data8, &g_ecu_gw_298,  ECU_GW_298_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_307_Read_Msg()
{
	ecu_acc_307_unpack(&g_ecu_acc_307, RxMsg.Data8, ECU_ACC_307_LENGTH);
}
void ECU_ACC_307_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_307_LENGTH]; TxMsg.id = ECU_ACC_307_FRAME_ID;
	ecu_acc_307_pack(TxMsg.Data8, &g_ecu_acc_307,  ECU_ACC_307_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_312_Read_Msg()
{
	ecu_acc_312_unpack(&g_ecu_acc_312, RxMsg.Data8, ECU_ACC_312_LENGTH);
}
void ECU_ACC_312_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_312_LENGTH]; TxMsg.id = ECU_ACC_312_FRAME_ID;
	ecu_acc_312_pack(TxMsg.Data8, &g_ecu_acc_312,  ECU_ACC_312_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_340_Read_Msg()
{
	ecu_gw_340_unpack(&g_ecu_gw_340, RxMsg.Data8, ECU_GW_340_LENGTH);
}
void ECU_GW_340_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_340_LENGTH]; TxMsg.id = ECU_GW_340_FRAME_ID;
	ecu_gw_340_pack(TxMsg.Data8, &g_ecu_gw_340,  ECU_GW_340_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_347_Read_Msg()
{
	ecu_gw_347_unpack(&g_ecu_gw_347, RxMsg.Data8, ECU_GW_347_LENGTH);
}
void ECU_GW_347_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_347_LENGTH]; TxMsg.id = ECU_GW_347_FRAME_ID;
	ecu_gw_347_pack(TxMsg.Data8, &g_ecu_gw_347,  ECU_GW_347_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_365_Read_Msg()
{
	ecu_gw_365_unpack(&g_ecu_gw_365, RxMsg.Data8, ECU_GW_365_LENGTH);
}
void ECU_GW_365_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_365_LENGTH]; TxMsg.id = ECU_GW_365_FRAME_ID;
	ecu_gw_365_pack(TxMsg.Data8, &g_ecu_gw_365,  ECU_GW_365_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_366_Read_Msg()
{
	ecu_gw_366_unpack(&g_ecu_gw_366, RxMsg.Data8, ECU_GW_366_LENGTH);
}
void ECU_GW_366_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_366_LENGTH]; TxMsg.id = ECU_GW_366_FRAME_ID;
	ecu_gw_366_pack(TxMsg.Data8, &g_ecu_gw_366,  ECU_GW_366_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_387_Read_Msg()
{
	ecu_gw_387_unpack(&g_ecu_gw_387, RxMsg.Data8, ECU_GW_387_LENGTH);
}
void ECU_GW_387_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_387_LENGTH]; TxMsg.id = ECU_GW_387_FRAME_ID;
	ecu_gw_387_pack(TxMsg.Data8, &g_ecu_gw_387,  ECU_GW_387_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_390_Read_Msg()
{
	ecu_gw_390_unpack(&g_ecu_gw_390, RxMsg.Data8, ECU_GW_390_LENGTH);
}
void ECU_GW_390_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_390_LENGTH]; TxMsg.id = ECU_GW_390_FRAME_ID;
	ecu_gw_390_pack(TxMsg.Data8, &g_ecu_gw_390,  ECU_GW_390_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_396_Read_Msg()
{
	ecu_gw_396_unpack(&g_ecu_gw_396, RxMsg.Data8, ECU_GW_396_LENGTH);
}
void ECU_GW_396_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_396_LENGTH]; TxMsg.id = ECU_GW_396_FRAME_ID;
	ecu_gw_396_pack(TxMsg.Data8, &g_ecu_gw_396,  ECU_GW_396_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_507_Read_Msg()
{
	ecu_gw_507_unpack(&g_ecu_gw_507, RxMsg.Data8, ECU_GW_507_LENGTH);
}
void ECU_GW_507_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_507_LENGTH]; TxMsg.id = ECU_GW_507_FRAME_ID;
	ecu_gw_507_pack(TxMsg.Data8, &g_ecu_gw_507,  ECU_GW_507_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_516_Read_Msg()
{
	ecu_gw_516_unpack(&g_ecu_gw_516, RxMsg.Data8, ECU_GW_516_LENGTH);
}
void ECU_GW_516_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_516_LENGTH]; TxMsg.id = ECU_GW_516_FRAME_ID;
	ecu_gw_516_pack(TxMsg.Data8, &g_ecu_gw_516,  ECU_GW_516_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_530_Read_Msg()
{
	ecu_gw_530_unpack(&g_ecu_gw_530, RxMsg.Data8, ECU_GW_530_LENGTH);
}
void ECU_GW_530_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_530_LENGTH]; TxMsg.id = ECU_GW_530_FRAME_ID;
	ecu_gw_530_pack(TxMsg.Data8, &g_ecu_gw_530,  ECU_GW_530_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_187_Read_Msg()
{
	ecu_gw_187_unpack(&g_ecu_gw_187, RxMsg.Data8, ECU_GW_187_LENGTH);
}
void ECU_GW_187_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_187_LENGTH]; TxMsg.id = ECU_GW_187_FRAME_ID;
	ecu_gw_187_pack(TxMsg.Data8, &g_ecu_gw_187,  ECU_GW_187_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_197_Read_Msg()
{
	ecu_gw_197_unpack(&g_ecu_gw_197, RxMsg.Data8, ECU_GW_197_LENGTH);
}
void ECU_GW_197_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_197_LENGTH]; TxMsg.id = ECU_GW_197_FRAME_ID;
	ecu_gw_197_pack(TxMsg.Data8, &g_ecu_gw_197,  ECU_GW_197_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_194_Read_Msg()
{
	ecu_gw_194_unpack(&g_ecu_gw_194, RxMsg.Data8, ECU_GW_194_LENGTH);
}
void ECU_GW_194_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_194_LENGTH]; TxMsg.id = ECU_GW_194_FRAME_ID;
	ecu_gw_194_pack(TxMsg.Data8, &g_ecu_gw_194,  ECU_GW_194_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_17D_Read_Msg()
{
	ecu_gw_17_d_unpack(&g_ecu_gw_17d, RxMsg.Data8, ECU_GW_17_D_LENGTH);
}
void ECU_GW_17D_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_17_D_LENGTH]; TxMsg.id = ECU_GW_17_D_FRAME_ID;
	ecu_gw_17_d_pack(TxMsg.Data8, &g_ecu_gw_17d,  ECU_GW_17_D_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_17E_Read_Msg()
{
	ecu_gw_17_e_unpack(&g_ecu_gw_17e, RxMsg.Data8, ECU_GW_17_E_LENGTH);
}
void ECU_GW_17E_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_17_E_LENGTH]; TxMsg.id = ECU_GW_17_E_FRAME_ID;
	ecu_gw_17_e_pack(TxMsg.Data8, &g_ecu_gw_17e,  ECU_GW_17_E_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_1BA_Read_Msg()
{
	ecu_acc_1_ba_unpack(&g_ecu_acc_1ba, RxMsg.Data8, ECU_ACC_1_BA_LENGTH);
}
void ECU_ACC_1BA_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_1_BA_LENGTH]; TxMsg.id = ECU_ACC_1_BA_FRAME_ID;
	ecu_acc_1_ba_pack(TxMsg.Data8, &g_ecu_acc_1ba,  ECU_ACC_1_BA_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_20B_Read_Msg()
{
	ecu_gw_20_b_unpack(&g_ecu_gw_20b, RxMsg.Data8, ECU_GW_20_B_LENGTH);
}
void ECU_GW_20B_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_20_B_LENGTH]; TxMsg.id = ECU_GW_20_B_FRAME_ID;
	ecu_gw_20_b_pack(TxMsg.Data8, &g_ecu_gw_20b,  ECU_GW_20_B_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_24F_Read_Msg()
{
	ecu_gw_24_f_unpack(&g_ecu_gw_24f, RxMsg.Data8, ECU_GW_24_F_LENGTH);
}
void ECU_GW_24F_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_24_F_LENGTH]; TxMsg.id = ECU_GW_24_F_FRAME_ID;
	ecu_gw_24_f_pack(TxMsg.Data8, &g_ecu_gw_24f,  ECU_GW_24_F_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_28B_Read_Msg()
{
	ecu_gw_28_b_unpack(&g_ecu_gw_28b, RxMsg.Data8, ECU_GW_28_B_LENGTH);
}
void ECU_GW_28B_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_28_B_LENGTH]; TxMsg.id = ECU_GW_28_B_FRAME_ID;
	ecu_gw_28_b_pack(TxMsg.Data8, &g_ecu_gw_28b,  ECU_GW_28_B_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2D1_Read_Msg()
{
	ecu_gw_2_d1_unpack(&g_ecu_gw_2d1, RxMsg.Data8, ECU_GW_2_D1_LENGTH);
}
void ECU_GW_2D1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_D1_LENGTH]; TxMsg.id = ECU_GW_2_D1_FRAME_ID;
	ecu_gw_2_d1_pack(TxMsg.Data8, &g_ecu_gw_2d1,  ECU_GW_2_D1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2DE_Read_Msg()
{
	ecu_gw_2_de_unpack(&g_ecu_gw_2de, RxMsg.Data8, ECU_GW_2_DE_LENGTH);
}
void ECU_GW_2DE_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_DE_LENGTH]; TxMsg.id = ECU_GW_2_DE_FRAME_ID;
	ecu_gw_2_de_pack(TxMsg.Data8, &g_ecu_gw_2de,  ECU_GW_2_DE_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2E6_Read_Msg()
{
	ecu_gw_2_e6_unpack(&g_ecu_gw_2e6, RxMsg.Data8, ECU_GW_2_E6_LENGTH);
}
void ECU_GW_2E6_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_E6_LENGTH]; TxMsg.id = ECU_GW_2_E6_FRAME_ID;
	ecu_gw_2_e6_pack(TxMsg.Data8, &g_ecu_gw_2e6,  ECU_GW_2_E6_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_31A_Read_Msg()
{
	ecu_acc_31_a_unpack(&g_ecu_acc_31a, RxMsg.Data8, ECU_ACC_31_A_LENGTH);
}
void ECU_ACC_31A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_31_A_LENGTH]; TxMsg.id = ECU_ACC_31_A_FRAME_ID;
	ecu_acc_31_a_pack(TxMsg.Data8, &g_ecu_acc_31a,  ECU_ACC_31_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_355_Read_Msg()
{
	ecu_gw_355_unpack(&g_ecu_gw_355, RxMsg.Data8, ECU_GW_355_LENGTH);
}
void ECU_GW_355_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_355_LENGTH]; TxMsg.id = ECU_GW_355_FRAME_ID;
	ecu_gw_355_pack(TxMsg.Data8, &g_ecu_gw_355,  ECU_GW_355_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3AF_Read_Msg()
{
	ecu_gw_3_af_unpack(&g_ecu_gw_3af, RxMsg.Data8, ECU_GW_3_AF_LENGTH);
}
void ECU_GW_3AF_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_AF_LENGTH]; TxMsg.id = ECU_GW_3_AF_FRAME_ID;
	ecu_gw_3_af_pack(TxMsg.Data8, &g_ecu_gw_3af,  ECU_GW_3_AF_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3B3_Read_Msg()
{
	ecu_gw_3_b3_unpack(&g_ecu_gw_3b3, RxMsg.Data8, ECU_GW_3_B3_LENGTH);
}
void ECU_GW_3B3_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_B3_LENGTH]; TxMsg.id = ECU_GW_3_B3_FRAME_ID;
	ecu_gw_3_b3_pack(TxMsg.Data8, &g_ecu_gw_3b3,  ECU_GW_3_B3_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3BD_Read_Msg()
{
	ecu_gw_3_bd_unpack(&g_ecu_gw_3bd, RxMsg.Data8, ECU_GW_3_BD_LENGTH);
}
void ECU_GW_3BD_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_BD_LENGTH]; TxMsg.id = ECU_GW_3_BD_FRAME_ID;
	ecu_gw_3_bd_pack(TxMsg.Data8, &g_ecu_gw_3bd,  ECU_GW_3_BD_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3C4_Read_Msg()
{
	ecu_gw_3_c4_unpack(&g_ecu_gw_3c4, RxMsg.Data8, ECU_GW_3_C4_LENGTH);
}
void ECU_GW_3C4_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_C4_LENGTH]; TxMsg.id = ECU_GW_3_C4_FRAME_ID;
	ecu_gw_3_c4_pack(TxMsg.Data8, &g_ecu_gw_3c4,  ECU_GW_3_C4_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3FD_Read_Msg()
{
	ecu_gw_3_fd_unpack(&g_ecu_gw_3fd, RxMsg.Data8, ECU_GW_3_FD_LENGTH);
}
void ECU_GW_3FD_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_FD_LENGTH]; TxMsg.id = ECU_GW_3_FD_FRAME_ID;
	ecu_gw_3_fd_pack(TxMsg.Data8, &g_ecu_gw_3fd,  ECU_GW_3_FD_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3FF_Read_Msg()
{
	ecu_gw_3_ff_unpack(&g_ecu_gw_3ff, RxMsg.Data8, ECU_GW_3_FF_LENGTH);
}
void ECU_GW_3FF_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_FF_LENGTH]; TxMsg.id = ECU_GW_3_FF_FRAME_ID;
	ecu_gw_3_ff_pack(TxMsg.Data8, &g_ecu_gw_3ff,  ECU_GW_3_FF_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_51E_Read_Msg()
{
	ecu_gw_51_e_unpack(&g_ecu_gw_51e, RxMsg.Data8, ECU_GW_51_E_LENGTH);
}
void ECU_GW_51E_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_51_E_LENGTH]; TxMsg.id = ECU_GW_51_E_FRAME_ID;
	ecu_gw_51_e_pack(TxMsg.Data8, &g_ecu_gw_51e,  ECU_GW_51_E_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_693_Read_Msg()
{
	ecu_acc_693_unpack(&g_ecu_acc_693, RxMsg.Data8, ECU_ACC_693_LENGTH);
}
void ECU_ACC_693_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_693_LENGTH]; TxMsg.id = ECU_ACC_693_FRAME_ID;
	ecu_acc_693_pack(TxMsg.Data8, &g_ecu_acc_693,  ECU_ACC_693_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_694_Read_Msg()
{
	ecu_las_694_unpack(&g_ecu_las_694, RxMsg.Data8, ECU_LAS_694_LENGTH);
}
void ECU_LAS_694_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_694_LENGTH]; TxMsg.id = ECU_LAS_694_FRAME_ID;
	ecu_las_694_pack(TxMsg.Data8, &g_ecu_las_694,  ECU_LAS_694_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_452_Read_Msg()
{
	ecu_las_452_unpack(&g_ecu_las_452, RxMsg.Data8, ECU_LAS_452_LENGTH);
}
void ECU_LAS_452_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_452_LENGTH]; TxMsg.id = ECU_LAS_452_FRAME_ID;
	ecu_las_452_pack(TxMsg.Data8, &g_ecu_las_452,  ECU_LAS_452_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_28C_Read_Msg()
{
	ecu_gw_28_c_unpack(&g_ecu_gw_28c, RxMsg.Data8, ECU_GW_28_C_LENGTH);
}
void ECU_GW_28C_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_28_C_LENGTH]; TxMsg.id = ECU_GW_28_C_FRAME_ID;
	ecu_gw_28_c_pack(TxMsg.Data8, &g_ecu_gw_28c,  ECU_GW_28_C_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_331_Read_Msg()
{
	ecu_gw_331_unpack(&g_ecu_gw_331, RxMsg.Data8, ECU_GW_331_LENGTH);
}
void ECU_GW_331_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_331_LENGTH]; TxMsg.id = ECU_GW_331_FRAME_ID;
	ecu_gw_331_pack(TxMsg.Data8, &g_ecu_gw_331,  ECU_GW_331_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_1AF_Read_Msg()
{
	ecu_gw_1_af_unpack(&g_ecu_gw_1af, RxMsg.Data8, ECU_GW_1_AF_LENGTH);
}
void ECU_GW_1AF_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_1_AF_LENGTH]; TxMsg.id = ECU_GW_1_AF_FRAME_ID;
	ecu_gw_1_af_pack(TxMsg.Data8, &g_ecu_gw_1af,  ECU_GW_1_AF_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_320_Read_Msg()
{
	ecu_gw_320_unpack(&g_ecu_gw_320, RxMsg.Data8, ECU_GW_320_LENGTH);
}
void ECU_GW_320_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_320_LENGTH]; TxMsg.id = ECU_GW_320_FRAME_ID;
	ecu_gw_320_pack(TxMsg.Data8, &g_ecu_gw_320,  ECU_GW_320_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_39A_Read_Msg()
{
	ecu_las_39_a_unpack(&g_ecu_las_39a, RxMsg.Data8, ECU_LAS_39_A_LENGTH);
}
void ECU_LAS_39A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_39_A_LENGTH]; TxMsg.id = ECU_LAS_39_A_FRAME_ID;
	ecu_las_39_a_pack(TxMsg.Data8, &g_ecu_las_39a,  ECU_LAS_39_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_310_Read_Msg()
{
	ecu_gw_310_unpack(&g_ecu_gw_310, RxMsg.Data8, ECU_GW_310_LENGTH);
}
void ECU_GW_310_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_310_LENGTH]; TxMsg.id = ECU_GW_310_FRAME_ID;
	ecu_gw_310_pack(TxMsg.Data8, &g_ecu_gw_310,  ECU_GW_310_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3E8_Read_Msg()
{
	ecu_gw_3_e8_unpack(&g_ecu_gw_3e8, RxMsg.Data8, ECU_GW_3_E8_LENGTH);
}
void ECU_GW_3E8_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_E8_LENGTH]; TxMsg.id = ECU_GW_3_E8_FRAME_ID;
	ecu_gw_3_e8_pack(TxMsg.Data8, &g_ecu_gw_3e8,  ECU_GW_3_E8_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3E7_Read_Msg()
{
	ecu_gw_3_e7_unpack(&g_ecu_gw_3e7, RxMsg.Data8, ECU_GW_3_E7_LENGTH);
}
void ECU_GW_3E7_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_E7_LENGTH]; TxMsg.id = ECU_GW_3_E7_FRAME_ID;
	ecu_gw_3_e7_pack(TxMsg.Data8, &g_ecu_gw_3e7,  ECU_GW_3_E7_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_38A_Read_Msg()
{
	ecu_gw_38_a_unpack(&g_ecu_gw_38a, RxMsg.Data8, ECU_GW_38_A_LENGTH);
}
void ECU_GW_38A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_38_A_LENGTH]; TxMsg.id = ECU_GW_38_A_FRAME_ID;
	ecu_gw_38_a_pack(TxMsg.Data8, &g_ecu_gw_38a,  ECU_GW_38_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_249_Read_Msg()
{
	ecu_gw_249_unpack(&g_ecu_gw_249, RxMsg.Data8, ECU_GW_249_LENGTH);
}
void ECU_GW_249_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_249_LENGTH]; TxMsg.id = ECU_GW_249_FRAME_ID;
	ecu_gw_249_pack(TxMsg.Data8, &g_ecu_gw_249,  ECU_GW_249_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_262_Read_Msg()
{
	ecu_gw_262_unpack(&g_ecu_gw_262, RxMsg.Data8, ECU_GW_262_LENGTH);
}
void ECU_GW_262_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_262_LENGTH]; TxMsg.id = ECU_GW_262_FRAME_ID;
	ecu_gw_262_pack(TxMsg.Data8, &g_ecu_gw_262,  ECU_GW_262_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_334_Read_Msg()
{
	ecu_gw_334_unpack(&g_ecu_gw_334, RxMsg.Data8, ECU_GW_334_LENGTH);
}
void ECU_GW_334_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_334_LENGTH]; TxMsg.id = ECU_GW_334_FRAME_ID;
	ecu_gw_334_pack(TxMsg.Data8, &g_ecu_gw_334,  ECU_GW_334_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_395_Read_Msg()
{
	ecu_gw_395_unpack(&g_ecu_gw_395, RxMsg.Data8, ECU_GW_395_LENGTH);
}
void ECU_GW_395_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_395_LENGTH]; TxMsg.id = ECU_GW_395_FRAME_ID;
	ecu_gw_395_pack(TxMsg.Data8, &g_ecu_gw_395,  ECU_GW_395_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_18A_Read_Msg()
{
	ecu_gw_18_a_unpack(&g_ecu_gw_18a, RxMsg.Data8, ECU_GW_18_A_LENGTH);
}
void ECU_GW_18A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_18_A_LENGTH]; TxMsg.id = ECU_GW_18_A_FRAME_ID;
	ecu_gw_18_a_pack(TxMsg.Data8, &g_ecu_gw_18a,  ECU_GW_18_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_24A_Read_Msg()
{
	ecu_gw_24_a_unpack(&g_ecu_gw_24a, RxMsg.Data8, ECU_GW_24_A_LENGTH);
}
void ECU_GW_24A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_24_A_LENGTH]; TxMsg.id = ECU_GW_24_A_FRAME_ID;
	ecu_gw_24_a_pack(TxMsg.Data8, &g_ecu_gw_24a,  ECU_GW_24_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_25C_Read_Msg()
{
	ecu_gw_25_c_unpack(&g_ecu_gw_25c, RxMsg.Data8, ECU_GW_25_C_LENGTH);
}
void ECU_GW_25C_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_25_C_LENGTH]; TxMsg.id = ECU_GW_25_C_FRAME_ID;
	ecu_gw_25_c_pack(TxMsg.Data8, &g_ecu_gw_25c,  ECU_GW_25_C_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2D7_Read_Msg()
{
	ecu_gw_2_d7_unpack(&g_ecu_gw_2d7, RxMsg.Data8, ECU_GW_2_D7_LENGTH);
}
void ECU_GW_2D7_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_D7_LENGTH]; TxMsg.id = ECU_GW_2_D7_FRAME_ID;
	ecu_gw_2_d7_pack(TxMsg.Data8, &g_ecu_gw_2d7,  ECU_GW_2_D7_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_341_Read_Msg()
{
	ecu_gw_341_unpack(&g_ecu_gw_341, RxMsg.Data8, ECU_GW_341_LENGTH);
}
void ECU_GW_341_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_341_LENGTH]; TxMsg.id = ECU_GW_341_FRAME_ID;
	ecu_gw_341_pack(TxMsg.Data8, &g_ecu_gw_341,  ECU_GW_341_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3D6_Read_Msg()
{
	ecu_gw_3_d6_unpack(&g_ecu_gw_3d6, RxMsg.Data8, ECU_GW_3_D6_LENGTH);
}
void ECU_GW_3D6_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_D6_LENGTH]; TxMsg.id = ECU_GW_3_D6_FRAME_ID;
	ecu_gw_3_d6_pack(TxMsg.Data8, &g_ecu_gw_3d6,  ECU_GW_3_D6_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3D8_Read_Msg()
{
	ecu_gw_3_d8_unpack(&g_ecu_gw_3d8, RxMsg.Data8, ECU_GW_3_D8_LENGTH);
}
void ECU_GW_3D8_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_D8_LENGTH]; TxMsg.id = ECU_GW_3_D8_FRAME_ID;
	ecu_gw_3_d8_pack(TxMsg.Data8, &g_ecu_gw_3d8,  ECU_GW_3_D8_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3DE_Read_Msg()
{
	ecu_gw_3_de_unpack(&g_ecu_gw_3de, RxMsg.Data8, ECU_GW_3_DE_LENGTH);
}
void ECU_GW_3DE_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_DE_LENGTH]; TxMsg.id = ECU_GW_3_DE_FRAME_ID;
	ecu_gw_3_de_pack(TxMsg.Data8, &g_ecu_gw_3de,  ECU_GW_3_DE_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3EE_Read_Msg()
{
	ecu_gw_3_ee_unpack(&g_ecu_gw_3ee, RxMsg.Data8, ECU_GW_3_EE_LENGTH);
}
void ECU_GW_3EE_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_EE_LENGTH]; TxMsg.id = ECU_GW_3_EE_FRAME_ID;
	ecu_gw_3_ee_pack(TxMsg.Data8, &g_ecu_gw_3ee,  ECU_GW_3_EE_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_6B0_Read_Msg()
{
	ecu_gw_6_b0_unpack(&g_ecu_gw_6b0, RxMsg.Data8, ECU_GW_6_B0_LENGTH);
}
void ECU_GW_6B0_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_6_B0_LENGTH]; TxMsg.id = ECU_GW_6_B0_FRAME_ID;
	ecu_gw_6_b0_pack(TxMsg.Data8, &g_ecu_gw_6b0,  ECU_GW_6_B0_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_2D3_Read_Msg()
{
	ecu_acc_2_d3_unpack(&g_ecu_acc_2d3, RxMsg.Data8, ECU_ACC_2_D3_LENGTH);
}
void ECU_ACC_2D3_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_2_D3_LENGTH]; TxMsg.id = ECU_ACC_2_D3_FRAME_ID;
	ecu_acc_2_d3_pack(TxMsg.Data8, &g_ecu_acc_2d3,  ECU_ACC_2_D3_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_301_Read_Msg()
{
	ecu_acc_301_unpack(&g_ecu_acc_301, RxMsg.Data8, ECU_ACC_301_LENGTH);
}
void ECU_ACC_301_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_301_LENGTH]; TxMsg.id = ECU_ACC_301_FRAME_ID;
	ecu_acc_301_pack(TxMsg.Data8, &g_ecu_acc_301,  ECU_ACC_301_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_30C_Read_Msg()
{
	ecu_las_30_c_unpack(&g_ecu_las_30c, RxMsg.Data8, ECU_LAS_30_C_LENGTH);
}
void ECU_LAS_30C_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_30_C_LENGTH]; TxMsg.id = ECU_LAS_30_C_FRAME_ID;
	ecu_las_30_c_pack(TxMsg.Data8, &g_ecu_las_30c,  ECU_LAS_30_C_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2E2_Read_Msg()
{
	ecu_gw_2_e2_unpack(&g_ecu_gw_2e2, RxMsg.Data8, ECU_GW_2_E2_LENGTH);
}
void ECU_GW_2E2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_E2_LENGTH]; TxMsg.id = ECU_GW_2_E2_FRAME_ID;
	ecu_gw_2_e2_pack(TxMsg.Data8, &g_ecu_gw_2e2,  ECU_GW_2_E2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2E3_Read_Msg()
{
	ecu_gw_2_e3_unpack(&g_ecu_gw_2e3, RxMsg.Data8, ECU_GW_2_E3_LENGTH);
}
void ECU_GW_2E3_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_E3_LENGTH]; TxMsg.id = ECU_GW_2_E3_FRAME_ID;
	ecu_gw_2_e3_pack(TxMsg.Data8, &g_ecu_gw_2e3,  ECU_GW_2_E3_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2C9_Read_Msg()
{
	ecu_gw_2_c9_unpack(&g_ecu_gw_2c9, RxMsg.Data8, ECU_GW_2_C9_LENGTH);
}
void ECU_GW_2C9_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_C9_LENGTH]; TxMsg.id = ECU_GW_2_C9_FRAME_ID;
	ecu_gw_2_c9_pack(TxMsg.Data8, &g_ecu_gw_2c9,  ECU_GW_2_C9_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_761_Read_Msg()
{
	ecu_gw_761_unpack(&g_ecu_gw_761, RxMsg.Data8, ECU_GW_761_LENGTH);
}
void ECU_GW_761_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_761_LENGTH]; TxMsg.id = ECU_GW_761_FRAME_ID;
	ecu_gw_761_pack(TxMsg.Data8, &g_ecu_gw_761,  ECU_GW_761_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_57D_Read_Msg()
{
	ecu_gw_57_d_unpack(&g_ecu_gw_57d, RxMsg.Data8, ECU_GW_57_D_LENGTH);
}
void ECU_GW_57D_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_57_D_LENGTH]; TxMsg.id = ECU_GW_57_D_FRAME_ID;
	ecu_gw_57_d_pack(TxMsg.Data8, &g_ecu_gw_57d,  ECU_GW_57_D_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_518_Read_Msg()
{
	ecu_gw_518_unpack(&g_ecu_gw_518, RxMsg.Data8, ECU_GW_518_LENGTH);
}
void ECU_GW_518_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_518_LENGTH]; TxMsg.id = ECU_GW_518_FRAME_ID;
	ecu_gw_518_pack(TxMsg.Data8, &g_ecu_gw_518,  ECU_GW_518_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_2AE_Read_Msg()
{
	ecu_gw_2_ae_unpack(&g_ecu_gw_2ae, RxMsg.Data8, ECU_GW_2_AE_LENGTH);
}
void ECU_GW_2AE_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_2_AE_LENGTH]; TxMsg.id = ECU_GW_2_AE_FRAME_ID;
	ecu_gw_2_ae_pack(TxMsg.Data8, &g_ecu_gw_2ae,  ECU_GW_2_AE_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_3D9_Read_Msg()
{
	ecu_las_3_d9_unpack(&g_ecu_las_3d9, RxMsg.Data8, ECU_LAS_3_D9_LENGTH);
}
void ECU_LAS_3D9_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_3_D9_LENGTH]; TxMsg.id = ECU_LAS_3_D9_FRAME_ID;
	ecu_las_3_d9_pack(TxMsg.Data8, &g_ecu_las_3d9,  ECU_LAS_3_D9_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_LAS_3DB_Read_Msg()
{
	ecu_las_3_db_unpack(&g_ecu_las_3db, RxMsg.Data8, ECU_LAS_3_DB_LENGTH);
}
void ECU_LAS_3DB_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_LAS_3_DB_LENGTH]; TxMsg.id = ECU_LAS_3_DB_FRAME_ID;
	ecu_las_3_db_pack(TxMsg.Data8, &g_ecu_las_3db,  ECU_LAS_3_DB_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_371_Read_Msg()
{
	ecu_gw_371_unpack(&g_ecu_gw_371, RxMsg.Data8, ECU_GW_371_LENGTH);
}
void ECU_GW_371_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_371_LENGTH]; TxMsg.id = ECU_GW_371_FRAME_ID;
	ecu_gw_371_pack(TxMsg.Data8, &g_ecu_gw_371,  ECU_GW_371_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_31C_Read_Msg()
{
	ecu_gw_31_c_unpack(&g_ecu_gw_31c, RxMsg.Data8, ECU_GW_31_C_LENGTH);
}
void ECU_GW_31C_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_31_C_LENGTH]; TxMsg.id = ECU_GW_31_C_FRAME_ID;
	ecu_gw_31_c_pack(TxMsg.Data8, &g_ecu_gw_31c,  ECU_GW_31_C_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_10A_Read_Msg()
{
	ecu_gw_10_a_unpack(&g_ecu_gw_10a, RxMsg.Data8, ECU_GW_10_A_LENGTH);
}
void ECU_GW_10A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_10_A_LENGTH]; TxMsg.id = ECU_GW_10_A_FRAME_ID;
	ecu_gw_10_a_pack(TxMsg.Data8, &g_ecu_gw_10a,  ECU_GW_10_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_BDC_400_Read_Msg()
{
	ecu_bdc_400_unpack(&g_ecu_bdc_400, RxMsg.Data8, ECU_BDC_400_LENGTH);
}
void ECU_BDC_400_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_BDC_400_LENGTH]; TxMsg.id = ECU_BDC_400_FRAME_ID;
	ecu_bdc_400_pack(TxMsg.Data8, &g_ecu_bdc_400,  ECU_BDC_400_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_ACC_453_Read_Msg()
{
	ecu_acc_453_unpack(&g_ecu_acc_453, RxMsg.Data8, ECU_ACC_453_LENGTH);
}
void ECU_ACC_453_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_ACC_453_LENGTH]; TxMsg.id = ECU_ACC_453_FRAME_ID;
	ecu_acc_453_pack(TxMsg.Data8, &g_ecu_acc_453,  ECU_ACC_453_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_7DF_Read_Msg()
{
	ecu_gw_7_df_unpack(&g_ecu_gw_7df, RxMsg.Data8, ECU_GW_7_DF_LENGTH);
}
void ECU_GW_7DF_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_7_DF_LENGTH]; TxMsg.id = ECU_GW_7_DF_FRAME_ID;
	ecu_gw_7_df_pack(TxMsg.Data8, &g_ecu_gw_7df,  ECU_GW_7_DF_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_15D_Read_Msg()
{
	ecu_gw_15_d_unpack(&g_ecu_gw_15d, RxMsg.Data8, ECU_GW_15_D_LENGTH);
}
void ECU_GW_15D_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_15_D_LENGTH]; TxMsg.id = ECU_GW_15_D_FRAME_ID;
	ecu_gw_15_d_pack(TxMsg.Data8, &g_ecu_gw_15d,  ECU_GW_15_D_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_10F_Read_Msg()
{
	ecu_gw_10_f_unpack(&g_ecu_gw_10f, RxMsg.Data8, ECU_GW_10_F_LENGTH);
}
void ECU_GW_10F_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_10_F_LENGTH]; TxMsg.id = ECU_GW_10_F_FRAME_ID;
	ecu_gw_10_f_pack(TxMsg.Data8, &g_ecu_gw_10f,  ECU_GW_10_F_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_32A_Read_Msg()
{
	ecu_gw_32_a_unpack(&g_ecu_gw_32a, RxMsg.Data8, ECU_GW_32_A_LENGTH);
}
void ECU_GW_32A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_32_A_LENGTH]; TxMsg.id = ECU_GW_32_A_FRAME_ID;
	ecu_gw_32_a_pack(TxMsg.Data8, &g_ecu_gw_32a,  ECU_GW_32_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_3BE_Read_Msg()
{
	ecu_gw_3_be_unpack(&g_ecu_gw_3be, RxMsg.Data8, ECU_GW_3_BE_LENGTH);
}
void ECU_GW_3BE_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_3_BE_LENGTH]; TxMsg.id = ECU_GW_3_BE_FRAME_ID;
	ecu_gw_3_be_pack(TxMsg.Data8, &g_ecu_gw_3be,  ECU_GW_3_BE_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void ECU_GW_37A_Read_Msg()
{
	ecu_gw_37_a_unpack(&g_ecu_gw_37a, RxMsg.Data8, ECU_GW_37_A_LENGTH);
}
void ECU_GW_37A_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[ECU_GW_37_A_LENGTH]; TxMsg.id = ECU_GW_37_A_FRAME_ID;
	ecu_gw_37_a_pack(TxMsg.Data8, &g_ecu_gw_37a,  ECU_GW_37_A_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
