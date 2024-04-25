
#include "datatypes.h"
#include "can.h"
#include "vehicle.h"
#include "vehicle_Tx_mapping.h"

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

void VEHICLE_CR_FD1_Read_Msg()
{
	vehicle_cr_fd1_unpack(&g_vehicle_cr_fd1, RxMsg.Data8, VEHICLE_CR_FD1_LENGTH);
}
void VEHICLE_CR_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_CR_FD1_LENGTH]; TxMsg.id = VEHICLE_CR_FD1_FRAME_ID;
	vehicle_cr_fd1_pack(TxMsg.Data8, &g_vehicle_cr_fd1,  VEHICLE_CR_FD1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_ACC_FD1_Read_Msg()
{
	vehicle_acc_fd1_unpack(&g_vehicle_acc_fd1, RxMsg.Data8, VEHICLE_ACC_FD1_LENGTH);
}
void VEHICLE_ACC_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_ACC_FD1_LENGTH]; TxMsg.id = VEHICLE_ACC_FD1_FRAME_ID;
	vehicle_acc_fd1_pack(TxMsg.Data8, &g_vehicle_acc_fd1,  VEHICLE_ACC_FD1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_DCT5_Read_Msg()
{
	vehicle_dct5_unpack(&g_vehicle_dct5, RxMsg.Data8, VEHICLE_DCT5_LENGTH);
}
void VEHICLE_DCT5_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_DCT5_LENGTH]; TxMsg.id = VEHICLE_DCT5_FRAME_ID;
	vehicle_dct5_pack(TxMsg.Data8, &g_vehicle_dct5,  VEHICLE_DCT5_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_BCM1_Read_Msg()
{
	vehicle_bcm1_unpack(&g_vehicle_bcm1, RxMsg.Data8, VEHICLE_BCM1_LENGTH);
}
void VEHICLE_BCM1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_BCM1_LENGTH]; TxMsg.id = VEHICLE_BCM1_FRAME_ID;
	vehicle_bcm1_pack(TxMsg.Data8, &g_vehicle_bcm1,  VEHICLE_BCM1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_BCM8_Read_Msg()
{
	vehicle_bcm8_unpack(&g_vehicle_bcm8, RxMsg.Data8, VEHICLE_BCM8_LENGTH);
}
void VEHICLE_BCM8_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_BCM8_LENGTH]; TxMsg.id = VEHICLE_BCM8_FRAME_ID;
	vehicle_bcm8_pack(TxMsg.Data8, &g_vehicle_bcm8,  VEHICLE_BCM8_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_PEPS2_Read_Msg()
{
	vehicle_peps2_unpack(&g_vehicle_peps2, RxMsg.Data8, VEHICLE_PEPS2_LENGTH);
}
void VEHICLE_PEPS2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_PEPS2_LENGTH]; TxMsg.id = VEHICLE_PEPS2_FRAME_ID;
	vehicle_peps2_pack(TxMsg.Data8, &g_vehicle_peps2,  VEHICLE_PEPS2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_AC2_Read_Msg()
{
	vehicle_ac2_unpack(&g_vehicle_ac2, RxMsg.Data8, VEHICLE_AC2_LENGTH);
}
void VEHICLE_AC2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_AC2_LENGTH]; TxMsg.id = VEHICLE_AC2_FRAME_ID;
	vehicle_ac2_pack(TxMsg.Data8, &g_vehicle_ac2,  VEHICLE_AC2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_CSA1_Read_Msg()
{
	vehicle_csa1_unpack(&g_vehicle_csa1, RxMsg.Data8, VEHICLE_CSA1_LENGTH);
}
void VEHICLE_CSA1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_CSA1_LENGTH]; TxMsg.id = VEHICLE_CSA1_FRAME_ID;
	vehicle_csa1_pack(TxMsg.Data8, &g_vehicle_csa1,  VEHICLE_CSA1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_CSA2_Read_Msg()
{
	vehicle_csa2_unpack(&g_vehicle_csa2, RxMsg.Data8, VEHICLE_CSA2_LENGTH);
}
void VEHICLE_CSA2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_CSA2_LENGTH]; TxMsg.id = VEHICLE_CSA2_FRAME_ID;
	vehicle_csa2_pack(TxMsg.Data8, &g_vehicle_csa2,  VEHICLE_CSA2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_ABM2_Read_Msg()
{
	vehicle_abm2_unpack(&g_vehicle_abm2, RxMsg.Data8, VEHICLE_ABM2_LENGTH);
}
void VEHICLE_ABM2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_ABM2_LENGTH]; TxMsg.id = VEHICLE_ABM2_FRAME_ID;
	vehicle_abm2_pack(TxMsg.Data8, &g_vehicle_abm2,  VEHICLE_ABM2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_IP2_Read_Msg()
{
	vehicle_ip2_unpack(&g_vehicle_ip2, RxMsg.Data8, VEHICLE_IP2_LENGTH);
}
void VEHICLE_IP2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_IP2_LENGTH]; TxMsg.id = VEHICLE_IP2_FRAME_ID;
	vehicle_ip2_pack(TxMsg.Data8, &g_vehicle_ip2,  VEHICLE_IP2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_HUT_FD1_Read_Msg()
{
	vehicle_hut_fd1_unpack(&g_vehicle_hut_fd1, RxMsg.Data8, VEHICLE_HUT_FD1_LENGTH);
}
void VEHICLE_HUT_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_HUT_FD1_LENGTH]; TxMsg.id = VEHICLE_HUT_FD1_FRAME_ID;
	vehicle_hut_fd1_pack(TxMsg.Data8, &g_vehicle_hut_fd1,  VEHICLE_HUT_FD1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_HUT34_Read_Msg()
{
	vehicle_hut34_unpack(&g_vehicle_hut34, RxMsg.Data8, VEHICLE_HUT34_LENGTH);
}
void VEHICLE_HUT34_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_HUT34_LENGTH]; TxMsg.id = VEHICLE_HUT34_FRAME_ID;
	vehicle_hut34_pack(TxMsg.Data8, &g_vehicle_hut34,  VEHICLE_HUT34_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_ESP_FD2_Read_Msg()
{
	vehicle_esp_fd2_unpack(&g_vehicle_esp_fd2, RxMsg.Data8, VEHICLE_ESP_FD2_LENGTH);
}
void VEHICLE_ESP_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_ESP_FD2_LENGTH]; TxMsg.id = VEHICLE_ESP_FD2_FRAME_ID;
	vehicle_esp_fd2_pack(TxMsg.Data8, &g_vehicle_esp_fd2,  VEHICLE_ESP_FD2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_ESP_FD3_Read_Msg()
{
	vehicle_esp_fd3_unpack(&g_vehicle_esp_fd3, RxMsg.Data8, VEHICLE_ESP_FD3_LENGTH);
}
void VEHICLE_ESP_FD3_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_ESP_FD3_LENGTH]; TxMsg.id = VEHICLE_ESP_FD3_FRAME_ID;
	vehicle_esp_fd3_pack(TxMsg.Data8, &g_vehicle_esp_fd3,  VEHICLE_ESP_FD3_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_ECM_FD1_Read_Msg()
{
	vehicle_ecm_fd1_unpack(&g_vehicle_ecm_fd1, RxMsg.Data8, VEHICLE_ECM_FD1_LENGTH);
}
void VEHICLE_ECM_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_ECM_FD1_LENGTH]; TxMsg.id = VEHICLE_ECM_FD1_FRAME_ID;
	vehicle_ecm_fd1_pack(TxMsg.Data8, &g_vehicle_ecm_fd1,  VEHICLE_ECM_FD1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_ECM_FD2_Read_Msg()
{
	vehicle_ecm_fd2_unpack(&g_vehicle_ecm_fd2, RxMsg.Data8, VEHICLE_ECM_FD2_LENGTH);
}
void VEHICLE_ECM_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_ECM_FD2_LENGTH]; TxMsg.id = VEHICLE_ECM_FD2_FRAME_ID;
	vehicle_ecm_fd2_pack(TxMsg.Data8, &g_vehicle_ecm_fd2,  VEHICLE_ECM_FD2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_IBOOSTER_FD2_Read_Msg()
{
	vehicle_ibooster_fd2_unpack(&g_vehicle_ibooster_fd2, RxMsg.Data8, VEHICLE_IBOOSTER_FD2_LENGTH);
}
void VEHICLE_IBOOSTER_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_IBOOSTER_FD2_LENGTH]; TxMsg.id = VEHICLE_IBOOSTER_FD2_FRAME_ID;
	vehicle_ibooster_fd2_pack(TxMsg.Data8, &g_vehicle_ibooster_fd2,  VEHICLE_IBOOSTER_FD2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_EBOOSTER_FD1_Read_Msg()
{
	vehicle_ebooster_fd1_unpack(&g_vehicle_ebooster_fd1, RxMsg.Data8, VEHICLE_EBOOSTER_FD1_LENGTH);
}
void VEHICLE_EBOOSTER_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_EBOOSTER_FD1_LENGTH]; TxMsg.id = VEHICLE_EBOOSTER_FD1_FRAME_ID;
	vehicle_ebooster_fd1_pack(TxMsg.Data8, &g_vehicle_ebooster_fd1,  VEHICLE_EBOOSTER_FD1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_ADAS_AD1_Read_Msg()
{
	vehicle_adas_ad1_unpack(&g_vehicle_adas_ad1, RxMsg.Data8, VEHICLE_ADAS_AD1_LENGTH);
}
void VEHICLE_ADAS_AD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_ADAS_AD1_LENGTH]; TxMsg.id = VEHICLE_ADAS_AD1_FRAME_ID;
	vehicle_adas_ad1_pack(TxMsg.Data8, &g_vehicle_adas_ad1,  VEHICLE_ADAS_AD1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_DIAGFUNCREQ_Read_Msg()
{
	vehicle_diag_func_req_unpack(&g_vehicle_diagfuncreq, RxMsg.Data8, VEHICLE_DIAG_FUNC_REQ_LENGTH);
}
void VEHICLE_DIAGFUNCREQ_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_DIAG_FUNC_REQ_LENGTH]; TxMsg.id = VEHICLE_DIAG_FUNC_REQ_FRAME_ID;
	vehicle_diag_func_req_pack(TxMsg.Data8, &g_vehicle_diagfuncreq,  VEHICLE_DIAG_FUNC_REQ_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_FR_PHY_REQ_Read_Msg()
{
	vehicle_fr_phy_req_unpack(&g_vehicle_fr_phy_req, RxMsg.Data8, VEHICLE_FR_PHY_REQ_LENGTH);
}
void VEHICLE_FR_PHY_REQ_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_FR_PHY_REQ_LENGTH]; TxMsg.id = VEHICLE_FR_PHY_REQ_FRAME_ID;
	vehicle_fr_phy_req_pack(TxMsg.Data8, &g_vehicle_fr_phy_req,  VEHICLE_FR_PHY_REQ_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_FR_PHY_RESP_Read_Msg()
{
	vehicle_fr_phy_resp_unpack(&g_vehicle_fr_phy_resp, RxMsg.Data8, VEHICLE_FR_PHY_RESP_LENGTH);
}
void VEHICLE_FR_PHY_RESP_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_FR_PHY_RESP_LENGTH]; TxMsg.id = VEHICLE_FR_PHY_RESP_FRAME_ID;
	vehicle_fr_phy_resp_pack(TxMsg.Data8, &g_vehicle_fr_phy_resp,  VEHICLE_FR_PHY_RESP_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_RSDS_FD1_Read_Msg()
{
	vehicle_rsds_fd1_unpack(&g_vehicle_rsds_fd1, RxMsg.Data8, VEHICLE_RSDS_FD1_LENGTH);
}
void VEHICLE_RSDS_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_RSDS_FD1_LENGTH]; TxMsg.id = VEHICLE_RSDS_FD1_FRAME_ID;
	vehicle_rsds_fd1_pack(TxMsg.Data8, &g_vehicle_rsds_fd1,  VEHICLE_RSDS_FD1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_RSDS_FD2_Read_Msg()
{
	vehicle_rsds_fd2_unpack(&g_vehicle_rsds_fd2, RxMsg.Data8, VEHICLE_RSDS_FD2_LENGTH);
}
void VEHICLE_RSDS_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_RSDS_FD2_LENGTH]; TxMsg.id = VEHICLE_RSDS_FD2_FRAME_ID;
	vehicle_rsds_fd2_pack(TxMsg.Data8, &g_vehicle_rsds_fd2,  VEHICLE_RSDS_FD2_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_TRAILER1_Read_Msg()
{
	vehicle_trailer1_unpack(&g_vehicle_trailer1, RxMsg.Data8, VEHICLE_TRAILER1_LENGTH);
}
void VEHICLE_TRAILER1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_TRAILER1_LENGTH]; TxMsg.id = VEHICLE_TRAILER1_FRAME_ID;
	vehicle_trailer1_pack(TxMsg.Data8, &g_vehicle_trailer1,  VEHICLE_TRAILER1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_F_PBOX1_Read_Msg()
{
	vehicle_f_pbox1_unpack(&g_vehicle_f_pbox1, RxMsg.Data8, VEHICLE_F_PBOX1_LENGTH);
}
void VEHICLE_F_PBOX1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_F_PBOX1_LENGTH]; TxMsg.id = VEHICLE_F_PBOX1_FRAME_ID;
	vehicle_f_pbox1_pack(TxMsg.Data8, &g_vehicle_f_pbox1,  VEHICLE_F_PBOX1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_DDCM1_Read_Msg()
{
	vehicle_ddcm1_unpack(&g_vehicle_ddcm1, RxMsg.Data8, VEHICLE_DDCM1_LENGTH);
}
void VEHICLE_DDCM1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_DDCM1_LENGTH]; TxMsg.id = VEHICLE_DDCM1_FRAME_ID;
	vehicle_ddcm1_pack(TxMsg.Data8, &g_vehicle_ddcm1,  VEHICLE_DDCM1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_PDCM1_Read_Msg()
{
	vehicle_pdcm1_unpack(&g_vehicle_pdcm1, RxMsg.Data8, VEHICLE_PDCM1_LENGTH);
}
void VEHICLE_PDCM1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_PDCM1_LENGTH]; TxMsg.id = VEHICLE_PDCM1_FRAME_ID;
	vehicle_pdcm1_pack(TxMsg.Data8, &g_vehicle_pdcm1,  VEHICLE_PDCM1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
void VEHICLE_R_PBOX1_Read_Msg()
{
	vehicle_r_pbox1_unpack(&g_vehicle_r_pbox1, RxMsg.Data8, VEHICLE_R_PBOX1_LENGTH);
}
void VEHICLE_R_PBOX1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype)
{
	TxMsg.bufftype = CAN_BUFFER_TX_MSG;
	TxMsg.msgtype = Msgtype;
	TxMsg.dlc = length2dlc[VEHICLE_R_PBOX1_LENGTH]; TxMsg.id = VEHICLE_R_PBOX1_FRAME_ID;
	vehicle_r_pbox1_pack(TxMsg.Data8, &g_vehicle_r_pbox1,  VEHICLE_R_PBOX1_LENGTH);
	CAN_Write(Direction,&TxMsg);
}
