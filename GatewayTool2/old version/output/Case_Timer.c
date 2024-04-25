
#include "datatypes.h"
#include "can.h"
#include "can_user.h"
#include "hardware.h"
#include "lpc407x_8x_177x_8x.h"
#include "ecu_Tx_On_Timer.h"
#include "vehicle_Tx_On_Timer.h"

void Timer_5ms ( void )
{
}

void Timer_500ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_GW_50          (CAN_BUS1);
    on_Timer_ecu_GW_347          (CAN_BUS1);
    on_Timer_ecu_GW_390          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_GW_530          (CAN_BUS1);
    on_Timer_ecu_GW_51E          (CAN_BUS1);
    on_Timer_ecu_ACC_693          (CAN_BUS1);
    on_Timer_ecu_LAS_694          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_GW_518          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
    on_Timer_vehicle_ADAS_AD1          (CAN_BUS2);
}

void Timer_50ms ( void )
{
    on_Timer_ecu_GW_2A4          (CAN_BUS1);
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_GW_2DE          (CAN_BUS1);
    on_Timer_ecu_GW_2E6          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_2D7          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_2E2          (CAN_BUS1);
    on_Timer_ecu_GW_2E3          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_GW_2AE          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
    on_Timer_vehicle_BCM1          (CAN_BUS2);
    on_Timer_vehicle_PEPS2          (CAN_BUS2);
    on_Timer_vehicle_IP2          (CAN_BUS2);
    on_Timer_vehicle_Trailer1          (CAN_BUS2);
    on_Timer_vehicle_F_PBOX1          (CAN_BUS2);
    on_Timer_vehicle_R_PBOX1          (CAN_BUS2);
}

void Timer_10ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_GW_170          (CAN_BUS1);
    on_Timer_ecu_GW_180          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_GW_187          (CAN_BUS1);
    on_Timer_ecu_GW_197          (CAN_BUS1);
    on_Timer_ecu_GW_194          (CAN_BUS1);
    on_Timer_ecu_GW_17D          (CAN_BUS1);
    on_Timer_ecu_GW_17E          (CAN_BUS1);
    on_Timer_ecu_ACC_1BA          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_1AF          (CAN_BUS1);
    on_Timer_ecu_GW_18A          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_GW_10A          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
    on_Timer_vehicle_CSA2          (CAN_BUS2);
    on_Timer_vehicle_ECM_FD1          (CAN_BUS2);
    on_Timer_vehicle_DiagFuncReq          (CAN_BUS2);
    on_Timer_vehicle_FR_Phy_Req          (CAN_BUS2);
    on_Timer_vehicle_FR_Phy_Resp          (CAN_BUS2);
}

void Timer_30ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
}

void Timer_1000ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_LAS_592          (CAN_BUS1);
    on_Timer_ecu_ACC_594          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_GW_516          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
    on_Timer_vehicle_HUT34          (CAN_BUS2);
}

void Timer____1ms ( void )
{
}

void Timer_5000ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
}

void Timer_200ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
    on_Timer_vehicle_RSDS_FD2          (CAN_BUS2);
}

void Timer_40ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_GW_298          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_GW_28B          (CAN_BUS1);
    on_Timer_ecu_GW_2D1          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_28C          (CAN_BUS1);
    on_Timer_ecu_GW_38A          (CAN_BUS1);
    on_Timer_ecu_GW_262          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_ACC_2D3          (CAN_BUS1);
    on_Timer_ecu_GW_2C9          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
}

