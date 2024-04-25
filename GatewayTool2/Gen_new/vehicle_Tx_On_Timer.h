#ifndef __VEHICLE_TX_ON_TIMER_H__
#define __VEHICLE_TX_ON_TIMER_H__
#include "datatypes.h"

void on_Timer_vehicle_CR_FD1      (u8_t Direction);
void on_Timer_vehicle_ACC_FD1      (u8_t Direction);
void on_Timer_vehicle_DCT5      (u8_t Direction);
void on_Timer_vehicle_BCM1      (u8_t Direction);
void on_Timer_vehicle_BCM8      (u8_t Direction);
void on_Timer_vehicle_PEPS2      (u8_t Direction);
void on_Timer_vehicle_AC2      (u8_t Direction);
void on_Timer_vehicle_CSA1      (u8_t Direction);
void on_Timer_vehicle_CSA2      (u8_t Direction);
void on_Timer_vehicle_ABM2      (u8_t Direction);
void on_Timer_vehicle_IP2      (u8_t Direction);
void on_Timer_vehicle_HUT_FD1      (u8_t Direction);
void on_Timer_vehicle_HUT34      (u8_t Direction);
void on_Timer_vehicle_ESP_FD2      (u8_t Direction);
void on_Timer_vehicle_ESP_FD3      (u8_t Direction);
void on_Timer_vehicle_ECM_FD1      (u8_t Direction);
void on_Timer_vehicle_ECM_FD2      (u8_t Direction);
void on_Timer_vehicle_Ibooster_FD2      (u8_t Direction);
void on_Timer_vehicle_EBOOSTER_FD1      (u8_t Direction);
void on_Timer_vehicle_ADAS_AD1      (u8_t Direction);
void on_Timer_vehicle_DiagFuncReq      (u8_t Direction);
void on_Timer_vehicle_FR_Phy_Req      (u8_t Direction);
void on_Timer_vehicle_FR_Phy_Resp      (u8_t Direction);
void on_Timer_vehicle_RSDS_FD1      (u8_t Direction);
void on_Timer_vehicle_RSDS_FD2      (u8_t Direction);
void on_Timer_vehicle_Trailer1      (u8_t Direction);
void on_Timer_vehicle_F_PBOX1      (u8_t Direction);
void on_Timer_vehicle_DDCM1      (u8_t Direction);
void on_Timer_vehicle_PDCM1      (u8_t Direction);
void on_Timer_vehicle_R_PBOX1      (u8_t Direction);
#endif
