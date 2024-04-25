
#include "datatypes.h"
#include "can.h"
//#include "crc_CAN.h"
#include "vehicle_Tx_mapping.h"
#include "vehicle.h"
#include "vehicle_txrx_can.h" 

void on_Timer_vehicle_CR_FD1 (u8_t Direction)
{
	g_vehicle_cr_fd1.checksum_cr_r_1 = vehicle_cr_fd1_checksum_cr_r_1_encode	(calc_vehicle_CR_FD1_Checksum_CR_R_1());
	g_vehicle_cr_fd1.cr_fcta_resp = vehicle_cr_fd1_cr_fcta_resp_encode	(calc_vehicle_CR_FD1_CR_FCTA_Resp());
	g_vehicle_cr_fd1.cr_fctb_resp = vehicle_cr_fd1_cr_fctb_resp_encode	(calc_vehicle_CR_FD1_CR_FCTB_Resp());
	g_vehicle_cr_fd1.fcta_b_func_sts = vehicle_cr_fd1_fcta_b_func_sts_encode	(calc_vehicle_CR_FD1_FCTA_B_FuncSts());
	g_vehicle_cr_fd1.fcta_warn = vehicle_cr_fd1_fcta_warn_encode	(calc_vehicle_CR_FD1_FCTA_Warn());
	g_vehicle_cr_fd1.cr_err_sts = vehicle_cr_fd1_cr_err_sts_encode	(calc_vehicle_CR_FD1_CR_ErrSts());
	g_vehicle_cr_fd1.cr_bli_sts = vehicle_cr_fd1_cr_bli_sts_encode	(calc_vehicle_CR_FD1_CR_BliSts());
	g_vehicle_cr_fd1.cr_brkg_req = vehicle_cr_fd1_cr_brkg_req_encode	(calc_vehicle_CR_FD1_CR_BrkgReq());
	g_vehicle_cr_fd1.fctb_trig = vehicle_cr_fd1_fctb_trig_encode	(calc_vehicle_CR_FD1_FCTBTrig());
	g_vehicle_cr_fd1.fctb_aba_level = vehicle_cr_fd1_fctb_aba_level_encode	(calc_vehicle_CR_FD1_FCTB_ABA_Level());
	g_vehicle_cr_fd1.fctb_aba_req = vehicle_cr_fd1_fctb_aba_req_encode	(calc_vehicle_CR_FD1_FCTB_ABA_Req());
	g_vehicle_cr_fd1.cr_brkg_req_val = vehicle_cr_fd1_cr_brkg_req_val_encode	(calc_vehicle_CR_FD1_CR_BrkgReqVal());
	g_vehicle_cr_fd1.fctb_abp_req = vehicle_cr_fd1_fctb_abp_req_encode	(calc_vehicle_CR_FD1_FCTB_ABP_Req());
	g_vehicle_cr_fd1.fcta_b_ttc = vehicle_cr_fd1_fcta_b_ttc_encode	(calc_vehicle_CR_FD1_FCTA_B_TTC());
	g_vehicle_cr_fd1.rolling_counter_cr_r_1 = vehicle_cr_fd1_rolling_counter_cr_r_1_encode	(calc_vehicle_CR_FD1_RollingCounter_CR_R_1());
	g_vehicle_cr_fd1.checksum_cr_r_2 = vehicle_cr_fd1_checksum_cr_r_2_encode	(calc_vehicle_CR_FD1_Checksum_CR_R_2());
	g_vehicle_cr_fd1.cr_obj_dist_y_le = vehicle_cr_fd1_cr_obj_dist_y_le_encode	(calc_vehicle_CR_FD1_CR_ObjDistY_Le());
	g_vehicle_cr_fd1.cr_obj_dist_x_le = vehicle_cr_fd1_cr_obj_dist_x_le_encode	(calc_vehicle_CR_FD1_CR_ObjDistX_Le());
	g_vehicle_cr_fd1.cr_obj_id_le = vehicle_cr_fd1_cr_obj_id_le_encode	(calc_vehicle_CR_FD1_CR_ObjID_Le());
	g_vehicle_cr_fd1.cr_obj_rel_vel_x_le = vehicle_cr_fd1_cr_obj_rel_vel_x_le_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelX_Le());
	g_vehicle_cr_fd1.cr_obj_rel_accel_x_le = vehicle_cr_fd1_cr_obj_rel_accel_x_le_encode	(calc_vehicle_CR_FD1_CR_ObjRelAccelX_Le());
	g_vehicle_cr_fd1.cr_obj_sts_le = vehicle_cr_fd1_cr_obj_sts_le_encode	(calc_vehicle_CR_FD1_CR_ObjSts_Le());
	g_vehicle_cr_fd1.cr_obj_motion_type_le = vehicle_cr_fd1_cr_obj_motion_type_le_encode	(calc_vehicle_CR_FD1_CR_ObjMotionType_Le());
	g_vehicle_cr_fd1.rolling_counter_cr_r_2 = vehicle_cr_fd1_rolling_counter_cr_r_2_encode	(calc_vehicle_CR_FD1_RollingCounter_CR_R_2());
	g_vehicle_cr_fd1.checksum_cr_r_3 = vehicle_cr_fd1_checksum_cr_r_3_encode	(calc_vehicle_CR_FD1_Checksum_CR_R_3());
	g_vehicle_cr_fd1.cr_obj_dist_y_ri = vehicle_cr_fd1_cr_obj_dist_y_ri_encode	(calc_vehicle_CR_FD1_CR_ObjDistY_Ri());
	g_vehicle_cr_fd1.cr_obj_dist_x_ri = vehicle_cr_fd1_cr_obj_dist_x_ri_encode	(calc_vehicle_CR_FD1_CR_ObjDistX_Ri());
	g_vehicle_cr_fd1.cr_obj_id_ri = vehicle_cr_fd1_cr_obj_id_ri_encode	(calc_vehicle_CR_FD1_CR_ObjID_Ri());
	g_vehicle_cr_fd1.cr_obj_rel_vel_x_ri = vehicle_cr_fd1_cr_obj_rel_vel_x_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelX_Ri());
	g_vehicle_cr_fd1.cr_obj_rel_accel_x_ri = vehicle_cr_fd1_cr_obj_rel_accel_x_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRelAccelX_Ri());
	g_vehicle_cr_fd1.cr_obj_sts_ri = vehicle_cr_fd1_cr_obj_sts_ri_encode	(calc_vehicle_CR_FD1_CR_ObjSts_Ri());
	g_vehicle_cr_fd1.cr_obj_motion_type_ri = vehicle_cr_fd1_cr_obj_motion_type_ri_encode	(calc_vehicle_CR_FD1_CR_ObjMotionType_Ri());
	g_vehicle_cr_fd1.rolling_counter_cr_r_3 = vehicle_cr_fd1_rolling_counter_cr_r_3_encode	(calc_vehicle_CR_FD1_RollingCounter_CR_R_3());
	g_vehicle_cr_fd1.checksum_cr_r_4 = vehicle_cr_fd1_checksum_cr_r_4_encode	(calc_vehicle_CR_FD1_Checksum_CR_R_4());
	g_vehicle_cr_fd1.cr_obj_rel_accel_y_ri = vehicle_cr_fd1_cr_obj_rel_accel_y_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRelAccelY_Ri());
	g_vehicle_cr_fd1.cr_obj_rel_accel_y_le = vehicle_cr_fd1_cr_obj_rel_accel_y_le_encode	(calc_vehicle_CR_FD1_CR_ObjRelAccelY_Le());
	g_vehicle_cr_fd1.cr_obj_rel_vel_y_ri = vehicle_cr_fd1_cr_obj_rel_vel_y_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelY_Ri());
	g_vehicle_cr_fd1.cr_obj_rel_vel_y_le = vehicle_cr_fd1_cr_obj_rel_vel_y_le_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelY_Le());
	g_vehicle_cr_fd1.rolling_counter_cr_r_4 = vehicle_cr_fd1_rolling_counter_cr_r_4_encode	(calc_vehicle_CR_FD1_RollingCounter_CR_R_4());
	g_vehicle_cr_fd1.cr_obj_dist_x_std_le = vehicle_cr_fd1_cr_obj_dist_x_std_le_encode	(calc_vehicle_CR_FD1_CR_ObjDistXStd_Le());
	g_vehicle_cr_fd1.cr_obj_dist_y_std_le = vehicle_cr_fd1_cr_obj_dist_y_std_le_encode	(calc_vehicle_CR_FD1_CR_ObjDistYStd_Le());
	g_vehicle_cr_fd1.cr_obj_rel_vel_x_std_le = vehicle_cr_fd1_cr_obj_rel_vel_x_std_le_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelXStd_Le());
	g_vehicle_cr_fd1.cr_obj_rel_vel_y_std_le = vehicle_cr_fd1_cr_obj_rel_vel_y_std_le_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelYStd_Le());
	g_vehicle_cr_fd1.cr_obj_r_accel_x_std_le = vehicle_cr_fd1_cr_obj_r_accel_x_std_le_encode	(calc_vehicle_CR_FD1_CR_ObjRAccelXStd_Le());
	g_vehicle_cr_fd1.cr_obj_r_accel_y_std_le = vehicle_cr_fd1_cr_obj_r_accel_y_std_le_encode	(calc_vehicle_CR_FD1_CR_ObjRAccelYStd_Le());
	g_vehicle_cr_fd1.cr_obj_dist_x_std_ri = vehicle_cr_fd1_cr_obj_dist_x_std_ri_encode	(calc_vehicle_CR_FD1_CR_ObjDistXStd_Ri());
	g_vehicle_cr_fd1.cr_obj_dist_y_std_ri = vehicle_cr_fd1_cr_obj_dist_y_std_ri_encode	(calc_vehicle_CR_FD1_CR_ObjDistYStd_Ri());
	g_vehicle_cr_fd1.cr_obj_rel_vel_x_std_ri = vehicle_cr_fd1_cr_obj_rel_vel_x_std_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelXStd_Ri());
	g_vehicle_cr_fd1.cr_obj_rel_vel_y_std_ri = vehicle_cr_fd1_cr_obj_rel_vel_y_std_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRelVelYStd_Ri());
	g_vehicle_cr_fd1.cr_obj_r_accel_x_std_ri = vehicle_cr_fd1_cr_obj_r_accel_x_std_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRAccelXStd_Ri());
	g_vehicle_cr_fd1.cr_obj_r_accel_y_std_ri = vehicle_cr_fd1_cr_obj_r_accel_y_std_ri_encode	(calc_vehicle_CR_FD1_CR_ObjRAccelYStd_Ri());
	VEHICLE_CR_FD1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_ACC_FD1 (u8_t Direction)
{
	g_vehicle_acc_fd1.acc_cr_interface = vehicle_acc_fd1_acc_cr_interface_encode	(calc_vehicle_ACC_FD1_ACC_CRInterface());
	VEHICLE_ACC_FD1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_DCT5 (u8_t Direction)
{
	g_vehicle_dct5.current_gear_valid = vehicle_dct5_current_gear_valid_encode	(calc_vehicle_DCT5_CurrentGearValid());
	g_vehicle_dct5.current_gear = vehicle_dct5_current_gear_encode	(calc_vehicle_DCT5_CURRENT_GEAR());
	g_vehicle_dct5.tgs_lever = vehicle_dct5_tgs_lever_encode	(calc_vehicle_DCT5_TGS_LEVER());
	VEHICLE_DCT5_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_BCM1 (u8_t Direction)
{
	g_vehicle_bcm1.trunk_sts = vehicle_bcm1_trunk_sts_encode	(calc_vehicle_BCM1_TrunkSts());
	g_vehicle_bcm1.drv_door_sts = vehicle_bcm1_drv_door_sts_encode	(calc_vehicle_BCM1_DrvDoorSts());
	g_vehicle_bcm1.lr_door_sts = vehicle_bcm1_lr_door_sts_encode	(calc_vehicle_BCM1_LRDoorSts());
	g_vehicle_bcm1.passenger_door_sts = vehicle_bcm1_passenger_door_sts_encode	(calc_vehicle_BCM1_PassengerDoorSts());
	g_vehicle_bcm1.rr_door_sts = vehicle_bcm1_rr_door_sts_encode	(calc_vehicle_BCM1_RRDoorSts());
	VEHICLE_BCM1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_BCM8 (u8_t Direction)
{
	g_vehicle_bcm8.checksum_bcm8 = vehicle_bcm8_checksum_bcm8_encode	(calc_vehicle_BCM8_Checksum_BCM8());
	g_vehicle_bcm8.pas_work_cmd = vehicle_bcm8_pas_work_cmd_encode	(calc_vehicle_BCM8_PASWorkCmd());
	g_vehicle_bcm8.r_view_mirror_sts = vehicle_bcm8_r_view_mirror_sts_encode	(calc_vehicle_BCM8_RViewMirrorSts());
	g_vehicle_bcm8.wipr_req_f_pbox = vehicle_bcm8_wipr_req_f_pbox_encode	(calc_vehicle_BCM8_WiprReq_F_PBOX());
	g_vehicle_bcm8.rollingcounter_bcm8 = vehicle_bcm8_rollingcounter_bcm8_encode	(calc_vehicle_BCM8_Rollingcounter_BCM8());
	VEHICLE_BCM8_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_PEPS2 (u8_t Direction)
{
	g_vehicle_peps2.sys_power_mod = vehicle_peps2_sys_power_mod_encode	(calc_vehicle_PEPS2_SysPowerMod());
	g_vehicle_peps2.sys_power_mod_vld = vehicle_peps2_sys_power_mod_vld_encode	(calc_vehicle_PEPS2_SysPowerModVld());
	VEHICLE_PEPS2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_AC2 (u8_t Direction)
{
	g_vehicle_ac2.ac_amb_temp = vehicle_ac2_ac_amb_temp_encode	(calc_vehicle_AC2_ACAmbTemp());
	VEHICLE_AC2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_CSA1 (u8_t Direction)
{
	g_vehicle_csa1.r_turn_lmp_swt_sts = vehicle_csa1_r_turn_lmp_swt_sts_encode	(calc_vehicle_CSA1_RTurnLmpSwtSts());
	g_vehicle_csa1.l_turn_lmp_swt_sts = vehicle_csa1_l_turn_lmp_swt_sts_encode	(calc_vehicle_CSA1_LTurnLmpSwtSts());
	VEHICLE_CSA1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_CSA2 (u8_t Direction)
{
	g_vehicle_csa2.checksum_csa2 = vehicle_csa2_checksum_csa2_encode	(calc_vehicle_CSA2_Checksum_CSA2());
	g_vehicle_csa2.steer_wheel_ang = vehicle_csa2_steer_wheel_ang_encode	(calc_vehicle_CSA2_SteerWheelAng());
	g_vehicle_csa2.steer_wheel_ang_sign = vehicle_csa2_steer_wheel_ang_sign_encode	(calc_vehicle_CSA2_SteerWheelAngSign());
	g_vehicle_csa2.steer_wheel_spd = vehicle_csa2_steer_wheel_spd_encode	(calc_vehicle_CSA2_SteerWheelSpd());
	g_vehicle_csa2.steer_wheel_spd_sign = vehicle_csa2_steer_wheel_spd_sign_encode	(calc_vehicle_CSA2_SteerWheelSpdSign());
	g_vehicle_csa2.sas_sts = vehicle_csa2_sas_sts_encode	(calc_vehicle_CSA2_SAS_Sts());
	g_vehicle_csa2.rollingcounter_csa2 = vehicle_csa2_rollingcounter_csa2_encode	(calc_vehicle_CSA2_Rollingcounter_CSA2());
	VEHICLE_CSA2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_ABM2 (u8_t Direction)
{
	g_vehicle_abm2.check_sum_abm2 = vehicle_abm2_check_sum_abm2_encode	(calc_vehicle_ABM2_CheckSum_ABM2());
	g_vehicle_abm2.veh_lgt_accel = vehicle_abm2_veh_lgt_accel_encode	(calc_vehicle_ABM2_VehLgtAccel());
	g_vehicle_abm2.veh_lat_accel = vehicle_abm2_veh_lat_accel_encode	(calc_vehicle_ABM2_VehLatAccel());
	g_vehicle_abm2.veh_yaw_rate = vehicle_abm2_veh_yaw_rate_encode	(calc_vehicle_ABM2_VehYawRate());
	g_vehicle_abm2.veh_lgt_accel_vld = vehicle_abm2_veh_lgt_accel_vld_encode	(calc_vehicle_ABM2_VehLgtAccelVld());
	g_vehicle_abm2.veh_lat_accel_vld = vehicle_abm2_veh_lat_accel_vld_encode	(calc_vehicle_ABM2_VehLatAccelVld());
	g_vehicle_abm2.veh_dyn_yaw_rate_vld = vehicle_abm2_veh_dyn_yaw_rate_vld_encode	(calc_vehicle_ABM2_VehDynYawRateVld());
	g_vehicle_abm2.rolling_counter_abm2 = vehicle_abm2_rolling_counter_abm2_encode	(calc_vehicle_ABM2_RollingCounter_ABM2());
	VEHICLE_ABM2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_IP2 (u8_t Direction)
{
	g_vehicle_ip2.ip_veh_tot_distance = vehicle_ip2_ip_veh_tot_distance_encode	(calc_vehicle_IP2_IP_VehTotDistance());
	g_vehicle_ip2.ip_veh_tot_distance_valid = vehicle_ip2_ip_veh_tot_distance_valid_encode	(calc_vehicle_IP2_IP_VehTotDistanceValid());
	VEHICLE_IP2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_HUT_FD1 (u8_t Direction)
{
	g_vehicle_hut_fd1.lca_swt_req = vehicle_hut_fd1_lca_swt_req_encode	(calc_vehicle_HUT_FD1_LCASwtReq());
	g_vehicle_hut_fd1.rcta_swt_req = vehicle_hut_fd1_rcta_swt_req_encode	(calc_vehicle_HUT_FD1_RCTASwtReq());
	g_vehicle_hut_fd1.rcta_brk_swt_req = vehicle_hut_fd1_rcta_brk_swt_req_encode	(calc_vehicle_HUT_FD1_RCTABrkSwtReq());
	g_vehicle_hut_fd1.rcw_swt_req = vehicle_hut_fd1_rcw_swt_req_encode	(calc_vehicle_HUT_FD1_RCWSwtReq());
	g_vehicle_hut_fd1.fcw_snvty_set = vehicle_hut_fd1_fcw_snvty_set_encode	(calc_vehicle_HUT_FD1_FCW_SnvtySet());
	g_vehicle_hut_fd1.dow_swt_req = vehicle_hut_fd1_dow_swt_req_encode	(calc_vehicle_HUT_FD1_DOWSwtReq());
	g_vehicle_hut_fd1.fcta_swt_req = vehicle_hut_fd1_fcta_swt_req_encode	(calc_vehicle_HUT_FD1_FCTASwtReq());
	g_vehicle_hut_fd1.fcta_brk_swt_req = vehicle_hut_fd1_fcta_brk_swt_req_encode	(calc_vehicle_HUT_FD1_FCTABrkSwtReq());
	VEHICLE_HUT_FD1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_HUT34 (u8_t Direction)
{
	g_vehicle_hut34.time_hour = vehicle_hut34_time_hour_encode	(calc_vehicle_HUT34_Time_Hour());
	g_vehicle_hut34.time_minutes = vehicle_hut34_time_minutes_encode	(calc_vehicle_HUT34_Time_Minutes());
	g_vehicle_hut34.time_second = vehicle_hut34_time_second_encode	(calc_vehicle_HUT34_Time_Second());
	g_vehicle_hut34.time_year_left = vehicle_hut34_time_year_left_encode	(calc_vehicle_HUT34_Time_Year_Left());
	g_vehicle_hut34.time_year_right = vehicle_hut34_time_year_right_encode	(calc_vehicle_HUT34_Time_Year_Right());
	g_vehicle_hut34.time_month = vehicle_hut34_time_month_encode	(calc_vehicle_HUT34_Time_Month());
	g_vehicle_hut34.time_day = vehicle_hut34_time_day_encode	(calc_vehicle_HUT34_Time_Day());
	VEHICLE_HUT34_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_ESP_FD2 (u8_t Direction)
{
	g_vehicle_esp_fd2.check_sum_esp2 = vehicle_esp_fd2_check_sum_esp2_encode	(calc_vehicle_ESP_FD2_CheckSum_ESP2());
	g_vehicle_esp_fd2.veh_standstill = vehicle_esp_fd2_veh_standstill_encode	(calc_vehicle_ESP_FD2_VehStandstill());
	g_vehicle_esp_fd2.no_brk_force = vehicle_esp_fd2_no_brk_force_encode	(calc_vehicle_ESP_FD2_NoBrkForce());
	g_vehicle_esp_fd2.brk_dsk_ovrheatd = vehicle_esp_fd2_brk_dsk_ovrheatd_encode	(calc_vehicle_ESP_FD2_BrkDskOvrheatd());
	g_vehicle_esp_fd2.esp_diag_actv = vehicle_esp_fd2_esp_diag_actv_encode	(calc_vehicle_ESP_FD2_ESP_DiagActv());
	g_vehicle_esp_fd2.ab_aactv = vehicle_esp_fd2_ab_aactv_encode	(calc_vehicle_ESP_FD2_ABAactv());
	g_vehicle_esp_fd2.ab_aavailable = vehicle_esp_fd2_ab_aavailable_encode	(calc_vehicle_ESP_FD2_ABAavailable());
	g_vehicle_esp_fd2.hdc_ctrl = vehicle_esp_fd2_hdc_ctrl_encode	(calc_vehicle_ESP_FD2_HDCCtrl());
	g_vehicle_esp_fd2.rolling_counter_esp2 = vehicle_esp_fd2_rolling_counter_esp2_encode	(calc_vehicle_ESP_FD2_RollingCounter_ESP2());
	g_vehicle_esp_fd2.check_sum_esp1 = vehicle_esp_fd2_check_sum_esp1_encode	(calc_vehicle_ESP_FD2_CheckSum_ESP1());
	g_vehicle_esp_fd2.esp_fail_sts = vehicle_esp_fd2_esp_fail_sts_encode	(calc_vehicle_ESP_FD2_ESPFailSts());
	g_vehicle_esp_fd2.esp_func_off_sts = vehicle_esp_fd2_esp_func_off_sts_encode	(calc_vehicle_ESP_FD2_ESPFuncOffSts());
	g_vehicle_esp_fd2.btc_actv = vehicle_esp_fd2_btc_actv_encode	(calc_vehicle_ESP_FD2_BTCActv());
	g_vehicle_esp_fd2.ptc_actv = vehicle_esp_fd2_ptc_actv_encode	(calc_vehicle_ESP_FD2_PTCActv());
	g_vehicle_esp_fd2.msr_actv = vehicle_esp_fd2_msr_actv_encode	(calc_vehicle_ESP_FD2_MSRActv());
	g_vehicle_esp_fd2.vdc_actv = vehicle_esp_fd2_vdc_actv_encode	(calc_vehicle_ESP_FD2_VDCActv());
	g_vehicle_esp_fd2.esp_master_cyl_brk_press_vld = vehicle_esp_fd2_esp_master_cyl_brk_press_vld_encode	(calc_vehicle_ESP_FD2_ESP_MasterCylBrkPressVld());
	g_vehicle_esp_fd2.esp_master_cyl_brk_press = vehicle_esp_fd2_esp_master_cyl_brk_press_encode	(calc_vehicle_ESP_FD2_ESP_MasterCylBrkPress());
	g_vehicle_esp_fd2.rolling_counter_esp1 = vehicle_esp_fd2_rolling_counter_esp1_encode	(calc_vehicle_ESP_FD2_RollingCounter_ESP1());
	g_vehicle_esp_fd2.check_sum_abs3 = vehicle_esp_fd2_check_sum_abs3_encode	(calc_vehicle_ESP_FD2_CheckSum_ABS3());
	g_vehicle_esp_fd2.abs_fail_sts = vehicle_esp_fd2_abs_fail_sts_encode	(calc_vehicle_ESP_FD2_ABSFailSts());
	g_vehicle_esp_fd2.veh_spd_vld = vehicle_esp_fd2_veh_spd_vld_encode	(calc_vehicle_ESP_FD2_VehSpdVld());
	g_vehicle_esp_fd2.veh_spd = vehicle_esp_fd2_veh_spd_encode	(calc_vehicle_ESP_FD2_VehSpd());
	g_vehicle_esp_fd2.abs_actv = vehicle_esp_fd2_abs_actv_encode	(calc_vehicle_ESP_FD2_ABSActv());
	g_vehicle_esp_fd2.rolling_counter_abs3 = vehicle_esp_fd2_rolling_counter_abs3_encode	(calc_vehicle_ESP_FD2_RollingCounter_ABS3());
	VEHICLE_ESP_FD2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_ESP_FD3 (u8_t Direction)
{
	g_vehicle_esp_fd3.check_sum_abs1 = vehicle_esp_fd3_check_sum_abs1_encode	(calc_vehicle_ESP_FD3_CheckSum_ABS1());
	g_vehicle_esp_fd3.fl_wheel_drive_direction = vehicle_esp_fd3_fl_wheel_drive_direction_encode	(calc_vehicle_ESP_FD3_FLWheelDriveDirection());
	g_vehicle_esp_fd3.fl_wheel_spd_vld = vehicle_esp_fd3_fl_wheel_spd_vld_encode	(calc_vehicle_ESP_FD3_FLWheelSpdVld());
	g_vehicle_esp_fd3.fl_wheel_spd = vehicle_esp_fd3_fl_wheel_spd_encode	(calc_vehicle_ESP_FD3_FLWheelSpd());
	g_vehicle_esp_fd3.fr_wheel_drive_direction = vehicle_esp_fd3_fr_wheel_drive_direction_encode	(calc_vehicle_ESP_FD3_FRWheelDriveDirection());
	g_vehicle_esp_fd3.fr_wheel_spd_vld = vehicle_esp_fd3_fr_wheel_spd_vld_encode	(calc_vehicle_ESP_FD3_FRWheelSpdVld());
	g_vehicle_esp_fd3.fr_wheel_spd = vehicle_esp_fd3_fr_wheel_spd_encode	(calc_vehicle_ESP_FD3_FRWheelSpd());
	g_vehicle_esp_fd3.rolling_counter_abs1 = vehicle_esp_fd3_rolling_counter_abs1_encode	(calc_vehicle_ESP_FD3_RollingCounter_ABS1());
	g_vehicle_esp_fd3.epb_sts = vehicle_esp_fd3_epb_sts_encode	(calc_vehicle_ESP_FD3_EPBSts());
	g_vehicle_esp_fd3.epb_err_sts = vehicle_esp_fd3_epb_err_sts_encode	(calc_vehicle_ESP_FD3_EPBErrSts());
	g_vehicle_esp_fd3.check_sum_abs2 = vehicle_esp_fd3_check_sum_abs2_encode	(calc_vehicle_ESP_FD3_CheckSum_ABS2());
	g_vehicle_esp_fd3.rl_wheel_drive_direction = vehicle_esp_fd3_rl_wheel_drive_direction_encode	(calc_vehicle_ESP_FD3_RLWheelDriveDirection());
	g_vehicle_esp_fd3.rl_wheel_spd_vld = vehicle_esp_fd3_rl_wheel_spd_vld_encode	(calc_vehicle_ESP_FD3_RLWheelSpdVld());
	g_vehicle_esp_fd3.rl_wheel_spd = vehicle_esp_fd3_rl_wheel_spd_encode	(calc_vehicle_ESP_FD3_RLWheelSpd());
	g_vehicle_esp_fd3.rr_wheel_drive_direction = vehicle_esp_fd3_rr_wheel_drive_direction_encode	(calc_vehicle_ESP_FD3_RRWheelDriveDirection());
	g_vehicle_esp_fd3.rr_wheel_spd_vld = vehicle_esp_fd3_rr_wheel_spd_vld_encode	(calc_vehicle_ESP_FD3_RRWheelSpdVld());
	g_vehicle_esp_fd3.rr_wheel_spd = vehicle_esp_fd3_rr_wheel_spd_encode	(calc_vehicle_ESP_FD3_RRWheelSpd());
	g_vehicle_esp_fd3.rolling_counter_abs2 = vehicle_esp_fd3_rolling_counter_abs2_encode	(calc_vehicle_ESP_FD3_RollingCounter_ABS2());
	VEHICLE_ESP_FD3_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_ECM_FD1 (u8_t Direction)
{
	g_vehicle_ecm_fd1.hcu_powertrain_sts_p0 = vehicle_ecm_fd1_hcu_powertrain_sts_p0_encode	(calc_vehicle_ECM_FD1_HCU_PowertrainSts_P0());
	g_vehicle_ecm_fd1.brk_pedal_sts = vehicle_ecm_fd1_brk_pedal_sts_encode	(calc_vehicle_ECM_FD1_BrkPedalSts());
	g_vehicle_ecm_fd1.eng_spd = vehicle_ecm_fd1_eng_spd_encode	(calc_vehicle_ECM_FD1_EngSpd());
	g_vehicle_ecm_fd1.eng_spd_vldty = vehicle_ecm_fd1_eng_spd_vldty_encode	(calc_vehicle_ECM_FD1_EngSpdVldty());
	VEHICLE_ECM_FD1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_ECM_FD2 (u8_t Direction)
{
	g_vehicle_ecm_fd2.accel_pedl_posn_diagc = vehicle_ecm_fd2_accel_pedl_posn_diagc_encode	(calc_vehicle_ECM_FD2_AccelPedlPosnDiagc());
	g_vehicle_ecm_fd2.accel_pedal_posn_vldty = vehicle_ecm_fd2_accel_pedal_posn_vldty_encode	(calc_vehicle_ECM_FD2_AccelPedalPosnVldty());
	g_vehicle_ecm_fd2.eng_state = vehicle_ecm_fd2_eng_state_encode	(calc_vehicle_ECM_FD2_EngState());
	VEHICLE_ECM_FD2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_Ibooster_FD2 (u8_t Direction)
{
	g_vehicle_ibooster_fd2.ib_brk_pedal_appld = vehicle_ibooster_fd2_ib_brk_pedal_appld_encode	(calc_vehicle_Ibooster_FD2_IB_BrkPedalAppld());
	g_vehicle_ibooster_fd2.ib_brk_pedal_appld_vld = vehicle_ibooster_fd2_ib_brk_pedal_appld_vld_encode	(calc_vehicle_Ibooster_FD2_IB_BrkPedalAppldVld());
	VEHICLE_IBOOSTER_FD2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_EBOOSTER_FD1 (u8_t Direction)
{
	g_vehicle_ebooster_fd1.eb_veh_standstill = vehicle_ebooster_fd1_eb_veh_standstill_encode	(calc_vehicle_EBOOSTER_FD1_EB_VehStandstill());
	g_vehicle_ebooster_fd1.eb_aebib_actv = vehicle_ebooster_fd1_eb_aebib_actv_encode	(calc_vehicle_EBOOSTER_FD1_EB_AEBIBActv());
	g_vehicle_ebooster_fd1.eb_aebba_actv = vehicle_ebooster_fd1_eb_aebba_actv_encode	(calc_vehicle_EBOOSTER_FD1_EB_AEBBAActv());
	g_vehicle_ebooster_fd1.eb_aeb_available = vehicle_ebooster_fd1_eb_aeb_available_encode	(calc_vehicle_EBOOSTER_FD1_EB_AEBAvailable());
	g_vehicle_ebooster_fd1.eb_abp_available = vehicle_ebooster_fd1_eb_abp_available_encode	(calc_vehicle_EBOOSTER_FD1_EB_ABPAvailable());
	g_vehicle_ebooster_fd1.eb_abp_actv = vehicle_ebooster_fd1_eb_abp_actv_encode	(calc_vehicle_EBOOSTER_FD1_EB_ABPActv());
	g_vehicle_ebooster_fd1.eb_cta_brk_available = vehicle_ebooster_fd1_eb_cta_brk_available_encode	(calc_vehicle_EBOOSTER_FD1_EB_CTABrkAvailable());
	g_vehicle_ebooster_fd1.eb_cta_actv = vehicle_ebooster_fd1_eb_cta_actv_encode	(calc_vehicle_EBOOSTER_FD1_EB_CTAActv());
	VEHICLE_EBOOSTER_FD1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_ADAS_AD1 (u8_t Direction)
{
	g_vehicle_adas_ad1.sync_type = vehicle_adas_ad1_sync_type_encode	(calc_vehicle_ADAS_AD1_Sync_Type());
	g_vehicle_adas_ad1.sync_crc = vehicle_adas_ad1_sync_crc_encode	(calc_vehicle_ADAS_AD1_Sync_CRC());
	g_vehicle_adas_ad1.sync_time_domain = vehicle_adas_ad1_sync_time_domain_encode	(calc_vehicle_ADAS_AD1_Sync_TimeDomain());
	g_vehicle_adas_ad1.sync_counter = vehicle_adas_ad1_sync_counter_encode	(calc_vehicle_ADAS_AD1_Sync_Counter());
	g_vehicle_adas_ad1.sync_resd = vehicle_adas_ad1_sync_resd_encode	(calc_vehicle_ADAS_AD1_Sync_Resd());
	g_vehicle_adas_ad1.sync_sgw = vehicle_adas_ad1_sync_sgw_encode	(calc_vehicle_ADAS_AD1_Sync_SGW());
	g_vehicle_adas_ad1.sync_ovs = vehicle_adas_ad1_sync_ovs_encode	(calc_vehicle_ADAS_AD1_Sync_OVS());
	g_vehicle_adas_ad1.sync_sync_time = vehicle_adas_ad1_sync_sync_time_encode	(calc_vehicle_ADAS_AD1_Sync_SyncTime());
	VEHICLE_ADAS_AD1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_DiagFuncReq (u8_t Direction)
{
	g_vehicle_diagfuncreq.diag_func_req = vehicle_diag_func_req_diag_func_req_encode	(calc_vehicle_DiagFuncReq_DiagFuncReq());
	VEHICLE_DIAGFUNCREQ_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );
}
void on_Timer_vehicle_FR_Phy_Req (u8_t Direction)
{
	g_vehicle_fr_phy_req.fr_phy_req = vehicle_fr_phy_req_fr_phy_req_encode	(calc_vehicle_FR_Phy_Req_FR_Phy_Req());
	VEHICLE_FR_PHY_REQ_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );
}
void on_Timer_vehicle_FR_Phy_Resp (u8_t Direction)
{
	g_vehicle_fr_phy_resp.fr_phy_resp = vehicle_fr_phy_resp_fr_phy_resp_encode	(calc_vehicle_FR_Phy_Resp_FR_Phy_Resp());
	VEHICLE_FR_PHY_RESP_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );
}
void on_Timer_vehicle_RSDS_FD1 (u8_t Direction)
{
	g_vehicle_rsds_fd1.rsds_obj_rel_accel_y_le = vehicle_rsds_fd1_rsds_obj_rel_accel_y_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelAccelY_Le());
	g_vehicle_rsds_fd1.checksum_rsds_r_2 = vehicle_rsds_fd1_checksum_rsds_r_2_encode	(calc_vehicle_RSDS_FD1_Checksum_RSDS_R_2());
	g_vehicle_rsds_fd1.rsds_brk_err_sts = vehicle_rsds_fd1_rsds_brk_err_sts_encode	(calc_vehicle_RSDS_FD1_RSDS_Brk_ErrSts());
	g_vehicle_rsds_fd1.rsds_brkg_req = vehicle_rsds_fd1_rsds_brkg_req_encode	(calc_vehicle_RSDS_FD1_RSDS_BrkgReq());
	g_vehicle_rsds_fd1.rsds_brkg_req_val = vehicle_rsds_fd1_rsds_brkg_req_val_encode	(calc_vehicle_RSDS_FD1_RSDS_BrkgReqVal());
	g_vehicle_rsds_fd1.rsds_led_light_req_left = vehicle_rsds_fd1_rsds_led_light_req_left_encode	(calc_vehicle_RSDS_FD1_RSDS_LEDLightReqLeft());
	g_vehicle_rsds_fd1.rsds_led_light_req_right = vehicle_rsds_fd1_rsds_led_light_req_right_encode	(calc_vehicle_RSDS_FD1_RSDS_LEDLightReqRight());
	g_vehicle_rsds_fd1.rsds_ip_sound_req = vehicle_rsds_fd1_rsds_ip_sound_req_encode	(calc_vehicle_RSDS_FD1_RSDS_IPSoundReq());
	g_vehicle_rsds_fd1.bsd_lca_warning_req_right = vehicle_rsds_fd1_bsd_lca_warning_req_right_encode	(calc_vehicle_RSDS_FD1_BSD_LCA_warningReqRight());
	g_vehicle_rsds_fd1.bsd_lca_warning_reqleft = vehicle_rsds_fd1_bsd_lca_warning_reqleft_encode	(calc_vehicle_RSDS_FD1_BSD_LCA_warningReqleft());
	g_vehicle_rsds_fd1.dow_warning_req_right = vehicle_rsds_fd1_dow_warning_req_right_encode	(calc_vehicle_RSDS_FD1_DOW_warningReqRight());
	g_vehicle_rsds_fd1.dow_warning_reqleft = vehicle_rsds_fd1_dow_warning_reqleft_encode	(calc_vehicle_RSDS_FD1_DOW_warningReqleft());
	g_vehicle_rsds_fd1.rsds_rcw_trigger = vehicle_rsds_fd1_rsds_rcw_trigger_encode	(calc_vehicle_RSDS_FD1_RSDS_RCW_Trigger());
	g_vehicle_rsds_fd1.rsds_err_sts = vehicle_rsds_fd1_rsds_err_sts_encode	(calc_vehicle_RSDS_FD1_RSDS_ErrSts());
	g_vehicle_rsds_fd1.rsds_brkg_trig = vehicle_rsds_fd1_rsds_brkg_trig_encode	(calc_vehicle_RSDS_FD1_RSDS_BrkgTrig());
	g_vehicle_rsds_fd1.rsds_bli_sts = vehicle_rsds_fd1_rsds_bli_sts_encode	(calc_vehicle_RSDS_FD1_RSDS_BliSts());
	g_vehicle_rsds_fd1.rsds_trailer_sts = vehicle_rsds_fd1_rsds_trailer_sts_encode	(calc_vehicle_RSDS_FD1_RSDS_TrailerSts());
	g_vehicle_rsds_fd1.rsds_lca_resp = vehicle_rsds_fd1_rsds_lca_resp_encode	(calc_vehicle_RSDS_FD1_RSDS_LCAResp());
	g_vehicle_rsds_fd1.rsds_dow_resp = vehicle_rsds_fd1_rsds_dow_resp_encode	(calc_vehicle_RSDS_FD1_RSDS_DOWResp());
	g_vehicle_rsds_fd1.rsds_rcw_resp = vehicle_rsds_fd1_rsds_rcw_resp_encode	(calc_vehicle_RSDS_FD1_RSDS_RCWResp());
	g_vehicle_rsds_fd1.rsds_rcta_resp = vehicle_rsds_fd1_rsds_rcta_resp_encode	(calc_vehicle_RSDS_FD1_RSDS_RCTAResp());
	g_vehicle_rsds_fd1.rsds_rcta_brk_resp = vehicle_rsds_fd1_rsds_rcta_brk_resp_encode	(calc_vehicle_RSDS_FD1_RSDS_RCTABrkResp());
	g_vehicle_rsds_fd1.rsds_cta_actv = vehicle_rsds_fd1_rsds_cta_actv_encode	(calc_vehicle_RSDS_FD1_RSDS_CTA_Actv());
	g_vehicle_rsds_fd1.rcta_warning_req_right = vehicle_rsds_fd1_rcta_warning_req_right_encode	(calc_vehicle_RSDS_FD1_RCTA_warningReqRight());
	g_vehicle_rsds_fd1.rcta_warning_req_left = vehicle_rsds_fd1_rcta_warning_req_left_encode	(calc_vehicle_RSDS_FD1_RCTA_warningReqLeft());
	g_vehicle_rsds_fd1.rolling_counter_rsds_r_2 = vehicle_rsds_fd1_rolling_counter_rsds_r_2_encode	(calc_vehicle_RSDS_FD1_RollingCounter_RSDS_R_2());
	g_vehicle_rsds_fd1.checksum_rsds_r_3 = vehicle_rsds_fd1_checksum_rsds_r_3_encode	(calc_vehicle_RSDS_FD1_Checksum_RSDS_R_3());
	g_vehicle_rsds_fd1.le_tar_sts = vehicle_rsds_fd1_le_tar_sts_encode	(calc_vehicle_RSDS_FD1_LeTarSts());
	g_vehicle_rsds_fd1.obj_id_le = vehicle_rsds_fd1_obj_id_le_encode	(calc_vehicle_RSDS_FD1_ObjIDLe());
	g_vehicle_rsds_fd1.obj_lgt_posn_curv_le = vehicle_rsds_fd1_obj_lgt_posn_curv_le_encode	(calc_vehicle_RSDS_FD1_ObjLgtPosnCurvLe());
	g_vehicle_rsds_fd1.obj_lat_posn_curv_le = vehicle_rsds_fd1_obj_lat_posn_curv_le_encode	(calc_vehicle_RSDS_FD1_ObjLatPosnCurvLe());
	g_vehicle_rsds_fd1.obj_lgt_spd_curv_le = vehicle_rsds_fd1_obj_lgt_spd_curv_le_encode	(calc_vehicle_RSDS_FD1_ObjLgtSpdCurvLe());
	g_vehicle_rsds_fd1.obj_lat_spd_curv_le = vehicle_rsds_fd1_obj_lat_spd_curv_le_encode	(calc_vehicle_RSDS_FD1_ObjLatSpdCurvLe());
	g_vehicle_rsds_fd1.obj_ttc_le = vehicle_rsds_fd1_obj_ttc_le_encode	(calc_vehicle_RSDS_FD1_ObjTTCLe());
	g_vehicle_rsds_fd1.rolling_counter_rsds_r_3 = vehicle_rsds_fd1_rolling_counter_rsds_r_3_encode	(calc_vehicle_RSDS_FD1_RollingCounter_RSDS_R_3());
	g_vehicle_rsds_fd1.checksum_rsds_r_4 = vehicle_rsds_fd1_checksum_rsds_r_4_encode	(calc_vehicle_RSDS_FD1_Checksum_RSDS_R_4());
	g_vehicle_rsds_fd1.obj_len_le = vehicle_rsds_fd1_obj_len_le_encode	(calc_vehicle_RSDS_FD1_ObjLenLe());
	g_vehicle_rsds_fd1.obj_width_le = vehicle_rsds_fd1_obj_width_le_encode	(calc_vehicle_RSDS_FD1_ObjWidthLe());
	g_vehicle_rsds_fd1.obj_staty_le = vehicle_rsds_fd1_obj_staty_le_encode	(calc_vehicle_RSDS_FD1_ObjStatyLe());
	g_vehicle_rsds_fd1.zone_ind_le = vehicle_rsds_fd1_zone_ind_le_encode	(calc_vehicle_RSDS_FD1_ZoneIndLe());
	g_vehicle_rsds_fd1.obj_sts_le = vehicle_rsds_fd1_obj_sts_le_encode	(calc_vehicle_RSDS_FD1_ObjStsLe());
	g_vehicle_rsds_fd1.obj_rin_ri = vehicle_rsds_fd1_obj_rin_ri_encode	(calc_vehicle_RSDS_FD1_ObjRinRi());
	g_vehicle_rsds_fd1.obj_width_ri = vehicle_rsds_fd1_obj_width_ri_encode	(calc_vehicle_RSDS_FD1_ObjWidthRi());
	g_vehicle_rsds_fd1.obj_staty_ri = vehicle_rsds_fd1_obj_staty_ri_encode	(calc_vehicle_RSDS_FD1_ObjStatyRi());
	g_vehicle_rsds_fd1.zone_ind_ri = vehicle_rsds_fd1_zone_ind_ri_encode	(calc_vehicle_RSDS_FD1_ZoneIndRi());
	g_vehicle_rsds_fd1.obj_sts_ri = vehicle_rsds_fd1_obj_sts_ri_encode	(calc_vehicle_RSDS_FD1_ObjStsRi());
	g_vehicle_rsds_fd1.rolling_counter_rsds_r_4 = vehicle_rsds_fd1_rolling_counter_rsds_r_4_encode	(calc_vehicle_RSDS_FD1_RollingCounter_RSDS_R_4());
	g_vehicle_rsds_fd1.checksum_rsds_r_5 = vehicle_rsds_fd1_checksum_rsds_r_5_encode	(calc_vehicle_RSDS_FD1_Checksum_RSDS_R_5());
	g_vehicle_rsds_fd1.ri_tar_sts = vehicle_rsds_fd1_ri_tar_sts_encode	(calc_vehicle_RSDS_FD1_RiTarSts());
	g_vehicle_rsds_fd1.obj_id_ri = vehicle_rsds_fd1_obj_id_ri_encode	(calc_vehicle_RSDS_FD1_ObjIDRi());
	g_vehicle_rsds_fd1.obj_lgt_posn_curv_ri = vehicle_rsds_fd1_obj_lgt_posn_curv_ri_encode	(calc_vehicle_RSDS_FD1_ObjLgtPosnCurvRi());
	g_vehicle_rsds_fd1.obj_lat_posn_curv_ri = vehicle_rsds_fd1_obj_lat_posn_curv_ri_encode	(calc_vehicle_RSDS_FD1_ObjLatPosnCurvRi());
	g_vehicle_rsds_fd1.obj_lgt_spd_curv_ri = vehicle_rsds_fd1_obj_lgt_spd_curv_ri_encode	(calc_vehicle_RSDS_FD1_ObjLgtSpdCurvRi());
	g_vehicle_rsds_fd1.obj_lat_spd_curv_ri = vehicle_rsds_fd1_obj_lat_spd_curv_ri_encode	(calc_vehicle_RSDS_FD1_ObjLatSpdCurvRi());
	g_vehicle_rsds_fd1.obj_ttc_ri = vehicle_rsds_fd1_obj_ttc_ri_encode	(calc_vehicle_RSDS_FD1_ObjTTCRi());
	g_vehicle_rsds_fd1.rolling_counter_rsds_r_5 = vehicle_rsds_fd1_rolling_counter_rsds_r_5_encode	(calc_vehicle_RSDS_FD1_RollingCounter_RSDS_R_5());
	g_vehicle_rsds_fd1.rsds_obj_dist_x_std_le = vehicle_rsds_fd1_rsds_obj_dist_x_std_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjDistXStd_Le());
	g_vehicle_rsds_fd1.rsds_obj_dist_y_std_le = vehicle_rsds_fd1_rsds_obj_dist_y_std_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjDistYStd_Le());
	g_vehicle_rsds_fd1.rsds_obj_rel_vel_x_std_le = vehicle_rsds_fd1_rsds_obj_rel_vel_x_std_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelVelXStd_Le());
	g_vehicle_rsds_fd1.rsds_obj_rel_vel_y_std_le = vehicle_rsds_fd1_rsds_obj_rel_vel_y_std_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelVelYStd_Le());
	g_vehicle_rsds_fd1.rsds_obj_r_accel_x_std_le = vehicle_rsds_fd1_rsds_obj_r_accel_x_std_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRAccelXStd_Le());
	g_vehicle_rsds_fd1.rsds_obj_r_accel_y_std_le = vehicle_rsds_fd1_rsds_obj_r_accel_y_std_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRAccelYStd_Le());
	g_vehicle_rsds_fd1.rsds_obj_dist_x_std_ri = vehicle_rsds_fd1_rsds_obj_dist_x_std_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjDistXStd_Ri());
	g_vehicle_rsds_fd1.rsds_obj_dist_y_std_ri = vehicle_rsds_fd1_rsds_obj_dist_y_std_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjDistYStd_Ri());
	g_vehicle_rsds_fd1.rsds_obj_rel_vel_x_std_ri = vehicle_rsds_fd1_rsds_obj_rel_vel_x_std_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelVelXStd_Ri());
	g_vehicle_rsds_fd1.rsds_obj_rel_vel_y_std_ri = vehicle_rsds_fd1_rsds_obj_rel_vel_y_std_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelVelYStd_Ri());
	g_vehicle_rsds_fd1.rsds_obj_r_accel_x_std_ri = vehicle_rsds_fd1_rsds_obj_r_accel_x_std_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRAccelXStd_Ri());
	g_vehicle_rsds_fd1.rsds_obj_r_accel_y_std_ri = vehicle_rsds_fd1_rsds_obj_r_accel_y_std_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRAccelYStd_Ri());
	g_vehicle_rsds_fd1.rsds_obj_rel_accel_x_le = vehicle_rsds_fd1_rsds_obj_rel_accel_x_le_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelAccelX_Le());
	g_vehicle_rsds_fd1.rsds_obj_rel_accel_x_ri = vehicle_rsds_fd1_rsds_obj_rel_accel_x_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelAccelX_Ri());
	g_vehicle_rsds_fd1.rsds_obj_rel_accel_y_ri = vehicle_rsds_fd1_rsds_obj_rel_accel_y_ri_encode	(calc_vehicle_RSDS_FD1_RSDS_ObjRelAccelY_Ri());
	VEHICLE_RSDS_FD1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_RSDS_FD2 (u8_t Direction)
{
	g_vehicle_rsds_fd2.rcta_b_ttc = vehicle_rsds_fd2_rcta_b_ttc_encode	(calc_vehicle_RSDS_FD2_RCTA_B_TTC());
	g_vehicle_rsds_fd2.bsd_lca_left_ttc = vehicle_rsds_fd2_bsd_lca_left_ttc_encode	(calc_vehicle_RSDS_FD2_BSD_LCA_Left_TTC());
	g_vehicle_rsds_fd2.bsd_lca_right_ttc = vehicle_rsds_fd2_bsd_lca_right_ttc_encode	(calc_vehicle_RSDS_FD2_BSD_LCA_Right_TTC());
	g_vehicle_rsds_fd2.rcw_ttc = vehicle_rsds_fd2_rcw_ttc_encode	(calc_vehicle_RSDS_FD2_RCW_TTC());
	g_vehicle_rsds_fd2.rsds_le_tgt_01 = vehicle_rsds_fd2_rsds_le_tgt_01_encode	(calc_vehicle_RSDS_FD2_RSDS_LeTgt_01());
	g_vehicle_rsds_fd2.rsds_le_tgt_01_dy = vehicle_rsds_fd2_rsds_le_tgt_01_dy_encode	(calc_vehicle_RSDS_FD2_RSDS_LeTgt_01_dy());
	g_vehicle_rsds_fd2.rsds_le_tgt_01_dx = vehicle_rsds_fd2_rsds_le_tgt_01_dx_encode	(calc_vehicle_RSDS_FD2_RSDS_LeTgt_01_dx());
	g_vehicle_rsds_fd2.rsds_le_tgt_02 = vehicle_rsds_fd2_rsds_le_tgt_02_encode	(calc_vehicle_RSDS_FD2_RSDS_LeTgt_02());
	g_vehicle_rsds_fd2.rsds_le_tgt_02_dx = vehicle_rsds_fd2_rsds_le_tgt_02_dx_encode	(calc_vehicle_RSDS_FD2_RSDS_LeTgt_02_dx());
	g_vehicle_rsds_fd2.rsds_le_tgt_02_dy = vehicle_rsds_fd2_rsds_le_tgt_02_dy_encode	(calc_vehicle_RSDS_FD2_RSDS_LeTgt_02_dy());
	g_vehicle_rsds_fd2.rsds_ri_tgt_01 = vehicle_rsds_fd2_rsds_ri_tgt_01_encode	(calc_vehicle_RSDS_FD2_RSDS_RiTgt_01());
	g_vehicle_rsds_fd2.rsds_ri_tgt_01_dx = vehicle_rsds_fd2_rsds_ri_tgt_01_dx_encode	(calc_vehicle_RSDS_FD2_RSDS_RiTgt_01_dx());
	g_vehicle_rsds_fd2.rsds_ri_tgt_01_dy = vehicle_rsds_fd2_rsds_ri_tgt_01_dy_encode	(calc_vehicle_RSDS_FD2_RSDS_RiTgt_01_dy());
	g_vehicle_rsds_fd2.rsds_ri_tgt_02 = vehicle_rsds_fd2_rsds_ri_tgt_02_encode	(calc_vehicle_RSDS_FD2_RSDS_RiTgt_02());
	g_vehicle_rsds_fd2.rsds_ri_tgt_02_dx = vehicle_rsds_fd2_rsds_ri_tgt_02_dx_encode	(calc_vehicle_RSDS_FD2_RSDS_RiTgt_02_dx());
	g_vehicle_rsds_fd2.rsds_ri_tgt_02_dy = vehicle_rsds_fd2_rsds_ri_tgt_02_dy_encode	(calc_vehicle_RSDS_FD2_RSDS_RiTgt_02_dy());
	g_vehicle_rsds_fd2.rsds_mid_tgt_01 = vehicle_rsds_fd2_rsds_mid_tgt_01_encode	(calc_vehicle_RSDS_FD2_RSDS_MidTgt_01());
	g_vehicle_rsds_fd2.rsds_mid_tgt_01_dx = vehicle_rsds_fd2_rsds_mid_tgt_01_dx_encode	(calc_vehicle_RSDS_FD2_RSDS_MidTgt_01_dx());
	g_vehicle_rsds_fd2.rsds_mid_tgt_01_dy = vehicle_rsds_fd2_rsds_mid_tgt_01_dy_encode	(calc_vehicle_RSDS_FD2_RSDS_MidTgt_01_dy());
	g_vehicle_rsds_fd2.rsds_mid_tgt_02 = vehicle_rsds_fd2_rsds_mid_tgt_02_encode	(calc_vehicle_RSDS_FD2_RSDS_MidTgt_02());
	g_vehicle_rsds_fd2.rsds_mid_tgt_02_dx = vehicle_rsds_fd2_rsds_mid_tgt_02_dx_encode	(calc_vehicle_RSDS_FD2_RSDS_MidTgt_02_dx());
	g_vehicle_rsds_fd2.rsds_mid_tgt_02_dy = vehicle_rsds_fd2_rsds_mid_tgt_02_dy_encode	(calc_vehicle_RSDS_FD2_RSDS_MidTgt_02_dy());
	VEHICLE_RSDS_FD2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_Trailer1 (u8_t Direction)
{
	g_vehicle_trailer1.trailer_sts = vehicle_trailer1_trailer_sts_encode	(calc_vehicle_Trailer1_TrailerSts());
	VEHICLE_TRAILER1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_F_PBOX1 (u8_t Direction)
{
	g_vehicle_f_pbox1.hi_beam_sts_f_pbox = vehicle_f_pbox1_hi_beam_sts_f_pbox_encode	(calc_vehicle_F_PBOX1_HiBeamSts_F_PBOX());
	g_vehicle_f_pbox1.low_beam_sts_f_pbox = vehicle_f_pbox1_low_beam_sts_f_pbox_encode	(calc_vehicle_F_PBOX1_LowBeamSts_F_PBOX());
	g_vehicle_f_pbox1.f_fog_lmp_sts_f_pbox = vehicle_f_pbox1_f_fog_lmp_sts_f_pbox_encode	(calc_vehicle_F_PBOX1_FFogLmpSts_F_PBOX());
	VEHICLE_F_PBOX1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_DDCM1 (u8_t Direction)
{
	g_vehicle_ddcm1.rsds_driver_led_sts = vehicle_ddcm1_rsds_driver_led_sts_encode	(calc_vehicle_DDCM1_RSDS_Driver_LED_Sts());
	VEHICLE_DDCM1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_PDCM1 (u8_t Direction)
{
	g_vehicle_pdcm1.rsds_pass_led_sts = vehicle_pdcm1_rsds_pass_led_sts_encode	(calc_vehicle_PDCM1_RSDS_Pass_LED_Sts());
	VEHICLE_PDCM1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_vehicle_R_PBOX1 (u8_t Direction)
{
	g_vehicle_r_pbox1.hi_posn_brk_lmp_fail_sts = vehicle_r_pbox1_hi_posn_brk_lmp_fail_sts_encode	(calc_vehicle_R_PBOX1_HiPosnBrkLmpFailSts());
	g_vehicle_r_pbox1.l_brk_lmp_fail_sts = vehicle_r_pbox1_l_brk_lmp_fail_sts_encode	(calc_vehicle_R_PBOX1_LBrkLmpFailSts());
	g_vehicle_r_pbox1.r_brk_lmp_fail_sts = vehicle_r_pbox1_r_brk_lmp_fail_sts_encode	(calc_vehicle_R_PBOX1_RBrkLmpFailSts());
	g_vehicle_r_pbox1.posn_lmp_outp_sts_r_pbox = vehicle_r_pbox1_posn_lmp_outp_sts_r_pbox_encode	(calc_vehicle_R_PBOX1_PosnLmpOutpSts_R_PBOX());
	g_vehicle_r_pbox1.l_turn_lmp_sts_r_pbox = vehicle_r_pbox1_l_turn_lmp_sts_r_pbox_encode	(calc_vehicle_R_PBOX1_LTurnLmpSts_R_PBOX());
	g_vehicle_r_pbox1.r_turn_lmp_sts_r_pbox = vehicle_r_pbox1_r_turn_lmp_sts_r_pbox_encode	(calc_vehicle_R_PBOX1_RTurnLmpSts_R_PBOX());
	g_vehicle_r_pbox1.r_fog_lmp_fail_sts_r_pbox = vehicle_r_pbox1_r_fog_lmp_fail_sts_r_pbox_encode	(calc_vehicle_R_PBOX1_RFogLmpFailSts_R_PBOX());
	g_vehicle_r_pbox1.r_fog_lmp_sts_r_pbox = vehicle_r_pbox1_r_fog_lmp_sts_r_pbox_encode	(calc_vehicle_R_PBOX1_RFogLmpSts_R_PBOX());
	VEHICLE_R_PBOX1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