void Timer_100ms ( void )
{
    on_Timer_ecu_ACC_382          (CAN_BUS1);
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_ACC_307          (CAN_BUS1);
    on_Timer_ecu_ACC_312          (CAN_BUS1);
    on_Timer_ecu_GW_340          (CAN_BUS1);
    on_Timer_ecu_GW_365          (CAN_BUS1);
    on_Timer_ecu_GW_366          (CAN_BUS1);
    on_Timer_ecu_GW_387          (CAN_BUS1);
    on_Timer_ecu_GW_396          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_ACC_31A          (CAN_BUS1);
    on_Timer_ecu_GW_355          (CAN_BUS1);
    on_Timer_ecu_GW_3AF          (CAN_BUS1);
    on_Timer_ecu_GW_3B3          (CAN_BUS1);
    on_Timer_ecu_GW_3BD          (CAN_BUS1);
    on_Timer_ecu_GW_3C4          (CAN_BUS1);
    on_Timer_ecu_GW_3FD          (CAN_BUS1);
    on_Timer_ecu_GW_3FF          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_331          (CAN_BUS1);
    on_Timer_ecu_GW_320          (CAN_BUS1);
    on_Timer_ecu_LAS_39A          (CAN_BUS1);
    on_Timer_ecu_GW_310          (CAN_BUS1);
    on_Timer_ecu_GW_3E8          (CAN_BUS1);
    on_Timer_ecu_GW_3E7          (CAN_BUS1);
    on_Timer_ecu_GW_334          (CAN_BUS1);
    on_Timer_ecu_GW_395          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_341          (CAN_BUS1);
    on_Timer_ecu_GW_3D6          (CAN_BUS1);
    on_Timer_ecu_GW_3D8          (CAN_BUS1);
    on_Timer_ecu_GW_3DE          (CAN_BUS1);
    on_Timer_ecu_GW_3EE          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_ACC_301          (CAN_BUS1);
    on_Timer_ecu_LAS_30C          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_LAS_3D9          (CAN_BUS1);
    on_Timer_ecu_LAS_3DB          (CAN_BUS1);
    on_Timer_ecu_GW_371          (CAN_BUS1);
    on_Timer_ecu_GW_31C          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
    on_Timer_ecu_GW_32A          (CAN_BUS1);
    on_Timer_ecu_GW_3BE          (CAN_BUS1);
    on_Timer_ecu_GW_37A          (CAN_BUS1);
    on_Timer_vehicle_BCM8          (CAN_BUS2);
    on_Timer_vehicle_AC2          (CAN_BUS2);
    on_Timer_vehicle_HUT_FD1          (CAN_BUS2);
    on_Timer_vehicle_DDCM1          (CAN_BUS2);
    on_Timer_vehicle_PDCM1          (CAN_BUS2);
}

void Timer_20ms ( void )
{
    on_Timer_ecu_GW_765          (CAN_BUS1);
    on_Timer_ecu_ACC_76D          (CAN_BUS1);
    on_Timer_ecu_GW_791          (CAN_BUS1);
    on_Timer_ecu_ACC_799          (CAN_BUS1);
    on_Timer_ecu_GW_752          (CAN_BUS1);
    on_Timer_ecu_LAS_75A          (CAN_BUS1);
    on_Timer_ecu_GW_763          (CAN_BUS1);
    on_Timer_ecu_LAS_76B          (CAN_BUS1);
    on_Timer_ecu_ACC_244          (CAN_BUS1);
    on_Timer_ecu_GW_278          (CAN_BUS1);
    on_Timer_ecu_GW_507          (CAN_BUS1);
    on_Timer_ecu_GW_20B          (CAN_BUS1);
    on_Timer_ecu_GW_24F          (CAN_BUS1);
    on_Timer_ecu_LAS_452          (CAN_BUS1);
    on_Timer_ecu_GW_249          (CAN_BUS1);
    on_Timer_ecu_GW_24A          (CAN_BUS1);
    on_Timer_ecu_GW_25C          (CAN_BUS1);
    on_Timer_ecu_GW_6B0          (CAN_BUS1);
    on_Timer_ecu_GW_761          (CAN_BUS1);
    on_Timer_ecu_GW_57D          (CAN_BUS1);
    on_Timer_ecu_BDC_400          (CAN_BUS1);
    on_Timer_ecu_ACC_453          (CAN_BUS1);
    on_Timer_ecu_GW_7DF          (CAN_BUS1);
    on_Timer_ecu_GW_15D          (CAN_BUS1);
    on_Timer_ecu_GW_10F          (CAN_BUS1);
    on_Timer_vehicle_CR_FD1          (CAN_BUS2);
    on_Timer_vehicle_ACC_FD1          (CAN_BUS2);
    on_Timer_vehicle_DCT5          (CAN_BUS2);
    on_Timer_vehicle_CSA1          (CAN_BUS2);
    on_Timer_vehicle_ABM2          (CAN_BUS2);
    on_Timer_vehicle_ESP_FD2          (CAN_BUS2);
    on_Timer_vehicle_ESP_FD3          (CAN_BUS2);
    on_Timer_vehicle_ECM_FD2          (CAN_BUS2);
    on_Timer_vehicle_Ibooster_FD2          (CAN_BUS2);
    on_Timer_vehicle_EBOOSTER_FD1          (CAN_BUS2);
    on_Timer_vehicle_RSDS_FD1          (CAN_BUS2);
}
