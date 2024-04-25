
#ifndef __VEHICLE_TXRX_CAN_H__
#define __VEHICLE_TXRX_CAN_H__

#include "datatypes.h"
#include "can.h"

extern void VEHICLE_CR_FD1_Read_Msg();
extern void VEHICLE_CR_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_ACC_FD1_Read_Msg();
extern void VEHICLE_ACC_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_DCT5_Read_Msg();
extern void VEHICLE_DCT5_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_BCM1_Read_Msg();
extern void VEHICLE_BCM1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_BCM8_Read_Msg();
extern void VEHICLE_BCM8_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_PEPS2_Read_Msg();
extern void VEHICLE_PEPS2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_AC2_Read_Msg();
extern void VEHICLE_AC2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_CSA1_Read_Msg();
extern void VEHICLE_CSA1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_CSA2_Read_Msg();
extern void VEHICLE_CSA2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_ABM2_Read_Msg();
extern void VEHICLE_ABM2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_IP2_Read_Msg();
extern void VEHICLE_IP2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_HUT_FD1_Read_Msg();
extern void VEHICLE_HUT_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_HUT34_Read_Msg();
extern void VEHICLE_HUT34_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_ESP_FD2_Read_Msg();
extern void VEHICLE_ESP_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_ESP_FD3_Read_Msg();
extern void VEHICLE_ESP_FD3_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_ECM_FD1_Read_Msg();
extern void VEHICLE_ECM_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_ECM_FD2_Read_Msg();
extern void VEHICLE_ECM_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_IBOOSTER_FD2_Read_Msg();
extern void VEHICLE_IBOOSTER_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_EBOOSTER_FD1_Read_Msg();
extern void VEHICLE_EBOOSTER_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_ADAS_AD1_Read_Msg();
extern void VEHICLE_ADAS_AD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_DIAGFUNCREQ_Read_Msg();
extern void VEHICLE_DIAGFUNCREQ_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_FR_PHY_REQ_Read_Msg();
extern void VEHICLE_FR_PHY_REQ_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_FR_PHY_RESP_Read_Msg();
extern void VEHICLE_FR_PHY_RESP_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_RSDS_FD1_Read_Msg();
extern void VEHICLE_RSDS_FD1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_RSDS_FD2_Read_Msg();
extern void VEHICLE_RSDS_FD2_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_TRAILER1_Read_Msg();
extern void VEHICLE_TRAILER1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_F_PBOX1_Read_Msg();
extern void VEHICLE_F_PBOX1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_DDCM1_Read_Msg();
extern void VEHICLE_DDCM1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_PDCM1_Read_Msg();
extern void VEHICLE_PDCM1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);
extern void VEHICLE_R_PBOX1_Read_Msg();
extern void VEHICLE_R_PBOX1_Send_Msg(CANHandle_t Direction,uint16_t Msgtype);

#endif
