
#include "datatypes.h"
#include "can.h"
//#include "crc_CAN.h"
#include "ecu_Tx_mapping.h"
#include "ecu.h"
#include "ecu_txrx_can.h" 

void on_Timer_ecu_ACC_382 (u8_t Direction)
{
	g_ecu_acc_382.acc_rolling_counter_35_d = ecu_acc_382_acc_rolling_counter_35_d_encode(calc_ecu_ACC_382_ACC_RollingCounter_35D());
	g_ecu_acc_382.acc_crc_check_35_d = ecu_acc_382_acc_crc_check_35_d_encode(calc_ecu_ACC_382_ACC_CRCCheck_35D());
	g_ecu_acc_382.acc_rolling_counter_35_c = ecu_acc_382_acc_rolling_counter_35_c_encode(calc_ecu_ACC_382_ACC_RollingCounter_35C());
	g_ecu_acc_382.acc_crc_check_35_c = ecu_acc_382_acc_crc_check_35_c_encode(calc_ecu_ACC_382_ACC_CRCCheck_35C());
	g_ecu_acc_382.acc_lane_quality = ecu_acc_382_acc_lane_quality_encode(calc_ecu_ACC_382_ACC_LaneQuality());
	g_ecu_acc_382.acc_lane_equation_c1 = ecu_acc_382_acc_lane_equation_c1_encode(calc_ecu_ACC_382_ACC_LaneEquationC1());
	g_ecu_acc_382.acc_lane_equation_c2 = ecu_acc_382_acc_lane_equation_c2_encode(calc_ecu_ACC_382_ACC_LaneEquationC2());
	g_ecu_acc_382.acc_lane_equation_c3 = ecu_acc_382_acc_lane_equation_c3_encode(calc_ecu_ACC_382_ACC_LaneEquationC3());
	g_ecu_acc_382.acc_lane_equation_status = ecu_acc_382_acc_lane_equation_status_encode(calc_ecu_ACC_382_ACC_LaneEquationStatus());
	g_ecu_acc_382.acc_rolling_counter_3_e6 = ecu_acc_382_acc_rolling_counter_3_e6_encode(calc_ecu_ACC_382_ACC_RollingCounter_3E6());
	g_ecu_acc_382.acc_crc_check_3_e6 = ecu_acc_382_acc_crc_check_3_e6_encode(calc_ecu_ACC_382_ACC_CRCCheck_3E6());
	g_ecu_acc_382.acc_target1_detection = ecu_acc_382_acc_target1_detection_encode(calc_ecu_ACC_382_ACC_Target1Detection());
	g_ecu_acc_382.acc_target1_id = ecu_acc_382_acc_target1_id_encode(calc_ecu_ACC_382_ACC_Target1ID());
	g_ecu_acc_382.acc_target1_type = ecu_acc_382_acc_target1_type_encode(calc_ecu_ACC_382_ACC_Target1Type());
	g_ecu_acc_382.acc_target1_direction = ecu_acc_382_acc_target1_direction_encode(calc_ecu_ACC_382_ACC_Target1Direction());
	g_ecu_acc_382.acc_target1_lng_range = ecu_acc_382_acc_target1_lng_range_encode(calc_ecu_ACC_382_ACC_Target1LngRange());
	g_ecu_acc_382.acc_target1_lat_range = ecu_acc_382_acc_target1_lat_range_encode(calc_ecu_ACC_382_ACC_Target1LatRange());
	g_ecu_acc_382.acc_target1_heading_angle = ecu_acc_382_acc_target1_heading_angle_encode(calc_ecu_ACC_382_ACC_Target1HeadingAngle());
	g_ecu_acc_382.acc_target1_zone_id = ecu_acc_382_acc_target1_zone_id_encode(calc_ecu_ACC_382_ACC_Target1ZoneID());
	g_ecu_acc_382.acc_target2_detection = ecu_acc_382_acc_target2_detection_encode(calc_ecu_ACC_382_ACC_Target2Detection());
	g_ecu_acc_382.acc_target2_id = ecu_acc_382_acc_target2_id_encode(calc_ecu_ACC_382_ACC_Target2ID());
	g_ecu_acc_382.acc_target2_type = ecu_acc_382_acc_target2_type_encode(calc_ecu_ACC_382_ACC_Target2Type());
	g_ecu_acc_382.acc_target2_lng_range = ecu_acc_382_acc_target2_lng_range_encode(calc_ecu_ACC_382_ACC_Target2LngRange());
	g_ecu_acc_382.acc_target2_lat_range = ecu_acc_382_acc_target2_lat_range_encode(calc_ecu_ACC_382_ACC_Target2LatRange());
	g_ecu_acc_382.acc_target2_direction = ecu_acc_382_acc_target2_direction_encode(calc_ecu_ACC_382_ACC_Target2Direction());
	g_ecu_acc_382.acc_target2_heading_angle = ecu_acc_382_acc_target2_heading_angle_encode(calc_ecu_ACC_382_ACC_Target2HeadingAngle());
	g_ecu_acc_382.acc_target2_zone_id = ecu_acc_382_acc_target2_zone_id_encode(calc_ecu_ACC_382_ACC_Target2ZoneID());
	g_ecu_acc_382.acc_target3_detection = ecu_acc_382_acc_target3_detection_encode(calc_ecu_ACC_382_ACC_Target3Detection());
	g_ecu_acc_382.acc_target3_id = ecu_acc_382_acc_target3_id_encode(calc_ecu_ACC_382_ACC_Target3ID());
	g_ecu_acc_382.acc_target3_type = ecu_acc_382_acc_target3_type_encode(calc_ecu_ACC_382_ACC_Target3Type());
	g_ecu_acc_382.acc_target3_lng_range = ecu_acc_382_acc_target3_lng_range_encode(calc_ecu_ACC_382_ACC_Target3LngRange());
	g_ecu_acc_382.acc_target3_lat_range = ecu_acc_382_acc_target3_lat_range_encode(calc_ecu_ACC_382_ACC_Target3LatRange());
	g_ecu_acc_382.acc_target3_direction = ecu_acc_382_acc_target3_direction_encode(calc_ecu_ACC_382_ACC_Target3Direction());
	g_ecu_acc_382.acc_target3_heading_angle = ecu_acc_382_acc_target3_heading_angle_encode(calc_ecu_ACC_382_ACC_Target3HeadingAngle());
	g_ecu_acc_382.acc_target3_zone_id = ecu_acc_382_acc_target3_zone_id_encode(calc_ecu_ACC_382_ACC_Target3ZoneID());
	g_ecu_acc_382.acc_target4_detection = ecu_acc_382_acc_target4_detection_encode(calc_ecu_ACC_382_ACC_Target4Detection());
	g_ecu_acc_382.acc_target4_id = ecu_acc_382_acc_target4_id_encode(calc_ecu_ACC_382_ACC_Target4ID());
	g_ecu_acc_382.acc_target4_type = ecu_acc_382_acc_target4_type_encode(calc_ecu_ACC_382_ACC_Target4Type());
	g_ecu_acc_382.acc_target4_lng_range = ecu_acc_382_acc_target4_lng_range_encode(calc_ecu_ACC_382_ACC_Target4LngRange());
	g_ecu_acc_382.acc_target4_lat_range = ecu_acc_382_acc_target4_lat_range_encode(calc_ecu_ACC_382_ACC_Target4LatRange());
	g_ecu_acc_382.acc_target4_direction = ecu_acc_382_acc_target4_direction_encode(calc_ecu_ACC_382_ACC_Target4Direction());
	g_ecu_acc_382.acc_target4_heading_angle = ecu_acc_382_acc_target4_heading_angle_encode(calc_ecu_ACC_382_ACC_Target4HeadingAngle());
	g_ecu_acc_382.acc_target4_zone_id = ecu_acc_382_acc_target4_zone_id_encode(calc_ecu_ACC_382_ACC_Target4ZoneID());
	g_ecu_acc_382.acc_target5_detection = ecu_acc_382_acc_target5_detection_encode(calc_ecu_ACC_382_ACC_Target5Detection());
	g_ecu_acc_382.acc_target5_id = ecu_acc_382_acc_target5_id_encode(calc_ecu_ACC_382_ACC_Target5ID());
	g_ecu_acc_382.acc_target5_type = ecu_acc_382_acc_target5_type_encode(calc_ecu_ACC_382_ACC_Target5Type());
	g_ecu_acc_382.acc_target5_lng_range = ecu_acc_382_acc_target5_lng_range_encode(calc_ecu_ACC_382_ACC_Target5LngRange());
	g_ecu_acc_382.acc_target5_lat_range = ecu_acc_382_acc_target5_lat_range_encode(calc_ecu_ACC_382_ACC_Target5LatRange());
	g_ecu_acc_382.acc_target5_direction = ecu_acc_382_acc_target5_direction_encode(calc_ecu_ACC_382_ACC_Target5Direction());
	g_ecu_acc_382.acc_target5_heading_angle = ecu_acc_382_acc_target5_heading_angle_encode(calc_ecu_ACC_382_ACC_Target5HeadingAngle());
	g_ecu_acc_382.acc_target5_zone_id = ecu_acc_382_acc_target5_zone_id_encode(calc_ecu_ACC_382_ACC_Target5ZoneID());
	g_ecu_acc_382.acc_tar_veh_lng_range = ecu_acc_382_acc_tar_veh_lng_range_encode(calc_ecu_ACC_382_ACC_TarVehLngRange());
	ECU_ACC_382_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2A4 (u8_t Direction)
{
	g_ecu_gw_2a4.lcdar_bsd_lca_sound_war = ecu_gw_2_a4_lcdar_bsd_lca_sound_war_encode(calc_ecu_GW_2A4_LCDAR_BSD_LCASoundWar());
	g_ecu_gw_2a4.lcdar_left_rcta_alert = ecu_gw_2_a4_lcdar_left_rcta_alert_encode(calc_ecu_GW_2A4_LCDAR_Left_RCTAAlert());
	g_ecu_gw_2a4.lcdar_system_status = ecu_gw_2_a4_lcdar_system_status_encode(calc_ecu_GW_2A4_LCDAR_SystemStatus());
	g_ecu_gw_2a4.lcdar_rcta_alert = ecu_gw_2_a4_lcdar_rcta_alert_encode(calc_ecu_GW_2A4_LCDAR_RCTAAlert());
	g_ecu_gw_2a4.lcdar_rctb_active = ecu_gw_2_a4_lcdar_rctb_active_encode(calc_ecu_GW_2A4_LCDAR_RCTBActive());
	g_ecu_gw_2a4.lcdar_rctb_enable = ecu_gw_2_a4_lcdar_rctb_enable_encode(calc_ecu_GW_2A4_LCDAR_RCTBEnable());
	g_ecu_gw_2a4.lcdar_rctb_status = ecu_gw_2_a4_lcdar_rctb_status_encode(calc_ecu_GW_2A4_LCDAR_RCTBStatus());
	g_ecu_gw_2a4.lcdar_left_elk_o_alert = ecu_gw_2_a4_lcdar_left_elk_o_alert_encode(calc_ecu_GW_2A4_LCDAR_Left_ELK_oAlert());
	g_ecu_gw_2a4.lcdar_elk_o_status = ecu_gw_2_a4_lcdar_elk_o_status_encode(calc_ecu_GW_2A4_LCDAR_ELK_oStatus());
	g_ecu_gw_2a4.lcdar_elk_o_alert = ecu_gw_2_a4_lcdar_elk_o_alert_encode(calc_ecu_GW_2A4_LCDAR_ELK_oAlert());
	g_ecu_gw_2a4.lcdar_rctb_target_decel = ecu_gw_2_a4_lcdar_rctb_target_decel_encode(calc_ecu_GW_2A4_LCDAR_RCTBTargetDecel());
	g_ecu_gw_2a4.lcdar_rolling_counter_2_af = ecu_gw_2_a4_lcdar_rolling_counter_2_af_encode(calc_ecu_GW_2A4_LCDAR_RollingCounter_2AF());
	g_ecu_gw_2a4.lcdar_crc_check_2_af = ecu_gw_2_a4_lcdar_crc_check_2_af_encode(calc_ecu_GW_2A4_LCDAR_CRCCheck_2AF());
	ECU_GW_2A4_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_765 (u8_t Direction)
{
	g_ecu_gw_765.diagnose_message765 = ecu_gw_765_diagnose_message765_encode(calc_ecu_GW_765_Diagnose_message765());
	ECU_GW_765_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_76D (u8_t Direction)
{
	g_ecu_acc_76d.diagnose_message76_d = ecu_acc_76_d_diagnose_message76_d_encode(calc_ecu_ACC_76D_Diagnose_message76D());
	ECU_ACC_76D_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_791 (u8_t Direction)
{
	g_ecu_gw_791.diagnose_message791 = ecu_gw_791_diagnose_message791_encode(calc_ecu_GW_791_Diagnose_message791());
	ECU_GW_791_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_799 (u8_t Direction)
{
	g_ecu_acc_799.diagnose_message799 = ecu_acc_799_diagnose_message799_encode(calc_ecu_ACC_799_Diagnose_message799());
	ECU_ACC_799_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_752 (u8_t Direction)
{
	g_ecu_gw_752.diagnose_message752 = ecu_gw_752_diagnose_message752_encode(calc_ecu_GW_752_Diagnose_message752());
	ECU_GW_752_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_75A (u8_t Direction)
{
	g_ecu_las_75a.diagnose_message75_a = ecu_las_75_a_diagnose_message75_a_encode(calc_ecu_LAS_75A_Diagnose_message75A());
	ECU_LAS_75A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_763 (u8_t Direction)
{
	g_ecu_gw_763.diagnose_message763 = ecu_gw_763_diagnose_message763_encode(calc_ecu_GW_763_Diagnose_message763());
	ECU_GW_763_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_76B (u8_t Direction)
{
	g_ecu_las_76b.diagnose_message76_b = ecu_las_76_b_diagnose_message76_b_encode(calc_ecu_LAS_76B_Diagnose_message76B());
	ECU_LAS_76B_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_592 (u8_t Direction)
{
	g_ecu_las_592.las_wake_up_byte4_bit1 = ecu_las_592_las_wake_up_byte4_bit1_encode(calc_ecu_LAS_592_LAS_WakeUp_BYTE4BIT1());
	g_ecu_las_592.las_wake_up_byte4_bit0 = ecu_las_592_las_wake_up_byte4_bit0_encode(calc_ecu_LAS_592_LAS_WakeUp_BYTE4BIT0());
	g_ecu_las_592.las_not_sleep_byte7_bit1 = ecu_las_592_las_not_sleep_byte7_bit1_encode(calc_ecu_LAS_592_LAS_NotSleep_BYTE7BIT1());
	g_ecu_las_592.las_not_sleep_byte7_bit0 = ecu_las_592_las_not_sleep_byte7_bit0_encode(calc_ecu_LAS_592_LAS_NotSleep_BYTE7BIT0());
	ECU_LAS_592_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_594 (u8_t Direction)
{
	g_ecu_acc_594.fr_wake_up_byte4_bit1 = ecu_acc_594_fr_wake_up_byte4_bit1_encode(calc_ecu_ACC_594_FR_WakeUp_BYTE4BIT1());
	g_ecu_acc_594.fr_wake_up_byte4_bit0 = ecu_acc_594_fr_wake_up_byte4_bit0_encode(calc_ecu_ACC_594_FR_WakeUp_BYTE4BIT0());
	g_ecu_acc_594.fr_not_sleep_byte7_bit1 = ecu_acc_594_fr_not_sleep_byte7_bit1_encode(calc_ecu_ACC_594_FR_NotSleep_BYTE7BIT1());
	g_ecu_acc_594.fr_not_sleep_byte7_bit0 = ecu_acc_594_fr_not_sleep_byte7_bit0_encode(calc_ecu_ACC_594_FR_NotSleep_BYTE7BIT0());
	ECU_ACC_594_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_50 (u8_t Direction)
{
	g_ecu_gw_50.srs_crash_output_status = ecu_gw_50_srs_crash_output_status_encode(calc_ecu_GW_50_SRS_CrashOutputStatus());
	g_ecu_gw_50.srs_crash_output_status_check_sum = ecu_gw_50_srs_crash_output_status_check_sum_encode(calc_ecu_GW_50_SRS_CrashOutputStatusCheckSum());
	g_ecu_gw_50.srs_driver_buckle_switch_status = ecu_gw_50_srs_driver_buckle_switch_status_encode(calc_ecu_GW_50_SRS_DriverBuckleSwitchStatus());
	g_ecu_gw_50.srs_passenger_buckle_switch_status = ecu_gw_50_srs_passenger_buckle_switch_status_encode(calc_ecu_GW_50_SRS_PassengerBuckleSwitchStatus());
	g_ecu_gw_50.srs_left_rear_buckle_switch_sts = ecu_gw_50_srs_left_rear_buckle_switch_sts_encode(calc_ecu_GW_50_SRS_LeftRearBuckleSwitchSts());
	g_ecu_gw_50.srs_warning_lamp_status = ecu_gw_50_srs_warning_lamp_status_encode(calc_ecu_GW_50_SRS_WarningLampStatus());
	g_ecu_gw_50.srs_pad_indication = ecu_gw_50_srs_pad_indication_encode(calc_ecu_GW_50_SRS_PADIndication());
	g_ecu_gw_50.srs_middle_rear_buckle_switch_sts = ecu_gw_50_srs_middle_rear_buckle_switch_sts_encode(calc_ecu_GW_50_SRS_MiddleRearBuckleSwitchSts());
	g_ecu_gw_50.srs_front_psg_occupancy = ecu_gw_50_srs_front_psg_occupancy_encode(calc_ecu_GW_50_SRS_FrontPsgOccupancy());
	g_ecu_gw_50.srs_right_rear_buckle_switch_sts = ecu_gw_50_srs_right_rear_buckle_switch_sts_encode(calc_ecu_GW_50_SRS_RightRearBuckleSwitchSts());
	g_ecu_gw_50.srs_rolling_counter_id050 = ecu_gw_50_srs_rolling_counter_id050_encode(calc_ecu_GW_50_SRS_RollingCounter_id050());
	g_ecu_gw_50.srs_crc_check_50 = ecu_gw_50_srs_crc_check_50_encode(calc_ecu_GW_50_SRS_CRCCheck_50());
	ECU_GW_50_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_170 (u8_t Direction)
{
	g_ecu_gw_170.eps_actual_motor_torq = ecu_gw_170_eps_actual_motor_torq_encode(calc_ecu_GW_170_EPS_ActualMotorTorq());
	g_ecu_gw_170.eps_max_safety_torsion_bar_torq = ecu_gw_170_eps_max_safety_torsion_bar_torq_encode(calc_ecu_GW_170_EPS_MaxSafetyTorsionBarTorq());
	g_ecu_gw_170.eps_min_safety_torsion_bar_torq = ecu_gw_170_eps_min_safety_torsion_bar_torq_encode(calc_ecu_GW_170_EPS_MinSafetyTorsionBarTorq());
	g_ecu_gw_170.eps_actual_torsion_bar_torq = ecu_gw_170_eps_actual_torsion_bar_torq_encode(calc_ecu_GW_170_EPS_ActualTorsionBarTorq());
	g_ecu_gw_170.eps_fault_state = ecu_gw_170_eps_fault_state_encode(calc_ecu_GW_170_EPS_fault_state());
	g_ecu_gw_170.eps_rolling_counter_170 = ecu_gw_170_eps_rolling_counter_170_encode(calc_ecu_GW_170_EPS_RollingCounter_170());
	g_ecu_gw_170.eps_crc_check_170 = ecu_gw_170_eps_crc_check_170_encode(calc_ecu_GW_170_EPS_CRCCheck_170());
	ECU_GW_170_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_180 (u8_t Direction)
{
	g_ecu_gw_180.sas_steering_angle = ecu_gw_180_sas_steering_angle_encode(calc_ecu_GW_180_SAS_SteeringAngle());
	g_ecu_gw_180.sas_steering_angle_speed = ecu_gw_180_sas_steering_angle_speed_encode(calc_ecu_GW_180_SAS_SteeringAngleSpeed());
	g_ecu_gw_180.sas_steering_angle_valid = ecu_gw_180_sas_steering_angle_valid_encode(calc_ecu_GW_180_SAS_SteeringAngleValid());
	g_ecu_gw_180.sas_sas_failure = ecu_gw_180_sas_sas_failure_encode(calc_ecu_GW_180_SAS_SASFailure());
	g_ecu_gw_180.sas_calibrated = ecu_gw_180_sas_calibrated_encode(calc_ecu_GW_180_SAS_Calibrated());
	g_ecu_gw_180.sas_rolling_counter = ecu_gw_180_sas_rolling_counter_encode(calc_ecu_GW_180_SAS_RollingCounter());
	g_ecu_gw_180.sas_crc_check = ecu_gw_180_sas_crc_check_encode(calc_ecu_GW_180_SAS_CRCCheck());
	ECU_GW_180_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_244 (u8_t Direction)
{
	g_ecu_acc_244.acc_acc_target_acceleration = ecu_acc_244_acc_acc_target_acceleration_encode(calc_ecu_ACC_244_ACC_ACCTargetAcceleration());
	g_ecu_acc_244.acc_lka_status = ecu_acc_244_acc_lka_status_encode(calc_ecu_ACC_244_ACC_LKAStatus());
	g_ecu_acc_244.acc_ldw_vibration_warning_req = ecu_acc_244_acc_ldw_vibration_warning_req_encode(calc_ecu_ACC_244_ACC_LDWVibrationWarningReq());
	g_ecu_acc_244.acc_ldw_status = ecu_acc_244_acc_ldw_status_encode(calc_ecu_ACC_244_ACC_LDWStatus());
	g_ecu_acc_244.acc_emergency_data_rrd_req = ecu_acc_244_acc_emergency_data_rrd_req_encode(calc_ecu_ACC_244_ACC_EmergencyDataRrdReq());
	g_ecu_acc_244.acc_ldw_shake_lev_status = ecu_acc_244_acc_ldw_shake_lev_status_encode(calc_ecu_ACC_244_ACC_LDWShakeLevStatus());
	g_ecu_acc_244.acc_dec_to_stop = ecu_acc_244_acc_dec_to_stop_encode(calc_ecu_ACC_244_ACC_DecToStop());
	g_ecu_acc_244.acc_text_info_for_driver = ecu_acc_244_acc_text_info_for_driver_encode(calc_ecu_ACC_244_ACC_TextInfoForDriver());
	g_ecu_acc_244.acc_cdd_active = ecu_acc_244_acc_cdd_active_encode(calc_ecu_ACC_244_ACC_CDDActive());
	g_ecu_acc_244.acc_driveoff_request = ecu_acc_244_acc_driveoff_request_encode(calc_ecu_ACC_244_ACC_Driveoff_Request());
	g_ecu_acc_244.acc_acc_mode = ecu_acc_244_acc_acc_mode_encode(calc_ecu_ACC_244_ACC_ACCMode());
	g_ecu_acc_244.acc_rolling_counter_24_e = ecu_acc_244_acc_rolling_counter_24_e_encode(calc_ecu_ACC_244_ACC_RollingCounter_24E());
	g_ecu_acc_244.acc_crc_check_24_e = ecu_acc_244_acc_crc_check_24_e_encode(calc_ecu_ACC_244_ACC_CRCCheck_24E());
	g_ecu_acc_244.acc_aeb_target_deceleration = ecu_acc_244_acc_aeb_target_deceleration_encode(calc_ecu_ACC_244_ACC_AEBTargetDeceleration());
	g_ecu_acc_244.acc_aeb_active = ecu_acc_244_acc_aeb_active_encode(calc_ecu_ACC_244_ACC_AEBActive());
	g_ecu_acc_244.acc_ab_alevel = ecu_acc_244_acc_ab_alevel_encode(calc_ecu_ACC_244_ACC_ABAlevel());
	g_ecu_acc_244.acc_aba_active = ecu_acc_244_acc_aba_active_encode(calc_ecu_ACC_244_ACC_ABAActive());
	g_ecu_acc_244.acc_aw_blevel = ecu_acc_244_acc_aw_blevel_encode(calc_ecu_ACC_244_ACC_AWBlevel());
	g_ecu_acc_244.acc_awb_active = ecu_acc_244_acc_awb_active_encode(calc_ecu_ACC_244_ACC_AWBActive());
	g_ecu_acc_244.acc_prefill_active = ecu_acc_244_acc_prefill_active_encode(calc_ecu_ACC_244_ACC_PrefillActive());
	g_ecu_acc_244.acc_fcw_active = ecu_acc_244_acc_fcw_active_encode(calc_ecu_ACC_244_ACC_FCWActive());
	g_ecu_acc_244.acc_fcw_latent_warning = ecu_acc_244_acc_fcw_latent_warning_encode(calc_ecu_ACC_244_ACC_FCWLatentWarning());
	g_ecu_acc_244.acc_fcw_pre_warning = ecu_acc_244_acc_fcw_pre_warning_encode(calc_ecu_ACC_244_ACC_FCWPreWarning());
	g_ecu_acc_244.acc_aeb_vehilce_hold_req = ecu_acc_244_acc_aeb_vehilce_hold_req_encode(calc_ecu_ACC_244_ACC_AEBVehilceHoldReq());
	g_ecu_acc_244.acc_acc_trq_req = ecu_acc_244_acc_acc_trq_req_encode(calc_ecu_ACC_244_ACC_AccTrqReq());
	g_ecu_acc_244.acc_acc_trq_req_active = ecu_acc_244_acc_acc_trq_req_active_encode(calc_ecu_ACC_244_ACC_AccTrqReqActive());
	g_ecu_acc_244.acc_aeb_ctrl_type = ecu_acc_244_acc_aeb_ctrl_type_encode(calc_ecu_ACC_244_ACC_AEBCtrlType());
	g_ecu_acc_244.acc_rolling_counter_25_e = ecu_acc_244_acc_rolling_counter_25_e_encode(calc_ecu_ACC_244_ACC_RollingCounter_25E());
	g_ecu_acc_244.acc_crc_check_25_e = ecu_acc_244_acc_crc_check_25_e_encode(calc_ecu_ACC_244_ACC_CRCCheck_25E());
	g_ecu_acc_244.acc_lng_take_over_req = ecu_acc_244_acc_lng_take_over_req_encode(calc_ecu_ACC_244_ACC_LngTakeOverReq());
	g_ecu_acc_244.acc_lat_takeover_req = ecu_acc_244_acc_lat_takeover_req_encode(calc_ecu_ACC_244_ACC_LatTakeoverReq());
	g_ecu_acc_244.acc_hands_on_req = ecu_acc_244_acc_hands_on_req_encode(calc_ecu_ACC_244_ACC_HandsOnReq());
	g_ecu_acc_244.ads_eomto_req = ecu_acc_244_ads_eomto_req_encode(calc_ecu_ACC_244_ADS_EOMTOReq());
	g_ecu_acc_244.ads__rolling_counter_244 = ecu_acc_244_ads__rolling_counter_244_encode(calc_ecu_ACC_244_ADS__RollingCounter_244());
	g_ecu_acc_244.ads_crc_check_244 = ecu_acc_244_ads_crc_check_244_encode(calc_ecu_ACC_244_ADS_CRCCheck_244());
	ECU_ACC_244_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_278 (u8_t Direction)
{
	g_ecu_gw_278.esp_lat_accel = ecu_gw_278_esp_lat_accel_encode(calc_ecu_GW_278_ESP_LatAccel());
	g_ecu_gw_278.esp_long_accel = ecu_gw_278_esp_long_accel_encode(calc_ecu_GW_278_ESP_LongAccel());
	g_ecu_gw_278.esp_yaw_rate = ecu_gw_278_esp_yaw_rate_encode(calc_ecu_GW_278_ESP_YawRate());
	g_ecu_gw_278.esp_yaw_rate_valid = ecu_gw_278_esp_yaw_rate_valid_encode(calc_ecu_GW_278_ESP_YawRateValid());
	g_ecu_gw_278.esp_rolling_counter_278 = ecu_gw_278_esp_rolling_counter_278_encode(calc_ecu_GW_278_ESP_RollingCounter_278());
	g_ecu_gw_278.esp_crc_check_278 = ecu_gw_278_esp_crc_check_278_encode(calc_ecu_GW_278_ESP_CRCCheck_278());
	ECU_GW_278_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_298 (u8_t Direction)
{
	g_ecu_gw_298.peps_trunk_request_signal = ecu_gw_298_peps_trunk_request_signal_encode(calc_ecu_GW_298_PEPS_TrunkRequestSignal());
	g_ecu_gw_298.peps_key_learning_signal = ecu_gw_298_peps_key_learning_signal_encode(calc_ecu_GW_298_PEPS_KeyLearningSignal());
	g_ecu_gw_298.peps_easy_open_orginal_signal = ecu_gw_298_peps_easy_open_orginal_signal_encode(calc_ecu_GW_298_PEPS_EasyOpenOrginalSignal());
	g_ecu_gw_298.peps_remote_failed_alarm_signal = ecu_gw_298_peps_remote_failed_alarm_signal_encode(calc_ecu_GW_298_PEPS_RemoteFailedAlarmSignal());
	g_ecu_gw_298.peps_search_car_signal = ecu_gw_298_peps_search_car_signal_encode(calc_ecu_GW_298_PEPS_SearchCarSignal());
	g_ecu_gw_298.peps_luggage_unlock_signal = ecu_gw_298_peps_luggage_unlock_signal_encode(calc_ecu_GW_298_PEPS_LuggageUnlockSignal());
	g_ecu_gw_298.peps_key_number = ecu_gw_298_peps_key_number_encode(calc_ecu_GW_298_PEPS_KeyNumber());
	g_ecu_gw_298.peps_key_authentication_status = ecu_gw_298_peps_key_authentication_status_encode(calc_ecu_GW_298_PEPS_KeyAuthenticationStatus());
	g_ecu_gw_298.peps_easy_open = ecu_gw_298_peps_easy_open_encode(calc_ecu_GW_298_PEPS_Easy_open());
	g_ecu_gw_298.peps_welcomelamp = ecu_gw_298_peps_welcomelamp_encode(calc_ecu_GW_298_PEPS_Welcomelamp());
	g_ecu_gw_298.peps_smart_trunk_ulock_remind = ecu_gw_298_peps_smart_trunk_ulock_remind_encode(calc_ecu_GW_298_PEPS_SmartTrunkUlockRemind());
	g_ecu_gw_298.peps_unlock_signal = ecu_gw_298_peps_unlock_signal_encode(calc_ecu_GW_298_PEPS_UnlockSignal());
	g_ecu_gw_298.peps_lock_signal = ecu_gw_298_peps_lock_signal_encode(calc_ecu_GW_298_PEPS_LockSignal());
	g_ecu_gw_298.peps_lock_key_status = ecu_gw_298_peps_lock_key_status_encode(calc_ecu_GW_298_PEPS_LockKeyStatus());
	g_ecu_gw_298.bcm_trunk_unlock_req = ecu_gw_298_bcm_trunk_unlock_req_encode(calc_ecu_GW_298_BCM_TrunkUnlockReq());
	g_ecu_gw_298.peps_smart_welcome_light_staus = ecu_gw_298_peps_smart_welcome_light_staus_encode(calc_ecu_GW_298_PEPS_SmartWelcomeLightStaus());
	g_ecu_gw_298.peps_trunk_key_status = ecu_gw_298_peps_trunk_key_status_encode(calc_ecu_GW_298_PEPS_TrunkKeyStatus());
	g_ecu_gw_298.peps_un_lock_key_status = ecu_gw_298_peps_un_lock_key_status_encode(calc_ecu_GW_298_PEPS_UnLockKeyStatus());
	g_ecu_gw_298.bcm_driver_door_lock_status = ecu_gw_298_bcm_driver_door_lock_status_encode(calc_ecu_GW_298_BCM_DriverDoorLockStatus());
	g_ecu_gw_298.bcm_passenger_door_lock_status = ecu_gw_298_bcm_passenger_door_lock_status_encode(calc_ecu_GW_298_BCM_PassengerDoorLockStatus());
	g_ecu_gw_298.bcm_left_rear_door_status = ecu_gw_298_bcm_left_rear_door_status_encode(calc_ecu_GW_298_BCM_LeftRearDoorStatus());
	g_ecu_gw_298.bcm_rolling_counter_298 = ecu_gw_298_bcm_rolling_counter_298_encode(calc_ecu_GW_298_BCM_RollingCounter_298());
	g_ecu_gw_298.bcm_crc_check_298 = ecu_gw_298_bcm_crc_check_298_encode(calc_ecu_GW_298_BCM_CRCCheck_298());
	ECU_GW_298_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_307 (u8_t Direction)
{
	g_ecu_acc_307.acc_set_speed = ecu_acc_307_acc_set_speed_encode(calc_ecu_ACC_307_ACC_SetSpeed());
	g_ecu_acc_307.acc_obj_valid = ecu_acc_307_acc_obj_valid_encode(calc_ecu_ACC_307_ACC_ObjValid());
	g_ecu_acc_307.acc_accep_brequest = ecu_acc_307_acc_accep_brequest_encode(calc_ecu_ACC_307_ACC_ACCEPBrequest());
	g_ecu_acc_307.acc_distance_level = ecu_acc_307_acc_distance_level_encode(calc_ecu_ACC_307_ACC_DistanceLevel());
	g_ecu_acc_307.acc_time_gap_set = ecu_acc_307_acc_time_gap_set_encode(calc_ecu_ACC_307_ACC_TimeGapSet());
	g_ecu_acc_307.acc_fcw_setting_status = ecu_acc_307_acc_fcw_setting_status_encode(calc_ecu_ACC_307_ACC_FCWSettingStatus());
	g_ecu_acc_307.acc_aeb_enable = ecu_acc_307_acc_aeb_enable_encode(calc_ecu_ACC_307_ACC_AEBEnable());
	g_ecu_acc_307.acc_iacc_suspend_reason = ecu_acc_307_acc_iacc_suspend_reason_encode(calc_ecu_ACC_307_ACC_IACCSuspendReason());
	g_ecu_acc_307.acc_rolling_counter_35_e = ecu_acc_307_acc_rolling_counter_35_e_encode(calc_ecu_ACC_307_ACC_RollingCounter_35E());
	g_ecu_acc_307.acc_crc_check_35_e = ecu_acc_307_acc_crc_check_35_e_encode(calc_ecu_ACC_307_ACC_CRCCheck_35E());
	g_ecu_acc_307.acc_acc_target_lng_range = ecu_acc_307_acc_acc_target_lng_range_encode(calc_ecu_ACC_307_ACC_ACCTargetLngRange());
	g_ecu_acc_307.acc_aeb_feature_config = ecu_acc_307_acc_aeb_feature_config_encode(calc_ecu_ACC_307_ACC_AEBFeatureConfig());
	g_ecu_acc_307.acc_f_radar_calibration_status = ecu_acc_307_acc_f_radar_calibration_status_encode(calc_ecu_ACC_307_ACC_FRadarCalibrationStatus());
	g_ecu_acc_307.acc_acc_target_rel_spd = ecu_acc_307_acc_acc_target_rel_spd_encode(calc_ecu_ACC_307_ACC_ACCTargetRelSpd());
	g_ecu_acc_307.acc_rolling_counter_322 = ecu_acc_307_acc_rolling_counter_322_encode(calc_ecu_ACC_307_ACC_RollingCounter_322());
	g_ecu_acc_307.acc_crc_check_322 = ecu_acc_307_acc_crc_check_322_encode(calc_ecu_ACC_307_ACC_CRCCheck_322());
	g_ecu_acc_307.acc_rolling_counter_344 = ecu_acc_307_acc_rolling_counter_344_encode(calc_ecu_ACC_307_ACC_RollingCounter_344());
	g_ecu_acc_307.acc_crc_check_344 = ecu_acc_307_acc_crc_check_344_encode(calc_ecu_ACC_307_ACC_CRCCheck_344());
	g_ecu_acc_307.acc_csl_set_req = ecu_acc_307_acc_csl_set_req_encode(calc_ecu_ACC_307_ACC_CSLSetReq());
	g_ecu_acc_307.acc_aeb_target_selected = ecu_acc_307_acc_aeb_target_selected_encode(calc_ecu_ACC_307_ACC_AEBTargetSelected());
	g_ecu_acc_307.acc_csla_enable_status = ecu_acc_307_acc_csla_enable_status_encode(calc_ecu_ACC_307_ACC_CSLAEnableStatus());
	g_ecu_acc_307.acc_rolling_counter_35_f = ecu_acc_307_acc_rolling_counter_35_f_encode(calc_ecu_ACC_307_ACC_RollingCounter_35F());
	g_ecu_acc_307.acc_crc_check_35_f = ecu_acc_307_acc_crc_check_35_f_encode(calc_ecu_ACC_307_ACC_CRCCheck_35F());
	g_ecu_acc_307.acc_target6_detection = ecu_acc_307_acc_target6_detection_encode(calc_ecu_ACC_307_ACC_Target6Detection());
	g_ecu_acc_307.acc_target6_id = ecu_acc_307_acc_target6_id_encode(calc_ecu_ACC_307_ACC_Target6ID());
	g_ecu_acc_307.acc_target6_type = ecu_acc_307_acc_target6_type_encode(calc_ecu_ACC_307_ACC_Target6Type());
	g_ecu_acc_307.acc_target6_direction = ecu_acc_307_acc_target6_direction_encode(calc_ecu_ACC_307_ACC_Target6Direction());
	g_ecu_acc_307.acc_target6_lng_range = ecu_acc_307_acc_target6_lng_range_encode(calc_ecu_ACC_307_ACC_Target6LngRange());
	g_ecu_acc_307.acc_target6_lat_range = ecu_acc_307_acc_target6_lat_range_encode(calc_ecu_ACC_307_ACC_Target6LatRange());
	g_ecu_acc_307.acc_target6_heading_angle = ecu_acc_307_acc_target6_heading_angle_encode(calc_ecu_ACC_307_ACC_Target6HeadingAngle());
	g_ecu_acc_307.acc_target6_zone_id = ecu_acc_307_acc_target6_zone_id_encode(calc_ecu_ACC_307_ACC_Target6ZoneID());
	g_ecu_acc_307.acc_target7_detection = ecu_acc_307_acc_target7_detection_encode(calc_ecu_ACC_307_ACC_Target7Detection());
	g_ecu_acc_307.acc_target7_id = ecu_acc_307_acc_target7_id_encode(calc_ecu_ACC_307_ACC_Target7ID());
	g_ecu_acc_307.acc_target7_type = ecu_acc_307_acc_target7_type_encode(calc_ecu_ACC_307_ACC_Target7Type());
	g_ecu_acc_307.acc_target7_direction = ecu_acc_307_acc_target7_direction_encode(calc_ecu_ACC_307_ACC_Target7Direction());
	g_ecu_acc_307.acc_target7_lng_range = ecu_acc_307_acc_target7_lng_range_encode(calc_ecu_ACC_307_ACC_Target7LngRange());
	g_ecu_acc_307.acc_target7_lat_range = ecu_acc_307_acc_target7_lat_range_encode(calc_ecu_ACC_307_ACC_Target7LatRange());
	g_ecu_acc_307.acc_target7_heading_angle = ecu_acc_307_acc_target7_heading_angle_encode(calc_ecu_ACC_307_ACC_Target7HeadingAngle());
	g_ecu_acc_307.acc_target7_zone_id = ecu_acc_307_acc_target7_zone_id_encode(calc_ecu_ACC_307_ACC_Target7ZoneID());
	g_ecu_acc_307.acc_ll_lane_dis = ecu_acc_307_acc_ll_lane_dis_encode(calc_ecu_ACC_307_ACC_LLLaneDis());
	g_ecu_acc_307.acc_rr_lane_dis = ecu_acc_307_acc_rr_lane_dis_encode(calc_ecu_ACC_307_ACC_RRLaneDis());
	g_ecu_acc_307.acc_l_lane_distance_fus = ecu_acc_307_acc_l_lane_distance_fus_encode(calc_ecu_ACC_307_ACC_LLaneDistanceFus());
	g_ecu_acc_307.acc_r_lane_distance_fus = ecu_acc_307_acc_r_lane_distance_fus_encode(calc_ecu_ACC_307_ACC_RLaneDistanceFus());
	g_ecu_acc_307.acc_vehicle_start_remind_sts = ecu_acc_307_acc_vehicle_start_remind_sts_encode(calc_ecu_ACC_307_ACC_VehicleStartRemindSts());
	ECU_ACC_307_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_312 (u8_t Direction)
{
	g_ecu_acc_312.acc_selflearning_status = ecu_acc_312_acc_selflearning_status_encode(calc_ecu_ACC_312_ACC_Selflearning_status());
	g_ecu_acc_312.acc_aeb_target_prob = ecu_acc_312_acc_aeb_target_prob_encode(calc_ecu_ACC_312_ACC_AEBTargetProb());
	g_ecu_acc_312.acc_aeb_target_direction = ecu_acc_312_acc_aeb_target_direction_encode(calc_ecu_ACC_312_ACC_AEBTargetDirection());
	g_ecu_acc_312.acc_aeb_target_detection = ecu_acc_312_acc_aeb_target_detection_encode(calc_ecu_ACC_312_ACC_AEBTargetDetection());
	g_ecu_acc_312.acc_aeb_target_type = ecu_acc_312_acc_aeb_target_type_encode(calc_ecu_ACC_312_ACC_AEBTargetType());
	g_ecu_acc_312.acc_rolling_counter_3_e4 = ecu_acc_312_acc_rolling_counter_3_e4_encode(calc_ecu_ACC_312_ACC_RollingCounter_3E4());
	g_ecu_acc_312.acc_crc_check_3_e4 = ecu_acc_312_acc_crc_check_3_e4_encode(calc_ecu_ACC_312_ACC_CRCCheck_3E4());
	g_ecu_acc_312.ads_eom_warnning = ecu_acc_312_ads_eom_warnning_encode(calc_ecu_ACC_312_ADS_EOMWarnning());
	g_ecu_acc_312.ads_ads_voice_request = ecu_acc_312_ads_ads_voice_request_encode(calc_ecu_ACC_312_ADS_ADSVoiceRequest());
	g_ecu_acc_312.ads_nda_audio_war_enable_status = ecu_acc_312_ads_nda_audio_war_enable_status_encode(calc_ecu_ACC_312_ADS_NDAAudioWarEnableStatus());
	g_ecu_acc_312.acc_driver_window_control = ecu_acc_312_acc_driver_window_control_encode(calc_ecu_ACC_312_ACC_DriverWindowControl());
	g_ecu_acc_312.acc_selflearning_angle = ecu_acc_312_acc_selflearning_angle_encode(calc_ecu_ACC_312_ACC_Selflearning_angle());
	g_ecu_acc_312.ads_rolling_counter_3_d7 = ecu_acc_312_ads_rolling_counter_3_d7_encode(calc_ecu_ACC_312_ADS_RollingCounter_3D7());
	g_ecu_acc_312.ads_crc_check_3_d7 = ecu_acc_312_ads_crc_check_3_d7_encode(calc_ecu_ACC_312_ADS_CRCCheck_3D7());
	g_ecu_acc_312.acc_aeb_target_ax = ecu_acc_312_acc_aeb_target_ax_encode(calc_ecu_ACC_312_ACC_AEBTargetAx());
	g_ecu_acc_312.acc_aeb_target_four_wheel_prob = ecu_acc_312_acc_aeb_target_four_wheel_prob_encode(calc_ecu_ACC_312_ACC_AEBTargetFourWheelProb());
	ECU_ACC_312_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_340 (u8_t Direction)
{
	g_ecu_gw_340.ac_fr_blow_type = ecu_gw_340_ac_fr_blow_type_encode(calc_ecu_GW_340_AC_FrBlowType());
	g_ecu_gw_340.ac_pr_air_merge_port_opening_ratio_vd = ecu_gw_340_ac_pr_air_merge_port_opening_ratio_vd_encode(calc_ecu_GW_340_AC_PrAirMergePortOpeningRatioVD());
	g_ecu_gw_340.ac_rr_req_wind_level = ecu_gw_340_ac_rr_req_wind_level_encode(calc_ecu_GW_340_AC_RrReqWindLevel());
	g_ecu_gw_340.ac_rr_air_merge_port_opening_ratio_vd = ecu_gw_340_ac_rr_air_merge_port_opening_ratio_vd_encode(calc_ecu_GW_340_AC_RrAirMergePortOpeningRatioVD());
	g_ecu_gw_340.ac_rr_air_merge_port_opening_ratio = ecu_gw_340_ac_rr_air_merge_port_opening_ratio_encode(calc_ecu_GW_340_AC_RrAirMergePortOpeningRatio());
	g_ecu_gw_340.ac_rr_req_wind_level_vd = ecu_gw_340_ac_rr_req_wind_level_vd_encode(calc_ecu_GW_340_AC_RrReqWindLevelVD());
	g_ecu_gw_340.ac_dr_air_merge_port_opening_ratio = ecu_gw_340_ac_dr_air_merge_port_opening_ratio_encode(calc_ecu_GW_340_AC_DrAirMergePortOpeningRatio());
	g_ecu_gw_340.ac_pr_air_merge_port_opening_ratio = ecu_gw_340_ac_pr_air_merge_port_opening_ratio_encode(calc_ecu_GW_340_AC_PrAirMergePortOpeningRatio());
	g_ecu_gw_340.ac_dr_air_merge_port_opening_ratio_vd = ecu_gw_340_ac_dr_air_merge_port_opening_ratio_vd_encode(calc_ecu_GW_340_AC_DrAirMergePortOpeningRatioVD());
	g_ecu_gw_340.ac_ac_on_off = ecu_gw_340_ac_ac_on_off_encode(calc_ecu_GW_340_AC_ACOnOff());
	g_ecu_gw_340.ac_evaporator_temp = ecu_gw_340_ac_evaporator_temp_encode(calc_ecu_GW_340_AC_EvaporatorTemp());
	ECU_GW_340_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_347 (u8_t Direction)
{
	g_ecu_gw_347.tpms_signal_status = ecu_gw_347_tpms_signal_status_encode(calc_ecu_GW_347_TPMS_SignalStatus());
	g_ecu_gw_347.bcm_tire_presure_signal_status = ecu_gw_347_bcm_tire_presure_signal_status_encode(calc_ecu_GW_347_BCM_TirePresureSignalStatus());
	g_ecu_gw_347.tpms_rf_pressure_warning = ecu_gw_347_tpms_rf_pressure_warning_encode(calc_ecu_GW_347_TPMS_RFPressureWarning());
	g_ecu_gw_347.tpms_lr_pressure_warning = ecu_gw_347_tpms_lr_pressure_warning_encode(calc_ecu_GW_347_TPMS_LRPressureWarning());
	g_ecu_gw_347.tpms_lf_tyre_pressure = ecu_gw_347_tpms_lf_tyre_pressure_encode(calc_ecu_GW_347_TPMS_LFTyrePressure());
	g_ecu_gw_347.tpms_rf_tyre_pressure = ecu_gw_347_tpms_rf_tyre_pressure_encode(calc_ecu_GW_347_TPMS_RFTyrePressure());
	g_ecu_gw_347.tpms_rr_tyre_pressure = ecu_gw_347_tpms_rr_tyre_pressure_encode(calc_ecu_GW_347_TPMS_RRTyrePressure());
	g_ecu_gw_347.tpms_lr_tyre_pressure = ecu_gw_347_tpms_lr_tyre_pressure_encode(calc_ecu_GW_347_TPMS_LRTyrePressure());
	g_ecu_gw_347.tpms_rr_pressure_warning = ecu_gw_347_tpms_rr_pressure_warning_encode(calc_ecu_GW_347_TPMS_RRPressureWarning());
	g_ecu_gw_347.tpms_lf_pressure_warning = ecu_gw_347_tpms_lf_pressure_warning_encode(calc_ecu_GW_347_TPMS_LFPressureWarning());
	g_ecu_gw_347.tpms_system_failure_warning = ecu_gw_347_tpms_system_failure_warning_encode(calc_ecu_GW_347_TPMS_SystemFailureWarning());
	g_ecu_gw_347.bcm_rolling_counter_347 = ecu_gw_347_bcm_rolling_counter_347_encode(calc_ecu_GW_347_BCM_RollingCounter_347());
	g_ecu_gw_347.bcm_crc_check_347 = ecu_gw_347_bcm_crc_check_347_encode(calc_ecu_GW_347_BCM_CRCCheck_347());
	ECU_GW_347_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_365 (u8_t Direction)
{
	g_ecu_gw_365.ims_distraction_status = ecu_gw_365_ims_distraction_status_encode(calc_ecu_GW_365_IMS_DistractionStatus());
	g_ecu_gw_365.ims_driver_head_detect = ecu_gw_365_ims_driver_head_detect_encode(calc_ecu_GW_365_IMS_DriverHeadDetect());
	g_ecu_gw_365.ims_drowsiness_status = ecu_gw_365_ims_drowsiness_status_encode(calc_ecu_GW_365_IMS_DrowsinessStatus());
	g_ecu_gw_365.ims_ims_status = ecu_gw_365_ims_ims_status_encode(calc_ecu_GW_365_IMS_IMSStatus());
	g_ecu_gw_365.ims_eye_detect_satus = ecu_gw_365_ims_eye_detect_satus_encode(calc_ecu_GW_365_IMS_EyeDetectSatus());
	g_ecu_gw_365.ims_eye_gaze_status = ecu_gw_365_ims_eye_gaze_status_encode(calc_ecu_GW_365_IMS_EyeGazeStatus());
	g_ecu_gw_365.ims_driver_eye_detect = ecu_gw_365_ims_driver_eye_detect_encode(calc_ecu_GW_365_IMS_DriverEyeDetect());
	g_ecu_gw_365.ims_driver_eye_closestatus = ecu_gw_365_ims_driver_eye_closestatus_encode(calc_ecu_GW_365_IMS_DriverEyeClosestatus());
	g_ecu_gw_365.ims_phone_call_sts = ecu_gw_365_ims_phone_call_sts_encode(calc_ecu_GW_365_IMS_PhoneCallSts());
	g_ecu_gw_365.ims_driver_eyes_fov_area = ecu_gw_365_ims_driver_eyes_fov_area_encode(calc_ecu_GW_365_IMS_DriverEyesFovArea());
	g_ecu_gw_365.ims_driver_eye_confidence = ecu_gw_365_ims_driver_eye_confidence_encode(calc_ecu_GW_365_IMS_DriverEyeConfidence());
	g_ecu_gw_365.ims_rolling_counter_356 = ecu_gw_365_ims_rolling_counter_356_encode(calc_ecu_GW_365_IMS_RollingCounter_356());
	g_ecu_gw_365.ims_crc_check_356 = ecu_gw_365_ims_crc_check_356_encode(calc_ecu_GW_365_IMS_CRCCheck_356());
	g_ecu_gw_365.ims_head_detect_sts_pitch = ecu_gw_365_ims_head_detect_sts_pitch_encode(calc_ecu_GW_365_IMS_HeadDetectSts_Pitch());
	g_ecu_gw_365.ims_head_detect_sts_roll = ecu_gw_365_ims_head_detect_sts_roll_encode(calc_ecu_GW_365_IMS_HeadDetectSts_Roll());
	g_ecu_gw_365.ims_head_detect_sts_yaw = ecu_gw_365_ims_head_detect_sts_yaw_encode(calc_ecu_GW_365_IMS_HeadDetectSts_Yaw());
	g_ecu_gw_365.ims_brow_offset_value = ecu_gw_365_ims_brow_offset_value_encode(calc_ecu_GW_365_IMS_BrowOffsetValue());
	g_ecu_gw_365.ims_jaw_offset_value = ecu_gw_365_ims_jaw_offset_value_encode(calc_ecu_GW_365_IMS_JawOffsetValue());
	g_ecu_gw_365.ims_rolling_counter_360 = ecu_gw_365_ims_rolling_counter_360_encode(calc_ecu_GW_365_IMS_RollingCounter_360());
	g_ecu_gw_365.ims_crc_check_360 = ecu_gw_365_ims_crc_check_360_encode(calc_ecu_GW_365_IMS_CRCCheck_360());
	g_ecu_gw_365.ims_driver_id = ecu_gw_365_ims_driver_id_encode(calc_ecu_GW_365_IMS_DriverID());
	g_ecu_gw_365.ims_id_update_remind = ecu_gw_365_ims_id_update_remind_encode(calc_ecu_GW_365_IMS_IDUpdateRemind());
	g_ecu_gw_365.ims_drowsiness_warning = ecu_gw_365_ims_drowsiness_warning_encode(calc_ecu_GW_365_IMS_DrowsinessWarning());
	g_ecu_gw_365.ims_drowsiness_sens_fb = ecu_gw_365_ims_drowsiness_sens_fb_encode(calc_ecu_GW_365_IMS_DrowsinessSensFb());
	g_ecu_gw_365.ims_drowsiness_set_fb = ecu_gw_365_ims_drowsiness_set_fb_encode(calc_ecu_GW_365_IMS_DrowsinessSetFb());
	g_ecu_gw_365.ims_distraction_set_fb = ecu_gw_365_ims_distraction_set_fb_encode(calc_ecu_GW_365_IMS_DistractionSetFb());
	g_ecu_gw_365.ims_distraction_warning = ecu_gw_365_ims_distraction_warning_encode(calc_ecu_GW_365_IMS_DistractionWarning());
	g_ecu_gw_365.dms_xlocation_eye = ecu_gw_365_dms_xlocation_eye_encode(calc_ecu_GW_365_DMS_Xlocation_eye());
	g_ecu_gw_365.dms_ylocation_eye = ecu_gw_365_dms_ylocation_eye_encode(calc_ecu_GW_365_DMS_Ylocation_eye());
	g_ecu_gw_365.dms_zlocation_eye = ecu_gw_365_dms_zlocation_eye_encode(calc_ecu_GW_365_DMS_Zlocation_eye());
	g_ecu_gw_365.ims_rolling_counter_3_a7 = ecu_gw_365_ims_rolling_counter_3_a7_encode(calc_ecu_GW_365_IMS_RollingCounter_3A7());
	g_ecu_gw_365.ims_crc_check_3_a7 = ecu_gw_365_ims_crc_check_3_a7_encode(calc_ecu_GW_365_IMS_CRCCheck_3A7());
	ECU_GW_365_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_366 (u8_t Direction)
{
	g_ecu_gw_366.ac_work_sts = ecu_gw_366_ac_work_sts_encode(calc_ecu_GW_366_AC_WorkSts());
	g_ecu_gw_366.ac_fr_req_wind_level_vd = ecu_gw_366_ac_fr_req_wind_level_vd_encode(calc_ecu_GW_366_AC_FrReqWindLevelVD());
	g_ecu_gw_366.ac_ptc_status = ecu_gw_366_ac_ptc_status_encode(calc_ecu_GW_366_AC_PTCStatus());
	g_ecu_gw_366.ac_environmental_temp_vd = ecu_gw_366_ac_environmental_temp_vd_encode(calc_ecu_GW_366_AC_EnvironmentalTempVD());
	g_ecu_gw_366.ac_environmental_temp = ecu_gw_366_ac_environmental_temp_encode(calc_ecu_GW_366_AC_EnvironmentalTemp());
	g_ecu_gw_366.ac_fr_req_wind_level = ecu_gw_366_ac_fr_req_wind_level_encode(calc_ecu_GW_366_AC_FrReqWindLevel());
	g_ecu_gw_366.ac_ac_pre = ecu_gw_366_ac_ac_pre_encode(calc_ecu_GW_366_AC_ACPre());
	g_ecu_gw_366.ac_ac_req = ecu_gw_366_ac_ac_req_encode(calc_ecu_GW_366_AC_AC_Req());
	g_ecu_gw_366.ac_ac_req_valid = ecu_gw_366_ac_ac_req_valid_encode(calc_ecu_GW_366_AC_AC_ReqValid());
	ECU_GW_366_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_387 (u8_t Direction)
{
	g_ecu_gw_387.bcm_drive_mode_feedback = ecu_gw_387_bcm_drive_mode_feedback_encode(calc_ecu_GW_387_BCM_DriveModeFeedback());
	g_ecu_gw_387.bcm_drive_mode_status = ecu_gw_387_bcm_drive_mode_status_encode(calc_ecu_GW_387_BCM_DriveModeStatus());
	g_ecu_gw_387.bcm_ble_key_indicator = ecu_gw_387_bcm_ble_key_indicator_encode(calc_ecu_GW_387_BCM_BLEKeyIndicator());
	g_ecu_gw_387.bcm_driving_mode_memory_status = ecu_gw_387_bcm_driving_mode_memory_status_encode(calc_ecu_GW_387_BCM_DrivingModeMemoryStatus());
	g_ecu_gw_387.bcm_drive_mode_set = ecu_gw_387_bcm_drive_mode_set_encode(calc_ecu_GW_387_BCM_DriveModeSet());
	g_ecu_gw_387.bcm_welcome_light_mode_fb = ecu_gw_387_bcm_welcome_light_mode_fb_encode(calc_ecu_GW_387_BCM_WelcomeLightModeFB());
	g_ecu_gw_387.bcm_rainfall_level = ecu_gw_387_bcm_rainfall_level_encode(calc_ecu_GW_387_BCM_RainfallLevel());
	g_ecu_gw_387.bcm_eps_torque_mode_feedback = ecu_gw_387_bcm_eps_torque_mode_feedback_encode(calc_ecu_GW_387_BCM_EPSTorqueModeFeedback());
	g_ecu_gw_387.bcm_theme_change_set = ecu_gw_387_bcm_theme_change_set_encode(calc_ecu_GW_387_BCM_ThemeChangeSet());
	g_ecu_gw_387.bcm_front_wash_status = ecu_gw_387_bcm_front_wash_status_encode(calc_ecu_GW_387_BCM_FrontWashStatus());
	g_ecu_gw_387.bcm_front_wiper_status = ecu_gw_387_bcm_front_wiper_status_encode(calc_ecu_GW_387_BCM_FrontWiperStatus());
	g_ecu_gw_387.bcm_rls_light_switch_reason = ecu_gw_387_bcm_rls_light_switch_reason_encode(calc_ecu_GW_387_BCM_RLS_Light_switch_reason());
	g_ecu_gw_387.bcm_buzzer_warning_mode = ecu_gw_387_bcm_buzzer_warning_mode_encode(calc_ecu_GW_387_BCM_BuzzerWarningMode());
	g_ecu_gw_387.bcm_light_sensor = ecu_gw_387_bcm_light_sensor_encode(calc_ecu_GW_387_BCM_LightSensor());
	g_ecu_gw_387.bcm_statusrainsensor = ecu_gw_387_bcm_statusrainsensor_encode(calc_ecu_GW_387_BCM_Statusrainsensor());
	g_ecu_gw_387.bcm_statuslowbeam = ecu_gw_387_bcm_statuslowbeam_encode(calc_ecu_GW_387_BCM_Statuslowbeam());
	g_ecu_gw_387.bcm_system_failure_flag = ecu_gw_387_bcm_system_failure_flag_encode(calc_ecu_GW_387_BCM_SystemFailureFlag());
	g_ecu_gw_387.bcm_rear_wiper_status = ecu_gw_387_bcm_rear_wiper_status_encode(calc_ecu_GW_387_BCM_RearWiperStatus());
	g_ecu_gw_387.bcm_save_energy_set_status = ecu_gw_387_bcm_save_energy_set_status_encode(calc_ecu_GW_387_BCM_SaveEnergySetStatus());
	g_ecu_gw_387.bcm_rolling_counter_387 = ecu_gw_387_bcm_rolling_counter_387_encode(calc_ecu_GW_387_BCM_RollingCounter_387());
	g_ecu_gw_387.bcm_crc_check_387 = ecu_gw_387_bcm_crc_check_387_encode(calc_ecu_GW_387_BCM_CRCCheck_387());
	ECU_GW_387_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_390 (u8_t Direction)
{
	g_ecu_gw_390.bcm_pms_level = ecu_gw_390_bcm_pms_level_encode(calc_ecu_GW_390_BCM_PMSLevel());
	g_ecu_gw_390.bcm_low_power_warning = ecu_gw_390_bcm_low_power_warning_encode(calc_ecu_GW_390_BCM_LowPowerWarning());
	g_ecu_gw_390.bcm_soh_life_percent = ecu_gw_390_bcm_soh_life_percent_encode(calc_ecu_GW_390_BCM_SOH_LifePercent());
	g_ecu_gw_390.bcm_bsn_level = ecu_gw_390_bcm_bsn_level_encode(calc_ecu_GW_390_BCM_BSNLevel());
	ECU_GW_390_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_396 (u8_t Direction)
{
	g_ecu_gw_396.bcm_sunroof_pos_vit = ecu_gw_396_bcm_sunroof_pos_vit_encode(calc_ecu_GW_396_BCM_Sunroof_POS_VIT());
	g_ecu_gw_396.bcm_sunroof_status = ecu_gw_396_bcm_sunroof_status_encode(calc_ecu_GW_396_BCM_SunroofStatus());
	g_ecu_gw_396.bcm_sunshade_pos_vit_fl = ecu_gw_396_bcm_sunshade_pos_vit_fl_encode(calc_ecu_GW_396_BCM_Sunshade_POS_VIT_FL());
	g_ecu_gw_396.bcm_sunroof_pos_direction = ecu_gw_396_bcm_sunroof_pos_direction_encode(calc_ecu_GW_396_BCM_Sunroof_POS_Direction());
	g_ecu_gw_396.bcm_sunroof_rain_set_status = ecu_gw_396_bcm_sunroof_rain_set_status_encode(calc_ecu_GW_396_BCM_SunroofRainSetStatus());
	g_ecu_gw_396.bcm_sunshade_movement = ecu_gw_396_bcm_sunshade_movement_encode(calc_ecu_GW_396_BCM_Sunshade_Movement());
	g_ecu_gw_396.bcm_sunroof_movement = ecu_gw_396_bcm_sunroof_movement_encode(calc_ecu_GW_396_BCM_Sunroof_Movement());
	g_ecu_gw_396.bcm_lock_auto_cls_win_set_status = ecu_gw_396_bcm_lock_auto_cls_win_set_status_encode(calc_ecu_GW_396_BCM_LockAutoClsWinSetStatus());
	g_ecu_gw_396.bcm_sunroof_motor = ecu_gw_396_bcm_sunroof_motor_encode(calc_ecu_GW_396_BCM_SunroofMotor());
	g_ecu_gw_396.bcm_remote_window_control = ecu_gw_396_bcm_remote_window_control_encode(calc_ecu_GW_396_BCM_RemoteWindowControl());
	g_ecu_gw_396.bcm_win_open_warn = ecu_gw_396_bcm_win_open_warn_encode(calc_ecu_GW_396_BCM_WinOpenWarn());
	g_ecu_gw_396.bcm_win_down_cfg_sts = ecu_gw_396_bcm_win_down_cfg_sts_encode(calc_ecu_GW_396_BCM_WinDownCfgSts());
	g_ecu_gw_396.bcm_win_up_cfg_sts = ecu_gw_396_bcm_win_up_cfg_sts_encode(calc_ecu_GW_396_BCM_WinUpCfgSts());
	g_ecu_gw_396.bcm_remote_window_up_set_staus = ecu_gw_396_bcm_remote_window_up_set_staus_encode(calc_ecu_GW_396_BCM_RemoteWindowUpSetStaus());
	g_ecu_gw_396.bcm_remote_window_down_set_staus = ecu_gw_396_bcm_remote_window_down_set_staus_encode(calc_ecu_GW_396_BCM_RemoteWindowDownSetStaus());
	g_ecu_gw_396.bcm_auto_close_window = ecu_gw_396_bcm_auto_close_window_encode(calc_ecu_GW_396_BCM_AutoCloseWindow());
	g_ecu_gw_396.bcm_aeration_hint_req = ecu_gw_396_bcm_aeration_hint_req_encode(calc_ecu_GW_396_BCM_AerationHintReq());
	g_ecu_gw_396.bcm_sunroof_ap_active = ecu_gw_396_bcm_sunroof_ap_active_encode(calc_ecu_GW_396_BCM_Sunroof_APActive());
	g_ecu_gw_396.peps_remote_window_up_signal = ecu_gw_396_peps_remote_window_up_signal_encode(calc_ecu_GW_396_PEPS_RemoteWindowUpSignal());
	g_ecu_gw_396.peps_remote_window_down_signal = ecu_gw_396_peps_remote_window_down_signal_encode(calc_ecu_GW_396_PEPS_RemoteWindowDownSignal());
	g_ecu_gw_396.bcm_sunroof_intialized = ecu_gw_396_bcm_sunroof_intialized_encode(calc_ecu_GW_396_BCM_Sunroof_Intialized());
	ECU_GW_396_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_507 (u8_t Direction)
{
	g_ecu_gw_507.hu_parking_mode_select = ecu_gw_507_hu_parking_mode_select_encode(calc_ecu_GW_507_HU_ParkingModeSelect());
	g_ecu_gw_507.hu_las_mode_selection = ecu_gw_507_hu_las_mode_selection_encode(calc_ecu_GW_507_HU_LASModeSelection());
	g_ecu_gw_507.hu_fcta_enable = ecu_gw_507_hu_fcta_enable_encode(calc_ecu_GW_507_HU_FCTAEnable());
	g_ecu_gw_507.hu_rcta_enable = ecu_gw_507_hu_rcta_enable_encode(calc_ecu_GW_507_HU_RCTAEnable());
	g_ecu_gw_507.hu_rcw_enable = ecu_gw_507_hu_rcw_enable_encode(calc_ecu_GW_507_HU_RCWEnable());
	g_ecu_gw_507.hu_tsr_switch = ecu_gw_507_hu_tsr_switch_encode(calc_ecu_GW_507_HU_TSRSwitch());
	g_ecu_gw_507.hu_las_warning_mode_selection = ecu_gw_507_hu_las_warning_mode_selection_encode(calc_ecu_GW_507_HU_LASWarningModeSelection());
	g_ecu_gw_507.hu_ldw_shake_lev = ecu_gw_507_hu_ldw_shake_lev_encode(calc_ecu_GW_507_HU_LDWShakeLev());
	g_ecu_gw_507.hu_fatigue_dection_enable = ecu_gw_507_hu_fatigue_dection_enable_encode(calc_ecu_GW_507_HU_FatigueDectionEnable());
	g_ecu_gw_507.hu_rctb_enable = ecu_gw_507_hu_rctb_enable_encode(calc_ecu_GW_507_HU_RCTBEnable());
	g_ecu_gw_507.hu_sea_enable = ecu_gw_507_hu_sea_enable_encode(calc_ecu_GW_507_HU_SEAEnable());
	g_ecu_gw_507.hu_overspeed_sound_war_enable = ecu_gw_507_hu_overspeed_sound_war_enable_encode(calc_ecu_GW_507_HU_OverspeedSoundWarEnable());
	g_ecu_gw_507.hu_iacc_enable = ecu_gw_507_hu_iacc_enable_encode(calc_ecu_GW_507_HU_IACCEnable());
	g_ecu_gw_507.hu_lock_ctrl_enable = ecu_gw_507_hu_lock_ctrl_enable_encode(calc_ecu_GW_507_HU_LockCtrlEnable());
	g_ecu_gw_507.hu_audio_warning_enable = ecu_gw_507_hu_audio_warning_enable_encode(calc_ecu_GW_507_HU_AudioWarningEnable());
	g_ecu_gw_507.hu_hzp_recomend_res = ecu_gw_507_hu_hzp_recomend_res_encode(calc_ecu_GW_507_HU_HZPRecomendRes());
	g_ecu_gw_507.hu_overspeed_warning_enable = ecu_gw_507_hu_overspeed_warning_enable_encode(calc_ecu_GW_507_HU_OverspeedWarningEnable());
	g_ecu_gw_507.hu_hzp_on_off = ecu_gw_507_hu_hzp_on_off_encode(calc_ecu_GW_507_HU_HZPOnOff());
	g_ecu_gw_507.hu_parking_resume = ecu_gw_507_hu_parking_resume_encode(calc_ecu_GW_507_HU_ParkingResume());
	g_ecu_gw_507.hu_uls_fkp_activation = ecu_gw_507_hu_uls_fkp_activation_encode(calc_ecu_GW_507_HU_Uls_FKP_Activation());
	g_ecu_gw_507.hu_fctb_enable = ecu_gw_507_hu_fctb_enable_encode(calc_ecu_GW_507_HU_FCTBEnable());
	g_ecu_gw_507.hu_uls_bsd_activation = ecu_gw_507_hu_uls_bsd_activation_encode(calc_ecu_GW_507_HU_Uls_BSD_Activation());
	g_ecu_gw_507.hu_parking_confirm = ecu_gw_507_hu_parking_confirm_encode(calc_ecu_GW_507_HU_ParkingConfirm());
	g_ecu_gw_507.hu_remote_distance_set = ecu_gw_507_hu_remote_distance_set_encode(calc_ecu_GW_507_HU_RemoteDistanceSet());
	g_ecu_gw_507.hu_tjp_enable = ecu_gw_507_hu_tjp_enable_encode(calc_ecu_GW_507_HU_TJPEnable());
	g_ecu_gw_507.hu_slot_voice_select = ecu_gw_507_hu_slot_voice_select_encode(calc_ecu_GW_507_HU_SlotVoiceSelect());
	g_ecu_gw_507.hu_obstacle_safe_distance_set = ecu_gw_507_hu_obstacle_safe_distance_set_encode(calc_ecu_GW_507_HU_ObstacleSafeDistanceSet());
	g_ecu_gw_507.hu_dvr_replay_command = ecu_gw_507_hu_dvr_replay_command_encode(calc_ecu_GW_507_HU_DVRReplayCommand());
	g_ecu_gw_507.hu_recordingcycle_setting = ecu_gw_507_hu_recordingcycle_setting_encode(calc_ecu_GW_507_HU_RecordingcycleSetting());
	g_ecu_gw_507.hu_dvr_format_req = ecu_gw_507_hu_dvr_format_req_encode(calc_ecu_GW_507_HU_DVRFormatReq());
	g_ecu_gw_507.hu_top_look_down_switch = ecu_gw_507_hu_top_look_down_switch_encode(calc_ecu_GW_507_HU_TopLookDownSwitch());
	g_ecu_gw_507.hu_dvr_vedio_seek = ecu_gw_507_hu_dvr_vedio_seek_encode(calc_ecu_GW_507_HU_DVRVedioSeek());
	g_ecu_gw_507.hu_hma_enable = ecu_gw_507_hu_hma_enable_encode(calc_ecu_GW_507_HU_HMAEnable());
	g_ecu_gw_507.hu_avm_calibration_confirm = ecu_gw_507_hu_avm_calibration_confirm_encode(calc_ecu_GW_507_HU_AVMCalibrationConfirm());
	g_ecu_gw_507.hu_dvr_print_screen = ecu_gw_507_hu_dvr_print_screen_encode(calc_ecu_GW_507_HU_DVRPrintScreen());
	g_ecu_gw_507.hu_dvr_replay_speed = ecu_gw_507_hu_dvr_replay_speed_encode(calc_ecu_GW_507_HU_DVRReplaySpeed());
	g_ecu_gw_507.hu_dvr_enable_set = ecu_gw_507_hu_dvr_enable_set_encode(calc_ecu_GW_507_HU_DVREnableSet());
	g_ecu_gw_507.hu_dvr_tape_set = ecu_gw_507_hu_dvr_tape_set_encode(calc_ecu_GW_507_HU_DVRTapeSet());
	g_ecu_gw_507.hu_language_set = ecu_gw_507_hu_language_set_encode(calc_ecu_GW_507_HU_LanguageSet());
	g_ecu_gw_507.hu_turn_light_avm_switch = ecu_gw_507_hu_turn_light_avm_switch_encode(calc_ecu_GW_507_HU_TurnLightAVMSwitch());
	g_ecu_gw_507.hu_radar_avm_switch = ecu_gw_507_hu_radar_avm_switch_encode(calc_ecu_GW_507_HU_RadarAVMSwitch());
	g_ecu_gw_507.hu_dvr_replay_mode = ecu_gw_507_hu_dvr_replay_mode_encode(calc_ecu_GW_507_HU_DVRReplayMode());
	g_ecu_gw_507.hu_resolution_set = ecu_gw_507_hu_resolution_set_encode(calc_ecu_GW_507_HU_ResolutionSet());
	g_ecu_gw_507.hu_dvr_distort_correct_switch = ecu_gw_507_hu_dvr_distort_correct_switch_encode(calc_ecu_GW_507_HU_DVRDistortCorrectSwitch());
	g_ecu_gw_507.hu_dvr_video_play_user_time = ecu_gw_507_hu_dvr_video_play_user_time_encode(calc_ecu_GW_507_HU_DVRVideoPlayUserTime());
	g_ecu_gw_507.hu_avm_calibration_switch = ecu_gw_507_hu_avm_calibration_switch_encode(calc_ecu_GW_507_HU_AVMCalibrationSwitch());
	g_ecu_gw_507.hu_mod_enable = ecu_gw_507_hu_mod_enable_encode(calc_ecu_GW_507_HU_MODEnable());
	g_ecu_gw_507.hu_dvr_emergency_record = ecu_gw_507_hu_dvr_emergency_record_encode(calc_ecu_GW_507_HU_DVREmergencyRecord());
	g_ecu_gw_507.hu_ramp_avm_switch = ecu_gw_507_hu_ramp_avm_switch_encode(calc_ecu_GW_507_HU_RampAVMSwitch());
	g_ecu_gw_507.hu_dvr_browse_command = ecu_gw_507_hu_dvr_browse_command_encode(calc_ecu_GW_507_HU_DVRBrowseCommand());
	g_ecu_gw_507.hu_shoot_control = ecu_gw_507_hu_shoot_control_encode(calc_ecu_GW_507_HU_ShootControl());
	g_ecu_gw_507.hu_transparent_car_switch = ecu_gw_507_hu_transparent_car_switch_encode(calc_ecu_GW_507_HU_TransparentCarSwitch());
	g_ecu_gw_507.hu_cruise_control_set = ecu_gw_507_hu_cruise_control_set_encode(calc_ecu_GW_507_HU_CruiseControlSet());
	g_ecu_gw_507.hu_auto_brake_enable = ecu_gw_507_hu_auto_brake_enable_encode(calc_ecu_GW_507_HU_AutoBrakeEnable());
	g_ecu_gw_507.hu_park_voice_int_set_status = ecu_gw_507_hu_park_voice_int_set_status_encode(calc_ecu_GW_507_HU_ParkVoiceIntSetStatus());
	g_ecu_gw_507.hu_acc_obj_enable = ecu_gw_507_hu_acc_obj_enable_encode(calc_ecu_GW_507_HU_ACCObjEnable());
	g_ecu_gw_507.hu_vc_cruise_set_distance = ecu_gw_507_hu_vc_cruise_set_distance_encode(calc_ecu_GW_507_HU_VC_CruiseSetDistance());
	g_ecu_gw_507.hu_vc_cruise_control = ecu_gw_507_hu_vc_cruise_control_encode(calc_ecu_GW_507_HU_VC_CruiseControl());
	g_ecu_gw_507.hu_vc_cruise_set_speed = ecu_gw_507_hu_vc_cruise_set_speed_encode(calc_ecu_GW_507_HU_VC_CruiseSetSpeed());
	g_ecu_gw_507.hu_tutorialmodel = ecu_gw_507_hu_tutorialmodel_encode(calc_ecu_GW_507_HU_Tutorialmodel());
	g_ecu_gw_507.hu_front_radar_active = ecu_gw_507_hu_front_radar_active_encode(calc_ecu_GW_507_HU_FrontRadarActive());
	g_ecu_gw_507.hu_apa_active3 = ecu_gw_507_hu_apa_active3_encode(calc_ecu_GW_507_HU_APAActive3());
	g_ecu_gw_507.hu_apa_active2 = ecu_gw_507_hu_apa_active2_encode(calc_ecu_GW_507_HU_APAActive2());
	g_ecu_gw_507.hu_nda_enable = ecu_gw_507_hu_nda_enable_encode(calc_ecu_GW_507_HU_NDAEnable());
	g_ecu_gw_507.hu_fcw_setting = ecu_gw_507_hu_fcw_setting_encode(calc_ecu_GW_507_HU_FCWSetting());
	g_ecu_gw_507.hu_bsdlca_setting = ecu_gw_507_hu_bsdlca_setting_encode(calc_ecu_GW_507_HU_BSDLCASetting());
	g_ecu_gw_507.hu_full_speed_panoramic_select = ecu_gw_507_hu_full_speed_panoramic_select_encode(calc_ecu_GW_507_HU_FullSpeedPanoramicSelect());
	g_ecu_gw_507.hu_door_open_warning_select = ecu_gw_507_hu_door_open_warning_select_encode(calc_ecu_GW_507_HU_DoorOpenWarningSelect());
	g_ecu_gw_507.hu_nda_audio_war_enable = ecu_gw_507_hu_nda_audio_war_enable_encode(calc_ecu_GW_507_HU_NDAAudioWarEnable());
	g_ecu_gw_507.hu_nda_nav_enable = ecu_gw_507_hu_nda_nav_enable_encode(calc_ecu_GW_507_HU_NDANavEnable());
	g_ecu_gw_507.hu_nda_set_spd_mode = ecu_gw_507_hu_nda_set_spd_mode_encode(calc_ecu_GW_507_HU_NDASetSpdMode());
	g_ecu_gw_507.hu_overspeed_warning_offset = ecu_gw_507_hu_overspeed_warning_offset_encode(calc_ecu_GW_507_HU_OverspeedWarningOffset());
	g_ecu_gw_507.hu_lane_change_style = ecu_gw_507_hu_lane_change_style_encode(calc_ecu_GW_507_HU_LaneChangeStyle());
	ECU_GW_507_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_516 (u8_t Direction)
{
	g_ecu_gw_516.hu_current_location_valid = ecu_gw_516_hu_current_location_valid_encode(calc_ecu_GW_516_HU_CurrentLocationValid());
	g_ecu_gw_516.hu_current_location_longitude = ecu_gw_516_hu_current_location_longitude_encode(calc_ecu_GW_516_HU_CurrentLocationLongitude());
	g_ecu_gw_516.hu_current_location_latitude = ecu_gw_516_hu_current_location_latitude_encode(calc_ecu_GW_516_HU_CurrentLocationLatitude());
	g_ecu_gw_516.hu_local_time_valid = ecu_gw_516_hu_local_time_valid_encode(calc_ecu_GW_516_HU_LocalTimeValid());
	g_ecu_gw_516.hu_air_humidity = ecu_gw_516_hu_air_humidity_encode(calc_ecu_GW_516_HU_AirHumidity());
	g_ecu_gw_516.hu_local_time_month = ecu_gw_516_hu_local_time_month_encode(calc_ecu_GW_516_HU_LocalTimeMonth());
	g_ecu_gw_516.hu_air_humidity_valid = ecu_gw_516_hu_air_humidity_valid_encode(calc_ecu_GW_516_HU_AirHumidityValid());
	g_ecu_gw_516.hu_local_time_date = ecu_gw_516_hu_local_time_date_encode(calc_ecu_GW_516_HU_LocalTimeDate());
	g_ecu_gw_516.hu_local_time_hour = ecu_gw_516_hu_local_time_hour_encode(calc_ecu_GW_516_HU_LocalTimeHour());
	g_ecu_gw_516.hu_local_time_minute = ecu_gw_516_hu_local_time_minute_encode(calc_ecu_GW_516_HU_LocalTimeMinute());
	g_ecu_gw_516.hu_local_time_system = ecu_gw_516_hu_local_time_system_encode(calc_ecu_GW_516_HU_LocalTimeSystem());
	g_ecu_gw_516.hu_local_time_second = ecu_gw_516_hu_local_time_second_encode(calc_ecu_GW_516_HU_LocalTimeSecond());
	g_ecu_gw_516.hu_local_time_year = ecu_gw_516_hu_local_time_year_encode(calc_ecu_GW_516_HU_LocalTimeYear());
	g_ecu_gw_516.hu_maintain_remind_req = ecu_gw_516_hu_maintain_remind_req_encode(calc_ecu_GW_516_HU_MaintainRemindReq());
	g_ecu_gw_516.hu_leave_maintain_day = ecu_gw_516_hu_leave_maintain_day_encode(calc_ecu_GW_516_HU_LeaveMaintainDay());
	g_ecu_gw_516.hu_leave_maintain_mileage = ecu_gw_516_hu_leave_maintain_mileage_encode(calc_ecu_GW_516_HU_LeaveMaintainMileage());
	g_ecu_gw_516.hu_current_locationstd = ecu_gw_516_hu_current_locationstd_encode(calc_ecu_GW_516_HU_CurrentLocationstd());
	ECU_GW_516_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_530 (u8_t Direction)
{
	g_ecu_gw_530.ip_engine_off_time = ecu_gw_530_ip_engine_off_time_encode(calc_ecu_GW_530_IP_EngineOffTime());
	g_ecu_gw_530.ip_total_odometer = ecu_gw_530_ip_total_odometer_encode(calc_ecu_GW_530_IP_TotalOdometer());
	g_ecu_gw_530.ip_fuel_level = ecu_gw_530_ip_fuel_level_encode(calc_ecu_GW_530_IP_FuelLevel());
	ECU_GW_530_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_187 (u8_t Direction)
{
	g_ecu_gw_187.esp_abs_active_status = ecu_gw_187_esp_abs_active_status_encode(calc_ecu_GW_187_ESP_ABSActiveStatus());
	g_ecu_gw_187.esp_gear_hold_request = ecu_gw_187_esp_gear_hold_request_encode(calc_ecu_GW_187_ESP_GearHoldRequest());
	g_ecu_gw_187.esp_gear_hold_request_valid = ecu_gw_187_esp_gear_hold_request_valid_encode(calc_ecu_GW_187_ESP_GearHoldRequestValid());
	g_ecu_gw_187.esp_tcs_fail_status = ecu_gw_187_esp_tcs_fail_status_encode(calc_ecu_GW_187_ESP_TCSFailStatus());
	g_ecu_gw_187.esp_abs_fail_status = ecu_gw_187_esp_abs_fail_status_encode(calc_ecu_GW_187_ESP_ABSFailStatus());
	g_ecu_gw_187.esp_ebd_fail_status = ecu_gw_187_esp_ebd_fail_status_encode(calc_ecu_GW_187_ESP_EBDFailStatus());
	g_ecu_gw_187.esp_esp_function_status = ecu_gw_187_esp_esp_function_status_encode(calc_ecu_GW_187_ESP_ESPFunctionStatus());
	g_ecu_gw_187.esp_esp_active_status = ecu_gw_187_esp_esp_active_status_encode(calc_ecu_GW_187_ESP_ESPActiveStatus());
	g_ecu_gw_187.esp_torq_incwhl_front = ecu_gw_187_esp_torq_incwhl_front_encode(calc_ecu_GW_187_ESP_TorqIncwhlFront());
	g_ecu_gw_187.ibcu_brake_fluid_warning = ecu_gw_187_ibcu_brake_fluid_warning_encode(calc_ecu_GW_187_IBCU_BrakeFluid_Warning());
	g_ecu_gw_187.ep_bi_clear_diagnostic_info = ecu_gw_187_ep_bi_clear_diagnostic_info_encode(calc_ecu_GW_187_EPBi_ClearDiagnosticInfo());
	g_ecu_gw_187.esp_eng_torq_dec_active = ecu_gw_187_esp_eng_torq_dec_active_encode(calc_ecu_GW_187_ESP_EngTorqDecActive());
	g_ecu_gw_187.esp_eng_torq_inc_front_active = ecu_gw_187_esp_eng_torq_inc_front_active_encode(calc_ecu_GW_187_ESP_EngTorqIncFrontActive());
	g_ecu_gw_187.esp_vehicle_speed_valid = ecu_gw_187_esp_vehicle_speed_valid_encode(calc_ecu_GW_187_ESP_VehicleSpeedValid());
	g_ecu_gw_187.esp_vehicle_speed = ecu_gw_187_esp_vehicle_speed_encode(calc_ecu_GW_187_ESP_VehicleSpeed());
	g_ecu_gw_187.ep_bi_mil_req = ecu_gw_187_ep_bi_mil_req_encode(calc_ecu_GW_187_EPBi_MILReq());
	g_ecu_gw_187.esp_adbf_active = ecu_gw_187_esp_adbf_active_encode(calc_ecu_GW_187_ESP_ADBF_Active());
	g_ecu_gw_187.esp_rolling_counter_187 = ecu_gw_187_esp_rolling_counter_187_encode(calc_ecu_GW_187_ESP_RollingCounter_187());
	g_ecu_gw_187.esp_crc_check_187 = ecu_gw_187_esp_crc_check_187_encode(calc_ecu_GW_187_ESP_CRCCheck_187());
	ECU_GW_187_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_197 (u8_t Direction)
{
	g_ecu_gw_197.epb_clutch_sensor = ecu_gw_197_epb_clutch_sensor_encode(calc_ecu_GW_197_EPB_ClutchSensor());
	g_ecu_gw_197.esp_rolling_counter_197 = ecu_gw_197_esp_rolling_counter_197_encode(calc_ecu_GW_197_ESP_RollingCounter_197());
	g_ecu_gw_197.esp_crc_check_197 = ecu_gw_197_esp_crc_check_197_encode(calc_ecu_GW_197_ESP_CRCCheck_197());
	ECU_GW_197_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_194 (u8_t Direction)
{
	g_ecu_gw_194.ems_eng_spd_err = ecu_gw_194_ems_eng_spd_err_encode(calc_ecu_GW_194_EMS_EngSpdErr());
	g_ecu_gw_194.ems_eng_spd = ecu_gw_194_ems_eng_spd_encode(calc_ecu_GW_194_EMS_EngSpd());
	g_ecu_gw_194.ems_idle_ctrl_sts = ecu_gw_194_ems_idle_ctrl_sts_encode(calc_ecu_GW_194_EMS_IdleCtrlSts());
	g_ecu_gw_194.ems_eng_run_req = ecu_gw_194_ems_eng_run_req_encode(calc_ecu_GW_194_EMS_EngRunReq());
	g_ecu_gw_194.ems_eng_fu_pump_sts = ecu_gw_194_ems_eng_fu_pump_sts_encode(calc_ecu_GW_194_EMS_EngFuPumpSts());
	g_ecu_gw_194.ems_eng_stop_inhb = ecu_gw_194_ems_eng_stop_inhb_encode(calc_ecu_GW_194_EMS_EngStopInhb());
	g_ecu_gw_194.ems_eng_strt_success = ecu_gw_194_ems_eng_strt_success_encode(calc_ecu_GW_194_EMS_EngStrtSuccess());
	g_ecu_gw_194.ems_eng_fu_cut_off = ecu_gw_194_ems_eng_fu_cut_off_encode(calc_ecu_GW_194_EMS_EngFuCutOff());
	g_ecu_gw_194.ems_eng_tq_flywh = ecu_gw_194_ems_eng_tq_flywh_encode(calc_ecu_GW_194_EMS_EngTqFlywh());
	g_ecu_gw_194.ems_eng_tq_flywh_failr = ecu_gw_194_ems_eng_tq_flywh_failr_encode(calc_ecu_GW_194_EMS_EngTqFlywhFailr());
	g_ecu_gw_194.ems_eng_sts = ecu_gw_194_ems_eng_sts_encode(calc_ecu_GW_194_EMS_EngSts());
	g_ecu_gw_194.ems_ignkl15_posn = ecu_gw_194_ems_ignkl15_posn_encode(calc_ecu_GW_194_EMS_IGNKL15Posn());
	g_ecu_gw_194.ems_rolling_counter_194 = ecu_gw_194_ems_rolling_counter_194_encode(calc_ecu_GW_194_EMS_RollingCounter_194());
	g_ecu_gw_194.ems_crc_check_194 = ecu_gw_194_ems_crc_check_194_encode(calc_ecu_GW_194_EMS_CRCCheck_194());
	ECU_GW_194_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_17D (u8_t Direction)
{
	g_ecu_gw_17d.pcu_act_hv_pwr_cns_ext = ecu_gw_17_d_pcu_act_hv_pwr_cns_ext_encode(calc_ecu_GW_17D_PCU_ActHVPwrCnsExt());
	g_ecu_gw_17d.pcu_soc_disp = ecu_gw_17_d_pcu_soc_disp_encode(calc_ecu_GW_17D_PCU_SOCDisp());
	g_ecu_gw_17d.pcu_veh_sts = ecu_gw_17_d_pcu_veh_sts_encode(calc_ecu_GW_17D_PCU_VehSts());
	g_ecu_gw_17d.pcu_bms_oper_mod_req = ecu_gw_17_d_pcu_bms_oper_mod_req_encode(calc_ecu_GW_17D_PCU_BMSOperModReq());
	g_ecu_gw_17d.pcu_chrg_allwd = ecu_gw_17_d_pcu_chrg_allwd_encode(calc_ecu_GW_17D_PCU_ChrgAllwd());
	g_ecu_gw_17d.pcu_batt_intr_heat_allwd = ecu_gw_17_d_pcu_batt_intr_heat_allwd_encode(calc_ecu_GW_17D_PCU_BattIntrHeatAllwd());
	g_ecu_gw_17d.pcu_chrg_unlck_i_lim_req = ecu_gw_17_d_pcu_chrg_unlck_i_lim_req_encode(calc_ecu_GW_17D_PCU_ChrgUnlckILimReq());
	g_ecu_gw_17d.pcu_chm_asignal_sts = ecu_gw_17_d_pcu_chm_asignal_sts_encode(calc_ecu_GW_17D_PCU_CHMAsignalSts());
	g_ecu_gw_17d.pcu_chrg_i_req_lim_fac = ecu_gw_17_d_pcu_chrg_i_req_lim_fac_encode(calc_ecu_GW_17D_PCU_ChrgIReqLimFac());
	g_ecu_gw_17d.pcu_chrg_susp_req = ecu_gw_17_d_pcu_chrg_susp_req_encode(calc_ecu_GW_17D_PCU_ChrgSuspReq());
	g_ecu_gw_17d.pcu_veh_spd_vld = ecu_gw_17_d_pcu_veh_spd_vld_encode(calc_ecu_GW_17D_PCU_VehSpdVld());
	g_ecu_gw_17d.pcu_veh_spd = ecu_gw_17_d_pcu_veh_spd_encode(calc_ecu_GW_17D_PCU_VehSpd());
	g_ecu_gw_17d.pcu_191_cyc_cntr = ecu_gw_17_d_pcu_191_cyc_cntr_encode(calc_ecu_GW_17D_PCU_191CycCntr());
	g_ecu_gw_17d.pcu_crcid191 = ecu_gw_17_d_pcu_crcid191_encode(calc_ecu_GW_17D_PCU_CRCID191());
	g_ecu_gw_17d.pcu_real_acc_pedl = ecu_gw_17_d_pcu_real_acc_pedl_encode(calc_ecu_GW_17D_PCU_RealAccPedl());
	g_ecu_gw_17d.pcu_real_acc_pedl_vld = ecu_gw_17_d_pcu_real_acc_pedl_vld_encode(calc_ecu_GW_17D_PCU_RealAccPedlVld());
	g_ecu_gw_17d.pcu_k3_clu_sts = ecu_gw_17_d_pcu_k3_clu_sts_encode(calc_ecu_GW_17D_PCU_K3CluSts());
	g_ecu_gw_17d.pcu_flywh_tq_trans_load_act_invld = ecu_gw_17_d_pcu_flywh_tq_trans_load_act_invld_encode(calc_ecu_GW_17D_PCU_FlywhTqTransLoadActInvld());
	g_ecu_gw_17d.pcu_flywh_tq_trans_load_act = ecu_gw_17_d_pcu_flywh_tq_trans_load_act_encode(calc_ecu_GW_17D_PCU_FlywhTqTransLoadAct());
	g_ecu_gw_17d.pcu_eng_tar_idle_spd_req = ecu_gw_17_d_pcu_eng_tar_idle_spd_req_encode(calc_ecu_GW_17D_PCU_EngTarIdleSpdReq());
	g_ecu_gw_17d.pcu_eng_strt_mod = ecu_gw_17_d_pcu_eng_strt_mod_encode(calc_ecu_GW_17D_PCU_EngStrtMod());
	g_ecu_gw_17d.pcu_spd_ctrl_mod_select = ecu_gw_17_d_pcu_spd_ctrl_mod_select_encode(calc_ecu_GW_17D_PCU_SpdCtrlModSelect());
	g_ecu_gw_17d.pcu_clr_diagc_info = ecu_gw_17_d_pcu_clr_diagc_info_encode(calc_ecu_GW_17D_PCU_ClrDiagcInfo());
	g_ecu_gw_17d.pcu_mil_req = ecu_gw_17_d_pcu_mil_req_encode(calc_ecu_GW_17D_PCU_MILReq());
	g_ecu_gw_17d.pcu_tar_gear_req = ecu_gw_17_d_pcu_tar_gear_req_encode(calc_ecu_GW_17D_PCU_TarGearReq());
	g_ecu_gw_17d.pcu_tar_gear_req_valid = ecu_gw_17_d_pcu_tar_gear_req_valid_encode(calc_ecu_GW_17D_PCU_TarGearReqValid());
	g_ecu_gw_17d.r_gearbox_actual_driving_gear = ecu_gw_17_d_r_gearbox_actual_driving_gear_encode(calc_ecu_GW_17D_RGearbox_ActualDrivingGear());
	g_ecu_gw_17d.pcu_trsm_tar_idle_spd_req = ecu_gw_17_d_pcu_trsm_tar_idle_spd_req_encode(calc_ecu_GW_17D_PCU_TrsmTarIdleSpdReq());
	g_ecu_gw_17d.pcu_rolling_counter_1_c6 = ecu_gw_17_d_pcu_rolling_counter_1_c6_encode(calc_ecu_GW_17D_PCU_RollingCounter_1C6());
	g_ecu_gw_17d.pcu_crc_check_1_c6 = ecu_gw_17_d_pcu_crc_check_1_c6_encode(calc_ecu_GW_17D_PCU_CRCCheck_1C6());
	g_ecu_gw_17d.pcu_pt_sts_chrg_crp = ecu_gw_17_d_pcu_pt_sts_chrg_crp_encode(calc_ecu_GW_17D_PCU_PtStsChrgCrp());
	g_ecu_gw_17d.pcu_eng_tq_flywh_req_vld = ecu_gw_17_d_pcu_eng_tq_flywh_req_vld_encode(calc_ecu_GW_17D_PCU_EngTqFlywhReqVld());
	g_ecu_gw_17d.pcu_eng_tq_flywh_fast_req = ecu_gw_17_d_pcu_eng_tq_flywh_fast_req_encode(calc_ecu_GW_17D_PCU_EngTqFlywhFastReq());
	g_ecu_gw_17d.pcu_eng_tq_flywh_slow_req = ecu_gw_17_d_pcu_eng_tq_flywh_slow_req_encode(calc_ecu_GW_17D_PCU_EngTqFlywhSlowReq());
	g_ecu_gw_17d.pcu_brk_pedl_sts1 = ecu_gw_17_d_pcu_brk_pedl_sts1_encode(calc_ecu_GW_17D_PCU_BrkPedlSts1());
	g_ecu_gw_17d.pcu_fu_cut_off_req = ecu_gw_17_d_pcu_fu_cut_off_req_encode(calc_ecu_GW_17D_PCU_FuCutOffReq());
	g_ecu_gw_17d.pcu_eng_tq_flywh_allwd_max_vld = ecu_gw_17_d_pcu_eng_tq_flywh_allwd_max_vld_encode(calc_ecu_GW_17D_PCU_EngTqFlywhAllwdMaxVld());
	g_ecu_gw_17d.pcu_eng_tq_flywh_allwd_max = ecu_gw_17_d_pcu_eng_tq_flywh_allwd_max_encode(calc_ecu_GW_17D_PCU_EngTqFlywhAllwdMax());
	g_ecu_gw_17d.pcu_brk_pedl_sts2 = ecu_gw_17_d_pcu_brk_pedl_sts2_encode(calc_ecu_GW_17D_PCU_BrkPedlSts2());
	g_ecu_gw_17d.pcu_eng_ign_ag_intv_enbl = ecu_gw_17_d_pcu_eng_ign_ag_intv_enbl_encode(calc_ecu_GW_17D_PCU_EngIgnAgIntvEnbl());
	g_ecu_gw_17d.pcu_ems_surge_damper_ena = ecu_gw_17_d_pcu_ems_surge_damper_ena_encode(calc_ecu_GW_17D_PCU_EMSSurgeDamperEna());
	g_ecu_gw_17d.pcu_strt_inhb = ecu_gw_17_d_pcu_strt_inhb_encode(calc_ecu_GW_17D_PCU_StrtInhb());
	g_ecu_gw_17d.pcu_strt_trq_ctl = ecu_gw_17_d_pcu_strt_trq_ctl_encode(calc_ecu_GW_17D_PCU_StrtTrqCtl());
	g_ecu_gw_17d.pcu_eng_stp_ord = ecu_gw_17_d_pcu_eng_stp_ord_encode(calc_ecu_GW_17D_PCU_EngStpOrd());
	g_ecu_gw_17d.pcu_eng_strt_ord = ecu_gw_17_d_pcu_eng_strt_ord_encode(calc_ecu_GW_17D_PCU_EngStrtOrd());
	g_ecu_gw_17d.pcu_rolling_counter_1_e1 = ecu_gw_17_d_pcu_rolling_counter_1_e1_encode(calc_ecu_GW_17D_PCU_RollingCounter_1E1());
	g_ecu_gw_17d.pcu_crc_check_1_e1 = ecu_gw_17_d_pcu_crc_check_1_e1_encode(calc_ecu_GW_17D_PCU_CRCCheck_1E1());
	g_ecu_gw_17d.pcu_pwr_indcd_real_tq_front_whl = ecu_gw_17_d_pcu_pwr_indcd_real_tq_front_whl_encode(calc_ecu_GW_17D_PCU_PwrIndcdRealTqFrontWhl());
	g_ecu_gw_17d.pcu_pwr_indcd_drvr_req_tq_whl_front = ecu_gw_17_d_pcu_pwr_indcd_drvr_req_tq_whl_front_encode(calc_ecu_GW_17D_PCU_PwrIndcdDrvrReqTqWhlFront());
	g_ecu_gw_17d.pcu_front_mot_sts = ecu_gw_17_d_pcu_front_mot_sts_encode(calc_ecu_GW_17D_PCU_FrontMotSts());
	g_ecu_gw_17d.pcu_esp_tq_req_avl_front = ecu_gw_17_d_pcu_esp_tq_req_avl_front_encode(calc_ecu_GW_17D_PCU_ESPTqReqAvlFront());
	g_ecu_gw_17d.pcu_ecgp_ovrd = ecu_gw_17_d_pcu_ecgp_ovrd_encode(calc_ecu_GW_17D_PCU_ECGPOvrd());
	g_ecu_gw_17d.pcu_qecacc = ecu_gw_17_d_pcu_qecacc_encode(calc_ecu_GW_17D_PCU_QECACC());
	g_ecu_gw_17d.pcu_acc_req_possible = ecu_gw_17_d_pcu_acc_req_possible_encode(calc_ecu_GW_17D_PCU_AccReqPossible());
	g_ecu_gw_17d.pcu_eng_sts = ecu_gw_17_d_pcu_eng_sts_encode(calc_ecu_GW_17D_PCU_EngSts());
	g_ecu_gw_17d.pcu_eng_clutch_sts = ecu_gw_17_d_pcu_eng_clutch_sts_encode(calc_ecu_GW_17D_PCU_EngClutchSts());
	g_ecu_gw_17d.pcu_pwr_indcd_real_tq_whl_failr = ecu_gw_17_d_pcu_pwr_indcd_real_tq_whl_failr_encode(calc_ecu_GW_17D_PCU_PwrIndcdRealTqWhlFailr());
	g_ecu_gw_17d.pcu_front_mot_sts_vld = ecu_gw_17_d_pcu_front_mot_sts_vld_encode(calc_ecu_GW_17D_PCU_FrontMotStsVld());
	g_ecu_gw_17d.pcu_eng_sts_vld = ecu_gw_17_d_pcu_eng_sts_vld_encode(calc_ecu_GW_17D_PCU_EngStsVld());
	g_ecu_gw_17d.pcu_eng_clutch_sts_vld = ecu_gw_17_d_pcu_eng_clutch_sts_vld_encode(calc_ecu_GW_17D_PCU_EngClutchStsVld());
	g_ecu_gw_17d.pcu_rear_mot_sts_vld = ecu_gw_17_d_pcu_rear_mot_sts_vld_encode(calc_ecu_GW_17D_PCU_RearMotStsVld());
	g_ecu_gw_17d.pcu_start_stop_active = ecu_gw_17_d_pcu_start_stop_active_encode(calc_ecu_GW_17D_PCU_StartStopActive());
	g_ecu_gw_17d.pcu_start_stop_active_vld = ecu_gw_17_d_pcu_start_stop_active_vld_encode(calc_ecu_GW_17D_PCU_StartStopActiveVld());
	g_ecu_gw_17d.pcu_rolling_counter_211 = ecu_gw_17_d_pcu_rolling_counter_211_encode(calc_ecu_GW_17D_PCU_RollingCounter_211());
	g_ecu_gw_17d.pcu_crc_check_211 = ecu_gw_17_d_pcu_crc_check_211_encode(calc_ecu_GW_17D_PCU_CRCCheck_211());
	g_ecu_gw_17d.pcu_mb_regen_whl_front = ecu_gw_17_d_pcu_mb_regen_whl_front_encode(calc_ecu_GW_17D_PCU_MbRegenWhlFront());
	g_ecu_gw_17d.pcu_mb_regen_max_front_whl = ecu_gw_17_d_pcu_mb_regen_max_front_whl_encode(calc_ecu_GW_17D_PCU_MbRegenMaxFrontWhl());
	g_ecu_gw_17d.pcu_mb_regen_max_front_whl_vld = ecu_gw_17_d_pcu_mb_regen_max_front_whl_vld_encode(calc_ecu_GW_17D_PCU_MbRegenMaxFrontWhlVld());
	g_ecu_gw_17d.pcu_mb_regen_max_whl_qlfr = ecu_gw_17_d_pcu_mb_regen_max_whl_qlfr_encode(calc_ecu_GW_17D_PCU_MbRegenMaxWhlQlfr());
	g_ecu_gw_17d.pcu_apa_torq_request_available = ecu_gw_17_d_pcu_apa_torq_request_available_encode(calc_ecu_GW_17D_PCU_APATorqRequestAvailable());
	g_ecu_gw_17d.pcu_acc_pedl_vld = ecu_gw_17_d_pcu_acc_pedl_vld_encode(calc_ecu_GW_17D_PCU_AccPedlVld());
	g_ecu_gw_17d.pcu_acc_pedl = ecu_gw_17_d_pcu_acc_pedl_encode(calc_ecu_GW_17D_PCU_AccPedl());
	g_ecu_gw_17d.pcu_pwr_train_sts = ecu_gw_17_d_pcu_pwr_train_sts_encode(calc_ecu_GW_17D_PCU_PwrTrainSts());
	g_ecu_gw_17d.pcu_apa_request_enable = ecu_gw_17_d_pcu_apa_request_enable_encode(calc_ecu_GW_17D_PCU_APARequestEnable());
	g_ecu_gw_17d.pcu_rolling_counter_1_a6 = ecu_gw_17_d_pcu_rolling_counter_1_a6_encode(calc_ecu_GW_17D_PCU_RollingCounter_1A6());
	g_ecu_gw_17d.pcu_crc_check_1_a6 = ecu_gw_17_d_pcu_crc_check_1_a6_encode(calc_ecu_GW_17D_PCU_CRCCheck_1A6());
	g_ecu_gw_17d.pcu_mb_regen_max_whl_total = ecu_gw_17_d_pcu_mb_regen_max_whl_total_encode(calc_ecu_GW_17D_PCU_MbRegenMaxWhlTotal());
	g_ecu_gw_17d.pcu_mb_regen_whl_rear = ecu_gw_17_d_pcu_mb_regen_whl_rear_encode(calc_ecu_GW_17D_PCU_MbRegenWhlRear());
	g_ecu_gw_17d.pcu_mb_regen_max_rear_whl = ecu_gw_17_d_pcu_mb_regen_max_rear_whl_encode(calc_ecu_GW_17D_PCU_MbRegenMaxRearWhl());
	g_ecu_gw_17d.pcu_rolling_counter_1_be = ecu_gw_17_d_pcu_rolling_counter_1_be_encode(calc_ecu_GW_17D_PCU_RollingCounter_1BE());
	g_ecu_gw_17d.pcu_crc_check_1_be = ecu_gw_17_d_pcu_crc_check_1_be_encode(calc_ecu_GW_17D_PCU_CRCCheck_1BE());
	g_ecu_gw_17d.pcu_pwr_indcd_real_tq_rear_whl = ecu_gw_17_d_pcu_pwr_indcd_real_tq_rear_whl_encode(calc_ecu_GW_17D_PCU_PwrIndcdRealTqRearWhl());
	g_ecu_gw_17d.pcu_pwr_indcd_drvr_req_tq_whl_rear = ecu_gw_17_d_pcu_pwr_indcd_drvr_req_tq_whl_rear_encode(calc_ecu_GW_17D_PCU_PwrIndcdDrvrReqTqWhlRear());
	g_ecu_gw_17d.pcu_esp_tq_req_avl_rear = ecu_gw_17_d_pcu_esp_tq_req_avl_rear_encode(calc_ecu_GW_17D_PCU_ESPTqReqAvlRear());
	g_ecu_gw_17d.pcu_rear_mot_sts = ecu_gw_17_d_pcu_rear_mot_sts_encode(calc_ecu_GW_17D_PCU_RearMotSts());
	g_ecu_gw_17d.pcu_rolling_counter_1_c4 = ecu_gw_17_d_pcu_rolling_counter_1_c4_encode(calc_ecu_GW_17D_PCU_RollingCounter_1C4());
	g_ecu_gw_17d.pcu_crc_check_1_c4 = ecu_gw_17_d_pcu_crc_check_1_c4_encode(calc_ecu_GW_17D_PCU_CRCCheck_1C4());
	g_ecu_gw_17d.pcu_rolling_counter_17_d = ecu_gw_17_d_pcu_rolling_counter_17_d_encode(calc_ecu_GW_17D_PCU_RollingCounter_17D());
	g_ecu_gw_17d.pcu_crc_check_17_d = ecu_gw_17_d_pcu_crc_check_17_d_encode(calc_ecu_GW_17D_PCU_CRCCheck_17D());
	ECU_GW_17D_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_17E (u8_t Direction)
{
	g_ecu_gw_17e.eps_measured_torsion_bar_torque = ecu_gw_17_e_eps_measured_torsion_bar_torque_encode(calc_ecu_GW_17E_EPS_MeasuredTorsionBarTorque());
	g_ecu_gw_17e.eps_pinionang_valid = ecu_gw_17_e_eps_pinionang_valid_encode(calc_ecu_GW_17E_EPS_Pinionang_Valid());
	g_ecu_gw_17e.eps_pinionang = ecu_gw_17_e_eps_pinionang_encode(calc_ecu_GW_17E_EPS_Pinionang());
	g_ecu_gw_17e.eps_handwheel_relang = ecu_gw_17_e_eps_handwheel_relang_encode(calc_ecu_GW_17E_EPS_Handwheel_Relang());
	g_ecu_gw_17e.eps_measured_torsion_bar_torq_valid = ecu_gw_17_e_eps_measured_torsion_bar_torq_valid_encode(calc_ecu_GW_17E_EPS_MeasuredTorsionBarTorqValid());
	g_ecu_gw_17e.eps_handwheel_relang_valid = ecu_gw_17_e_eps_handwheel_relang_valid_encode(calc_ecu_GW_17E_EPS_Handwheel_Relang_Valid());
	g_ecu_gw_17e.eps_lat_ctrl_active = ecu_gw_17_e_eps_lat_ctrl_active_encode(calc_ecu_GW_17E_EPS_LatCtrlActive());
	g_ecu_gw_17e.eps_lat_ctrl_availability_status = ecu_gw_17_e_eps_lat_ctrl_availability_status_encode(calc_ecu_GW_17E_EPS_LatCtrlAvailabilityStatus());
	g_ecu_gw_17e.eps_rolling_counter_17_e = ecu_gw_17_e_eps_rolling_counter_17_e_encode(calc_ecu_GW_17E_EPS_RollingCounter_17E());
	g_ecu_gw_17e.eps_crc_check_17_e = ecu_gw_17_e_eps_crc_check_17_e_encode(calc_ecu_GW_17E_EPS_CRCCheck_17E());
	ECU_GW_17E_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_1BA (u8_t Direction)
{
	g_ecu_acc_1ba.acc_motor_torque_max_limit_request = ecu_acc_1_ba_acc_motor_torque_max_limit_request_encode(calc_ecu_ACC_1BA_ACC_MotorTorqueMaxLimitRequest());
	g_ecu_acc_1ba.acc_motor_torque_min_limit_request = ecu_acc_1_ba_acc_motor_torque_min_limit_request_encode(calc_ecu_ACC_1BA_ACC_MotorTorqueMinLimitRequest());
	g_ecu_acc_1ba.acc_lat_ang_req = ecu_acc_1_ba_acc_lat_ang_req_encode(calc_ecu_ACC_1BA_ACC_LatAngReq());
	g_ecu_acc_1ba.acc_lat_ang_req_active = ecu_acc_1_ba_acc_lat_ang_req_active_encode(calc_ecu_ACC_1BA_ACC_LatAngReqActive());
	g_ecu_acc_1ba.acc_rolling_counter_1_ba_0 = ecu_acc_1_ba_acc_rolling_counter_1_ba_0_encode(calc_ecu_ACC_1BA_ACC_RollingCounter_1BA_0());
	g_ecu_acc_1ba.acc_crc_check_1_ba_0 = ecu_acc_1_ba_acc_crc_check_1_ba_0_encode(calc_ecu_ACC_1BA_ACC_CRCCheck_1BA_0());
	ECU_ACC_1BA_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_20B (u8_t Direction)
{
	g_ecu_gw_20b.wheel_speed_fr_valid_data = ecu_gw_20_b_wheel_speed_fr_valid_data_encode(calc_ecu_GW_20B_Wheel_Speed_FR_Valid_Data());
	g_ecu_gw_20b.wheel_speed_fr_direction = ecu_gw_20_b_wheel_speed_fr_direction_encode(calc_ecu_GW_20B_Wheel_Speed_FR_Direction());
	g_ecu_gw_20b.wheel_speed_fr_data = ecu_gw_20_b_wheel_speed_fr_data_encode(calc_ecu_GW_20B_Wheel_Speed_FR_Data());
	g_ecu_gw_20b.wheel_speed_fl_valid_data = ecu_gw_20_b_wheel_speed_fl_valid_data_encode(calc_ecu_GW_20B_Wheel_Speed_FL_Valid_Data());
	g_ecu_gw_20b.wheel_speed_fl_direction = ecu_gw_20_b_wheel_speed_fl_direction_encode(calc_ecu_GW_20B_Wheel_Speed_FL_Direction());
	g_ecu_gw_20b.wheel_speed_fl_data = ecu_gw_20_b_wheel_speed_fl_data_encode(calc_ecu_GW_20B_Wheel_Speed_FL_Data());
	g_ecu_gw_20b.abs_tod_fast_open_request = ecu_gw_20_b_abs_tod_fast_open_request_encode(calc_ecu_GW_20B_ABS_TODFastOpenRequest());
	g_ecu_gw_20b.esp_tod_torque_max_limit = ecu_gw_20_b_esp_tod_torque_max_limit_encode(calc_ecu_GW_20B_ESP_TODTorqueMaxLimit());
	g_ecu_gw_20b.esp_rolling_counter_206 = ecu_gw_20_b_esp_rolling_counter_206_encode(calc_ecu_GW_20B_ESP_RollingCounter_206());
	g_ecu_gw_20b.esp_crc_check_206 = ecu_gw_20_b_esp_crc_check_206_encode(calc_ecu_GW_20B_ESP_CRCCheck_206());
	g_ecu_gw_20b.wheel_speed_rr_valid_data = ecu_gw_20_b_wheel_speed_rr_valid_data_encode(calc_ecu_GW_20B_Wheel_Speed_RR_Valid_Data());
	g_ecu_gw_20b.wheel_speed_rr_direction = ecu_gw_20_b_wheel_speed_rr_direction_encode(calc_ecu_GW_20B_Wheel_Speed_RR_Direction());
	g_ecu_gw_20b.wheel_speed_rr_data = ecu_gw_20_b_wheel_speed_rr_data_encode(calc_ecu_GW_20B_Wheel_Speed_RR_Data());
	g_ecu_gw_20b.wheel_speed_rl_valid_data = ecu_gw_20_b_wheel_speed_rl_valid_data_encode(calc_ecu_GW_20B_Wheel_Speed_RL_Valid_Data());
	g_ecu_gw_20b.wheel_speed_rl_direction = ecu_gw_20_b_wheel_speed_rl_direction_encode(calc_ecu_GW_20B_Wheel_Speed_RL_Direction());
	g_ecu_gw_20b.wheel_speed_rl_data = ecu_gw_20_b_wheel_speed_rl_data_encode(calc_ecu_GW_20B_Wheel_Speed_RL_Data());
	g_ecu_gw_20b.esp_vehicle_speed_reference = ecu_gw_20_b_esp_vehicle_speed_reference_encode(calc_ecu_GW_20B_ESP_Vehicle_Speed_Reference());
	g_ecu_gw_20b.esp_urgency_brake_alarm = ecu_gw_20_b_esp_urgency_brake_alarm_encode(calc_ecu_GW_20B_ESP_UrgencyBrakeAlarm());
	g_ecu_gw_20b.esp_ecd_active = ecu_gw_20_b_esp_ecd_active_encode(calc_ecu_GW_20B_ESP_ECDActive());
	g_ecu_gw_20b.esp_ecd_available = ecu_gw_20_b_esp_ecd_available_encode(calc_ecu_GW_20B_ESP_ECDAvailable());
	g_ecu_gw_20b.esp_rolling_counter_208 = ecu_gw_20_b_esp_rolling_counter_208_encode(calc_ecu_GW_20B_ESP_RollingCounter_208());
	g_ecu_gw_20b.esp_crc_check_208 = ecu_gw_20_b_esp_crc_check_208_encode(calc_ecu_GW_20B_ESP_CRCCheck_208());
	g_ecu_gw_20b.esp_mas_cyl_brake_pressure_valid = ecu_gw_20_b_esp_mas_cyl_brake_pressure_valid_encode(calc_ecu_GW_20B_ESP_MasCylBrakePressureValid());
	g_ecu_gw_20b.esp_auto_hold_standby = ecu_gw_20_b_esp_auto_hold_standby_encode(calc_ecu_GW_20B_ESP_AutoHoldStandby());
	g_ecu_gw_20b.esp_brake_light_on_request = ecu_gw_20_b_esp_brake_light_on_request_encode(calc_ecu_GW_20B_ESP_BrakeLightOnRequest());
	g_ecu_gw_20b.esp_mas_cyl_brake_pressure = ecu_gw_20_b_esp_mas_cyl_brake_pressure_encode(calc_ecu_GW_20B_ESP_MasCylBrakePressure());
	g_ecu_gw_20b.wheel_speed_fl_pulse = ecu_gw_20_b_wheel_speed_fl_pulse_encode(calc_ecu_GW_20B_Wheel_Speed_FL_Pulse());
	g_ecu_gw_20b.wheel_speed_fr_pulse = ecu_gw_20_b_wheel_speed_fr_pulse_encode(calc_ecu_GW_20B_Wheel_Speed_FR_Pulse());
	g_ecu_gw_20b.wheel_speed_rr_pulse = ecu_gw_20_b_wheel_speed_rr_pulse_encode(calc_ecu_GW_20B_Wheel_Speed_RR_Pulse());
	g_ecu_gw_20b.wheel_speed_rl_pulse = ecu_gw_20_b_wheel_speed_rl_pulse_encode(calc_ecu_GW_20B_Wheel_Speed_RL_Pulse());
	g_ecu_gw_20b.esp_auto_hold_active = ecu_gw_20_b_esp_auto_hold_active_encode(calc_ecu_GW_20B_ESP_AutoHoldActive());
	g_ecu_gw_20b.esp_auto_hold_available = ecu_gw_20_b_esp_auto_hold_available_encode(calc_ecu_GW_20B_ESP_AutoHoldAvailable());
	g_ecu_gw_20b.esp_hhc_available = ecu_gw_20_b_esp_hhc_available_encode(calc_ecu_GW_20B_ESP_HHC_Available());
	g_ecu_gw_20b.esp_hhc_active = ecu_gw_20_b_esp_hhc_active_encode(calc_ecu_GW_20B_ESP_HHC_Active());
	g_ecu_gw_20b.esp_rolling_counter_258 = ecu_gw_20_b_esp_rolling_counter_258_encode(calc_ecu_GW_20B_ESP_RollingCounter_258());
	g_ecu_gw_20b.esp_crc_check_258 = ecu_gw_20_b_esp_crc_check_258_encode(calc_ecu_GW_20B_ESP_CRCCheck_258());
	g_ecu_gw_20b.esp_brake_force = ecu_gw_20_b_esp_brake_force_encode(calc_ecu_GW_20B_ESP_BrakeForce());
	g_ecu_gw_20b.esp_ab_aactive = ecu_gw_20_b_esp_ab_aactive_encode(calc_ecu_GW_20B_ESP_ABAactive());
	g_ecu_gw_20b.esp_ab_aavailable = ecu_gw_20_b_esp_ab_aavailable_encode(calc_ecu_GW_20B_ESP_ABAavailable());
	g_ecu_gw_20b.esp_prefill_active = ecu_gw_20_b_esp_prefill_active_encode(calc_ecu_GW_20B_ESP_PrefillActive());
	g_ecu_gw_20b.esp_prefill_available = ecu_gw_20_b_esp_prefill_available_encode(calc_ecu_GW_20B_ESP_PrefillAvailable());
	g_ecu_gw_20b.esp_aeb_available = ecu_gw_20_b_esp_aeb_available_encode(calc_ecu_GW_20B_ESP_AEBAvailable());
	g_ecu_gw_20b.esp_ae_bdec_active = ecu_gw_20_b_esp_ae_bdec_active_encode(calc_ecu_GW_20B_ESP_AEBdecActive());
	g_ecu_gw_20b.esp_aw_bactive = ecu_gw_20_b_esp_aw_bactive_encode(calc_ecu_GW_20B_ESP_AWBactive());
	g_ecu_gw_20b.esp_aw_bavailable = ecu_gw_20_b_esp_aw_bavailable_encode(calc_ecu_GW_20B_ESP_AWBavailable());
	g_ecu_gw_20b.esp_brake_over_heat_brake_disc_temp = ecu_gw_20_b_esp_brake_over_heat_brake_disc_temp_encode(calc_ecu_GW_20B_ESP_BrakeOverHeatBrakeDiscTemp());
	g_ecu_gw_20b.esp_cdd_active = ecu_gw_20_b_esp_cdd_active_encode(calc_ecu_GW_20B_ESP_CDD_Active());
	g_ecu_gw_20b.esp_cdd_available = ecu_gw_20_b_esp_cdd_available_encode(calc_ecu_GW_20B_ESP_CDD_Available());
	g_ecu_gw_20b.esp_vehicle_standstill = ecu_gw_20_b_esp_vehicle_standstill_encode(calc_ecu_GW_20B_ESP_VehicleStandstill());
	g_ecu_gw_20b.esp_vdc_active = ecu_gw_20_b_esp_vdc_active_encode(calc_ecu_GW_20B_ESP_VDCActive());
	g_ecu_gw_20b.esp_tcs_active = ecu_gw_20_b_esp_tcs_active_encode(calc_ecu_GW_20B_ESP_TCSActive());
	g_ecu_gw_20b.esp_only_abs_active = ecu_gw_20_b_esp_only_abs_active_encode(calc_ecu_GW_20B_ESP_OnlyABSActive());
	g_ecu_gw_20b.esp_qdcacc = ecu_gw_20_b_esp_qdcacc_encode(calc_ecu_GW_20B_ESP_QDCACC());
	g_ecu_gw_20b.esp_cdd_active_apa = ecu_gw_20_b_esp_cdd_active_apa_encode(calc_ecu_GW_20B_ESP_CDD_Active_APA());
	g_ecu_gw_20b.esp_cdd_available_apa = ecu_gw_20_b_esp_cdd_available_apa_encode(calc_ecu_GW_20B_ESP_CDD_Available_APA());
	g_ecu_gw_20b.esp_increase_pressure_req_ok = ecu_gw_20_b_esp_increase_pressure_req_ok_encode(calc_ecu_GW_20B_ESP_IncreasePressureReqOK());
	g_ecu_gw_20b.esp_hdc_status = ecu_gw_20_b_esp_hdc_status_encode(calc_ecu_GW_20B_ESP_HDC_STATUS());
	g_ecu_gw_20b.esp_hbb_active_status = ecu_gw_20_b_esp_hbb_active_status_encode(calc_ecu_GW_20B_ESP_HBBActiveStatus());
	g_ecu_gw_20b.esp_cdp_parking_active_for_acc = ecu_gw_20_b_esp_cdp_parking_active_for_acc_encode(calc_ecu_GW_20B_ESP_CDP_ParkingActiveForACC());
	g_ecu_gw_20b.esp_cdp_parking_avail_for_acc = ecu_gw_20_b_esp_cdp_parking_avail_for_acc_encode(calc_ecu_GW_20B_ESP_CDP_ParkingAvailForACC());
	g_ecu_gw_20b.ibcu_brake_disc_high_temp_warning = ecu_gw_20_b_ibcu_brake_disc_high_temp_warning_encode(calc_ecu_GW_20B_IBCU_BrakeDiscHighTempWarning());
	g_ecu_gw_20b.esp_prefillfor_apa_active = ecu_gw_20_b_esp_prefillfor_apa_active_encode(calc_ecu_GW_20B_ESP_PrefillforAPA_active());
	g_ecu_gw_20b.esp_prefillfor_apa_available = ecu_gw_20_b_esp_prefillfor_apa_available_encode(calc_ecu_GW_20B_ESP_PrefillforAPA_Available());
	g_ecu_gw_20b.ibcu_brk_pedopl_sts_gb = ecu_gw_20_b_ibcu_brk_pedopl_sts_gb_encode(calc_ecu_GW_20B_IBCU_BrkPedoplStsGb());
	g_ecu_gw_20b.ibcu_brk_pedl_sts_gb_vld = ecu_gw_20_b_ibcu_brk_pedl_sts_gb_vld_encode(calc_ecu_GW_20B_IBCU_BrkPedlStsGbVld());
	g_ecu_gw_20b.ibcu_precheck_status = ecu_gw_20_b_ibcu_precheck_status_encode(calc_ecu_GW_20B_IBCU_precheckStatus());
	g_ecu_gw_20b.esp_rolling_counter_277 = ecu_gw_20_b_esp_rolling_counter_277_encode(calc_ecu_GW_20B_ESP_RollingCounter_277());
	g_ecu_gw_20b.esp_crc_check_277 = ecu_gw_20_b_esp_crc_check_277_encode(calc_ecu_GW_20B_ESP_CRCCheck_277());
	g_ecu_gw_20b.esp_rolling_counter_20_b = ecu_gw_20_b_esp_rolling_counter_20_b_encode(calc_ecu_GW_20B_ESP_RollingCounter_20B());
	g_ecu_gw_20b.esp_crc_check_20_b = ecu_gw_20_b_esp_crc_check_20_b_encode(calc_ecu_GW_20B_ESP_CRCCheck_20B());
	ECU_GW_20B_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_24F (u8_t Direction)
{
	g_ecu_gw_24f.eps_elect_power_consumption = ecu_gw_24_f_eps_elect_power_consumption_encode(calc_ecu_GW_24F_EPS_ElectPowerConsumption());
	g_ecu_gw_24f.eps_apa_abortfeedback = ecu_gw_24_f_eps_apa_abortfeedback_encode(calc_ecu_GW_24F_EPS_APA_Abortfeedback());
	g_ecu_gw_24f.eps_mode_switch_st = ecu_gw_24_f_eps_mode_switch_st_encode(calc_ecu_GW_24F_EPS_ModeSwitchSt());
	g_ecu_gw_24f.eps_apa_epas_failed = ecu_gw_24_f_eps_apa_epas_failed_encode(calc_ecu_GW_24F_EPS_APA_EpasFAILED());
	g_ecu_gw_24f.eps_torq_sensor_status = ecu_gw_24_f_eps_torq_sensor_status_encode(calc_ecu_GW_24F_EPS_TorqSensorStatus());
	g_ecu_gw_24f.eps_steering_torque = ecu_gw_24_f_eps_steering_torque_encode(calc_ecu_GW_24F_EPS_SteeringTorque());
	g_ecu_gw_24f.eps_ldw_shake_lev_status = ecu_gw_24_f_eps_ldw_shake_lev_status_encode(calc_ecu_GW_24F_EPS_LDW_ShakeLevStatus());
	g_ecu_gw_24f.eps_apa_control_feedback = ecu_gw_24_f_eps_apa_control_feedback_encode(calc_ecu_GW_24F_EPS_APA_ControlFeedback());
	g_ecu_gw_24f.eps_iacc_abortreason = ecu_gw_24_f_eps_iacc_abortreason_encode(calc_ecu_GW_24F_EPS_IACC_abortreason());
	g_ecu_gw_24f.eps_system_st = ecu_gw_24_f_eps_system_st_encode(calc_ecu_GW_24F_EPS_SystemSt());
	g_ecu_gw_24f.eps_eps_failed = ecu_gw_24_f_eps_eps_failed_encode(calc_ecu_GW_24F_EPS_EPSFailed());
	g_ecu_gw_24f.eps_torque_assist_mode = ecu_gw_24_f_eps_torque_assist_mode_encode(calc_ecu_GW_24F_EPS_TorqueAssistMode());
	g_ecu_gw_24f.eps_concuss_availability_status = ecu_gw_24_f_eps_concuss_availability_status_encode(calc_ecu_GW_24F_EPS_ConcussAvailabilityStatus());
	g_ecu_gw_24f.eps_rolling_counter_24_f = ecu_gw_24_f_eps_rolling_counter_24_f_encode(calc_ecu_GW_24F_EPS_RollingCounter_24F());
	g_ecu_gw_24f.eps_crc_check_24_f = ecu_gw_24_f_eps_crc_check_24_f_encode(calc_ecu_GW_24F_EPS_CRCCheck_24F());
	ECU_GW_24F_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_28B (u8_t Direction)
{
	g_ecu_gw_28b.bcm_low_beam_status = ecu_gw_28_b_bcm_low_beam_status_encode(calc_ecu_GW_28B_BCM_LowBeamStatus());
	g_ecu_gw_28b.bcm_high_beam_status = ecu_gw_28_b_bcm_high_beam_status_encode(calc_ecu_GW_28B_BCM_HighBeamStatus());
	g_ecu_gw_28b.bcm_turn_light_switch_sts = ecu_gw_28_b_bcm_turn_light_switch_sts_encode(calc_ecu_GW_28B_BCM_TurnLightSwitchSts());
	g_ecu_gw_28b.bcm_mirror_adjust_sts = ecu_gw_28_b_bcm_mirror_adjust_sts_encode(calc_ecu_GW_28B_BCM_MirrorAdjustSts());
	g_ecu_gw_28b.bcm_lock_trigger = ecu_gw_28_b_bcm_lock_trigger_encode(calc_ecu_GW_28B_BCM_LockTrigger());
	g_ecu_gw_28b.bcm_driver_door_status = ecu_gw_28_b_bcm_driver_door_status_encode(calc_ecu_GW_28B_BCM_DriverDoorStatus());
	g_ecu_gw_28b.bcm_turn_indicator_left = ecu_gw_28_b_bcm_turn_indicator_left_encode(calc_ecu_GW_28B_BCM_TurnIndicatorLeft());
	g_ecu_gw_28b.bcm_turn_indicator_right = ecu_gw_28_b_bcm_turn_indicator_right_encode(calc_ecu_GW_28B_BCM_TurnIndicatorRight());
	g_ecu_gw_28b.bcm_hood_status = ecu_gw_28_b_bcm_hood_status_encode(calc_ecu_GW_28B_BCM_HoodStatus());
	g_ecu_gw_28b.peps_start_controlsignal = ecu_gw_28_b_peps_start_controlsignal_encode(calc_ecu_GW_28B_PEPS_StartControlsignal());
	g_ecu_gw_28b.bcm_trunk_release_trigger = ecu_gw_28_b_bcm_trunk_release_trigger_encode(calc_ecu_GW_28B_BCM_TrunkReleaseTrigger());
	g_ecu_gw_28b.peps_remote_start_req = ecu_gw_28_b_peps_remote_start_req_encode(calc_ecu_GW_28B_PEPS_RemoteStartReq());
	g_ecu_gw_28b.bcm_emergencylightstatus = ecu_gw_28_b_bcm_emergencylightstatus_encode(calc_ecu_GW_28B_BCM_emergencylightstatus());
	g_ecu_gw_28b.bcm_power_status_feedback = ecu_gw_28_b_bcm_power_status_feedback_encode(calc_ecu_GW_28B_BCM_PowerStatusFeedback());
	g_ecu_gw_28b.bcm_rear_defrosterstatus = ecu_gw_28_b_bcm_rear_defrosterstatus_encode(calc_ecu_GW_28B_BCM_RearDefrosterstatus());
	g_ecu_gw_28b.bcm_unlock_trigger = ecu_gw_28_b_bcm_unlock_trigger_encode(calc_ecu_GW_28B_BCM_UnlockTrigger());
	g_ecu_gw_28b.bcm_refuel_req = ecu_gw_28_b_bcm_refuel_req_encode(calc_ecu_GW_28B_BCM_RefuelReq());
	g_ecu_gw_28b.peps_shift_forbid_rq = ecu_gw_28_b_peps_shift_forbid_rq_encode(calc_ecu_GW_28B_PEPS_ShiftForbidRq());
	g_ecu_gw_28b.bcm_key_alarm_status = ecu_gw_28_b_bcm_key_alarm_status_encode(calc_ecu_GW_28B_BCM_KeyAlarmStatus());
	g_ecu_gw_28b.bcm_rolling_counter_28_b = ecu_gw_28_b_bcm_rolling_counter_28_b_encode(calc_ecu_GW_28B_BCM_RollingCounter_28B());
	g_ecu_gw_28b.bcm_crc_check_28_b = ecu_gw_28_b_bcm_crc_check_28_b_encode(calc_ecu_GW_28B_BCM_CRCCheck_28B());
	ECU_GW_28B_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2D1 (u8_t Direction)
{
	g_ecu_gw_2d1.peps_luggage_unlock_signal = ecu_gw_2_d1_peps_luggage_unlock_signal_encode(calc_ecu_GW_2D1_PEPS_LuggageUnlockSignal());
	g_ecu_gw_2d1.bcm_reverse_position = ecu_gw_2_d1_bcm_reverse_position_encode(calc_ecu_GW_2D1_BCM_ReversePosition());
	g_ecu_gw_2d1.bcm_brake_lamp_status = ecu_gw_2_d1_bcm_brake_lamp_status_encode(calc_ecu_GW_2D1_BCM_BrakeLampStatus());
	g_ecu_gw_2d1.bcm_trunk_door_status = ecu_gw_2_d1_bcm_trunk_door_status_encode(calc_ecu_GW_2D1_BCM_TrunkDoorStatus());
	g_ecu_gw_2d1.bcm_right_rear_door_status = ecu_gw_2_d1_bcm_right_rear_door_status_encode(calc_ecu_GW_2D1_BCM_RightRearDoorStatus());
	g_ecu_gw_2d1.bcm_passenger_door_status = ecu_gw_2_d1_bcm_passenger_door_status_encode(calc_ecu_GW_2D1_BCM_PassengerDoorStatus());
	ECU_GW_2D1_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2DE (u8_t Direction)
{
	g_ecu_gw_2de.ip_driver_lcdaled_sts = ecu_gw_2_de_ip_driver_lcdaled_sts_encode(calc_ecu_GW_2DE_IP_DriverLCDALEDSts());
	g_ecu_gw_2de.ip_passenger_lcdaled_sts = ecu_gw_2_de_ip_passenger_lcdaled_sts_encode(calc_ecu_GW_2DE_IP_PassengerLCDALEDSts());
	g_ecu_gw_2de.ip_dis_fail = ecu_gw_2_de_ip_dis_fail_encode(calc_ecu_GW_2DE_IP_DISFail());
	g_ecu_gw_2de.ip_q_dash_acc_fail = ecu_gw_2_de_ip_q_dash_acc_fail_encode(calc_ecu_GW_2DE_IP_QDashACCFail());
	g_ecu_gw_2de.ip_rolling_counter_2_de = ecu_gw_2_de_ip_rolling_counter_2_de_encode(calc_ecu_GW_2DE_IP_RollingCounter_2DE());
	g_ecu_gw_2de.ip_crc_check_2_de = ecu_gw_2_de_ip_crc_check_2_de_encode(calc_ecu_GW_2DE_IP_CRCCheck_2DE());
	ECU_GW_2DE_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2E6 (u8_t Direction)
{
	g_ecu_gw_2e6.ems_engine_intake_air_temp = ecu_gw_2_e6_ems_engine_intake_air_temp_encode(calc_ecu_GW_2E6_EMS_EngineIntakeAirTemp());
	g_ecu_gw_2e6.ems_coolt_t_err = ecu_gw_2_e6_ems_coolt_t_err_encode(calc_ecu_GW_2E6_EMS_CooltTErr());
	g_ecu_gw_2e6.ems_lo_batt_err = ecu_gw_2_e6_ems_lo_batt_err_encode(calc_ecu_GW_2E6_EMS_LoBattErr());
	g_ecu_gw_2e6.ems_catalyst_warm_up = ecu_gw_2_e6_ems_catalyst_warm_up_encode(calc_ecu_GW_2E6_EMS_CatalystWarmUp());
	g_ecu_gw_2e6.ems_general_denominator_status = ecu_gw_2_e6_ems_general_denominator_status_encode(calc_ecu_GW_2E6_EMS_GeneralDenominatorStatus());
	g_ecu_gw_2e6.ems_general_deno_status_valid = ecu_gw_2_e6_ems_general_deno_status_valid_encode(calc_ecu_GW_2E6_EMS_GeneralDenoStatusValid());
	g_ecu_gw_2e6.ems_first_ignition_cycle_counter = ecu_gw_2_e6_ems_first_ignition_cycle_counter_encode(calc_ecu_GW_2E6_EMS_FirstIgnitionCycleCounter());
	g_ecu_gw_2e6.ems_warm_up_cycle = ecu_gw_2_e6_ems_warm_up_cycle_encode(calc_ecu_GW_2E6_EMS_WarmUpCycle());
	g_ecu_gw_2e6.ems_driving_cycle = ecu_gw_2_e6_ems_driving_cycle_encode(calc_ecu_GW_2E6_EMS_DrivingCycle());
	g_ecu_gw_2e6.ems_eng_t_coolt = ecu_gw_2_e6_ems_eng_t_coolt_encode(calc_ecu_GW_2E6_EMS_EngTCoolt());
	g_ecu_gw_2e6.ems_lo_batt_u = ecu_gw_2_e6_ems_lo_batt_u_encode(calc_ecu_GW_2E6_EMS_LoBattU());
	g_ecu_gw_2e6.ems_coolreq = ecu_gw_2_e6_ems_coolreq_encode(calc_ecu_GW_2E6_EMS_Coolreq());
	g_ecu_gw_2e6.ems_altitude_factor_valid = ecu_gw_2_e6_ems_altitude_factor_valid_encode(calc_ecu_GW_2E6_EMS_AltitudeFactorValid());
	g_ecu_gw_2e6.ems_altitude_factor = ecu_gw_2_e6_ems_altitude_factor_encode(calc_ecu_GW_2E6_EMS_AltitudeFactor());
	g_ecu_gw_2e6.ems_sec_ignition_cycles_counter = ecu_gw_2_e6_ems_sec_ignition_cycles_counter_encode(calc_ecu_GW_2E6_EMS_SecIgnitionCyclesCounter());
	g_ecu_gw_2e6.ems_ignition_cycles_counter_valid = ecu_gw_2_e6_ems_ignition_cycles_counter_valid_encode(calc_ecu_GW_2E6_EMS_IgnitionCyclesCounterValid());
	g_ecu_gw_2e6.ems_rolling_counter_2_e6 = ecu_gw_2_e6_ems_rolling_counter_2_e6_encode(calc_ecu_GW_2E6_EMS_RollingCounter_2E6());
	g_ecu_gw_2e6.ems_crc_check_2_e6 = ecu_gw_2_e6_ems_crc_check_2_e6_encode(calc_ecu_GW_2E6_EMS_CRCCheck_2E6());
	ECU_GW_2E6_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_31A (u8_t Direction)
{
	g_ecu_acc_31a.acc_aeb_target_lng_range = ecu_acc_31_a_acc_aeb_target_lng_range_encode(calc_ecu_ACC_31A_ACC_AEBTargetLngRange());
	g_ecu_acc_31a.acc_aeb_target_rel_speed = ecu_acc_31_a_acc_aeb_target_rel_speed_encode(calc_ecu_ACC_31A_ACC_AEBTargetRelSpeed());
	g_ecu_acc_31a.acc_aeb_target_lat_range = ecu_acc_31_a_acc_aeb_target_lat_range_encode(calc_ecu_ACC_31A_ACC_AEBTargetLatRange());
	g_ecu_acc_31a.acc_elk_alert = ecu_acc_31_a_acc_elk_alert_encode(calc_ecu_ACC_31A_ACC_ELKAlert());
	g_ecu_acc_31a.acc_aeb_status = ecu_acc_31_a_acc_aeb_status_encode(calc_ecu_ACC_31A_ACC_AEBStatus());
	g_ecu_acc_31a.acc_aeb_text_info = ecu_acc_31_a_acc_aeb_text_info_encode(calc_ecu_ACC_31A_ACC_AEBTextInfo());
	g_ecu_acc_31a.acc_aeb_targetmode = ecu_acc_31_a_acc_aeb_targetmode_encode(calc_ecu_ACC_31A_ACC_AEBTargetmode());
	g_ecu_acc_31a.acc_voiceinfo = ecu_acc_31_a_acc_voiceinfo_encode(calc_ecu_ACC_31A_ACC_Voiceinfo());
	g_ecu_acc_31a.acc_f_radar_failure_status = ecu_acc_31_a_acc_f_radar_failure_status_encode(calc_ecu_ACC_31A_ACC_FRadarFailureStatus());
	g_ecu_acc_31a.acc_rolling_counter_36_d = ecu_acc_31_a_acc_rolling_counter_36_d_encode(calc_ecu_ACC_31A_ACC_RollingCounter_36D());
	g_ecu_acc_31a.acc_crc_check_36_d = ecu_acc_31_a_acc_crc_check_36_d_encode(calc_ecu_ACC_31A_ACC_CRCCheck_36D());
	g_ecu_acc_31a.acc_r_lane_marker_type = ecu_acc_31_a_acc_r_lane_marker_type_encode(calc_ecu_ACC_31A_ACC_RLaneMarkerType());
	g_ecu_acc_31a.acc_las_mode_selection_status = ecu_acc_31_a_acc_las_mode_selection_status_encode(calc_ecu_ACC_31A_ACC_LASModeSelectionStatus());
	g_ecu_acc_31a.acc_iacchwa_enable = ecu_acc_31_a_acc_iacchwa_enable_encode(calc_ecu_ACC_31A_ACC_IACCHWAEnable());
	g_ecu_acc_31a.acc_las_warning_mode_selection_sts = ecu_acc_31_a_acc_las_warning_mode_selection_sts_encode(calc_ecu_ACC_31A_ACC_LASWarningModeSelectionSts());
	g_ecu_acc_31a.acc_host_lane_right_status = ecu_acc_31_a_acc_host_lane_right_status_encode(calc_ecu_ACC_31A_ACC_HostLaneRightStatus());
	g_ecu_acc_31a.acc_host_lane_left_status = ecu_acc_31_a_acc_host_lane_left_status_encode(calc_ecu_ACC_31A_ACC_HostLaneLeftStatus());
	g_ecu_acc_31a.acc_l_lane_marker_type = ecu_acc_31_a_acc_l_lane_marker_type_encode(calc_ecu_ACC_31A_ACC_LLaneMarkerType());
	g_ecu_acc_31a.acc_road_curvature = ecu_acc_31_a_acc_road_curvature_encode(calc_ecu_ACC_31A_ACC_RoadCurvature());
	g_ecu_acc_31a.acc_road_curvature_near = ecu_acc_31_a_acc_road_curvature_near_encode(calc_ecu_ACC_31A_ACC_RoadCurvatureNear());
	g_ecu_acc_31a.acc_road_curvature_far = ecu_acc_31_a_acc_road_curvature_far_encode(calc_ecu_ACC_31A_ACC_RoadCurvatureFar());
	g_ecu_acc_31a.acc_lane_change_status = ecu_acc_31_a_acc_lane_change_status_encode(calc_ecu_ACC_31A_ACC_LaneChangeStatus());
	g_ecu_acc_31a.acc_rolling_counter_30_a = ecu_acc_31_a_acc_rolling_counter_30_a_encode(calc_ecu_ACC_31A_ACC_RollingCounter_30A());
	g_ecu_acc_31a.acc_crc_check_30_a = ecu_acc_31_a_acc_crc_check_30_a_encode(calc_ecu_ACC_31A_ACC_CRCCheck_30A());
	g_ecu_acc_31a.acc_iacchwa_mode = ecu_acc_31_a_acc_iacchwa_mode_encode(calc_ecu_ACC_31A_ACC_IACCHWAMode());
	g_ecu_acc_31a.acc_iacchwa_text_info_for_driver = ecu_acc_31_a_acc_iacchwa_text_info_for_driver_encode(calc_ecu_ACC_31A_ACC_IACCHWATextInfoForDriver());
	g_ecu_acc_31a.acc_driver_hands_off_status = ecu_acc_31_a_acc_driver_hands_off_status_encode(calc_ecu_ACC_31A_ACC_DriverHandsOffStatus());
	g_ecu_acc_31a.acc_target_based_lateral_control = ecu_acc_31_a_acc_target_based_lateral_control_encode(calc_ecu_ACC_31A_ACC_TargetBasedLateralControl());
	g_ecu_acc_31a.acc_emergency_lighting_request = ecu_acc_31_a_acc_emergency_lighting_request_encode(calc_ecu_ACC_31A_ACC_EmergencyLightingRequest());
	g_ecu_acc_31a.acc_ll_lane_detection = ecu_acc_31_a_acc_ll_lane_detection_encode(calc_ecu_ACC_31A_ACC_LLLaneDetection());
	g_ecu_acc_31a.adc_ecas_mode_req = ecu_acc_31_a_adc_ecas_mode_req_encode(calc_ecu_ACC_31A_ADC_EcasModeReq());
	g_ecu_acc_31a.acc_rr_lane_detection = ecu_acc_31_a_acc_rr_lane_detection_encode(calc_ecu_ACC_31A_ACC_RRLaneDetection());
	g_ecu_acc_31a.acc_high_beam_control = ecu_acc_31_a_acc_high_beam_control_encode(calc_ecu_ACC_31A_ACC_HighBeamControl());
	g_ecu_acc_31a.acc_rolling_counter_30_d = ecu_acc_31_a_acc_rolling_counter_30_d_encode(calc_ecu_ACC_31A_ACC_RollingCounter_30D());
	g_ecu_acc_31a.acc_crc_check_30_d = ecu_acc_31_a_acc_crc_check_30_d_encode(calc_ecu_ACC_31A_ACC_CRCCheck_30D());
	g_ecu_acc_31a.acc_elk_mode = ecu_acc_31_a_acc_elk_mode_encode(calc_ecu_ACC_31A_ACC_ELKMode());
	g_ecu_acc_31a.acc_elk_intervention_mode = ecu_acc_31_a_acc_elk_intervention_mode_encode(calc_ecu_ACC_31A_ACC_ELKInterventionMode());
	g_ecu_acc_31a.acc_elk_enable_status = ecu_acc_31_a_acc_elk_enable_status_encode(calc_ecu_ACC_31A_ACC_ELKEnableStatus());
	g_ecu_acc_31a.acc_lat_path_heading_angle = ecu_acc_31_a_acc_lat_path_heading_angle_encode(calc_ecu_ACC_31A_ACC_LatPathHeadingAngle());
	g_ecu_acc_31a.acc_lng_take_over_req_reason = ecu_acc_31_a_acc_lng_take_over_req_reason_encode(calc_ecu_ACC_31A_ACC_LngTakeOverReqReason());
	g_ecu_acc_31a.acc_rolling_counter_367 = ecu_acc_31_a_acc_rolling_counter_367_encode(calc_ecu_ACC_31A_ACC_RollingCounter_367());
	g_ecu_acc_31a.acc_crc_check_367 = ecu_acc_31_a_acc_crc_check_367_encode(calc_ecu_ACC_31A_ACC_CRCCheck_367());
	g_ecu_acc_31a.acc_aeb_target_lat_rel_speed = ecu_acc_31_a_acc_aeb_target_lat_rel_speed_encode(calc_ecu_ACC_31A_ACC_AEBTargetLatRelSpeed());
	ECU_ACC_31A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_355 (u8_t Direction)
{
	g_ecu_gw_355.ems_cruise_switch_on_off = ecu_gw_355_ems_cruise_switch_on_off_encode(calc_ecu_GW_355_EMS_CruiseSwitchOnOff());
	g_ecu_gw_355.ems_cruise_switch_resume = ecu_gw_355_ems_cruise_switch_resume_encode(calc_ecu_GW_355_EMS_CruiseSwitchResume());
	g_ecu_gw_355.ems_cruise_switch_cancel = ecu_gw_355_ems_cruise_switch_cancel_encode(calc_ecu_GW_355_EMS_CruiseSwitchCANCEL());
	g_ecu_gw_355.ems_cruise_switch_set = ecu_gw_355_ems_cruise_switch_set_encode(calc_ecu_GW_355_EMS_CruiseSwitchSET());
	g_ecu_gw_355.ems_cruise_distance = ecu_gw_355_ems_cruise_distance_encode(calc_ecu_GW_355_EMS_CruiseDistance());
	g_ecu_gw_355.ems_rolling_counter_355 = ecu_gw_355_ems_rolling_counter_355_encode(calc_ecu_GW_355_EMS_RollingCounter_355());
	g_ecu_gw_355.ems_crc_check_355 = ecu_gw_355_ems_crc_check_355_encode(calc_ecu_GW_355_EMS_CRCCheck_355());
	ECU_GW_355_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3AF (u8_t Direction)
{
	g_ecu_gw_3af.hu_slope_gradient_10m = ecu_gw_3_af_hu_slope_gradient_10m_encode(calc_ecu_GW_3AF_HU_SlopeGradient_10m());
	g_ecu_gw_3af.hu_slope_gradient_20m = ecu_gw_3_af_hu_slope_gradient_20m_encode(calc_ecu_GW_3AF_HU_SlopeGradient_20m());
	g_ecu_gw_3af.hu_slope_gradient_30m = ecu_gw_3_af_hu_slope_gradient_30m_encode(calc_ecu_GW_3AF_HU_SlopeGradient_30m());
	g_ecu_gw_3af.hu_slope_gradient_40m = ecu_gw_3_af_hu_slope_gradient_40m_encode(calc_ecu_GW_3AF_HU_SlopeGradient_40m());
	g_ecu_gw_3af.hu_slope_gradient_50m = ecu_gw_3_af_hu_slope_gradient_50m_encode(calc_ecu_GW_3AF_HU_SlopeGradient_50m());
	g_ecu_gw_3af.hu_slope_gradient_100m = ecu_gw_3_af_hu_slope_gradient_100m_encode(calc_ecu_GW_3AF_HU_SlopeGradient_100m());
	g_ecu_gw_3af.hu_interval_velocity_info = ecu_gw_3_af_hu_interval_velocity_info_encode(calc_ecu_GW_3AF_HU_IntervalVelocityInfo());
	g_ecu_gw_3af.hu_interval_velocity_dis = ecu_gw_3_af_hu_interval_velocity_dis_encode(calc_ecu_GW_3AF_HU_IntervalVelocityDis());
	g_ecu_gw_3af.hu_accident_prone = ecu_gw_3_af_hu_accident_prone_encode(calc_ecu_GW_3AF_HU_AccidentProne());
	g_ecu_gw_3af.hu_accident_prone_distance = ecu_gw_3_af_hu_accident_prone_distance_encode(calc_ecu_GW_3AF_HU_AccidentProneDistance());
	g_ecu_gw_3af.hu_bridge_info = ecu_gw_3_af_hu_bridge_info_encode(calc_ecu_GW_3AF_HU_BridgeInfo());
	g_ecu_gw_3af.hu_bridge_dis = ecu_gw_3_af_hu_bridge_dis_encode(calc_ecu_GW_3AF_HU_BridgeDis());
	g_ecu_gw_3af.hu_service_road = ecu_gw_3_af_hu_service_road_encode(calc_ecu_GW_3AF_HU_ServiceRoad());
	g_ecu_gw_3af.hu_weather_type = ecu_gw_3_af_hu_weather_type_encode(calc_ecu_GW_3AF_HU_WeatherType());
	g_ecu_gw_3af.hu_nav_country_code = ecu_gw_3_af_hu_nav_country_code_encode(calc_ecu_GW_3AF_HU_NavCountryCode());
	g_ecu_gw_3af.hu_nav_speed_limit = ecu_gw_3_af_hu_nav_speed_limit_encode(calc_ecu_GW_3AF_HU_NavSpeedLimit());
	g_ecu_gw_3af.hu_enter_ramp_info = ecu_gw_3_af_hu_enter_ramp_info_encode(calc_ecu_GW_3AF_HU_EnterRampInfo());
	g_ecu_gw_3af.hu_nav_speed_limit_units = ecu_gw_3_af_hu_nav_speed_limit_units_encode(calc_ecu_GW_3AF_HU_NavSpeedLimitUnits());
	g_ecu_gw_3af.hu_nav_speed_limit_status = ecu_gw_3_af_hu_nav_speed_limit_status_encode(calc_ecu_GW_3AF_HU_NavSpeedLimitStatus());
	g_ecu_gw_3af.hu_ramp_info = ecu_gw_3_af_hu_ramp_info_encode(calc_ecu_GW_3AF_HU_RampInfo());
	g_ecu_gw_3af.hu_nav_status = ecu_gw_3_af_hu_nav_status_encode(calc_ecu_GW_3AF_HU_NavStatus());
	g_ecu_gw_3af.hu_enter_curve_info = ecu_gw_3_af_hu_enter_curve_info_encode(calc_ecu_GW_3AF_HU_EnterCurveInfo());
	g_ecu_gw_3af.hu_nav_current_road_type = ecu_gw_3_af_hu_nav_current_road_type_encode(calc_ecu_GW_3AF_HU_NavCurrentRoadType());
	g_ecu_gw_3af.hu_nav_speed_limit_type = ecu_gw_3_af_hu_nav_speed_limit_type_encode(calc_ecu_GW_3AF_HU_NavSpeedLimitType());
	g_ecu_gw_3af.hu_curve_distance = ecu_gw_3_af_hu_curve_distance_encode(calc_ecu_GW_3AF_HU_CurveDistance());
	g_ecu_gw_3af.hu_ramp_distance = ecu_gw_3_af_hu_ramp_distance_encode(calc_ecu_GW_3AF_HU_RampDistance());
	g_ecu_gw_3af.hu_novice_enable = ecu_gw_3_af_hu_novice_enable_encode(calc_ecu_GW_3AF_HU_Novice_Enable());
	g_ecu_gw_3af.hu_rolling_counter_3_af_3 = ecu_gw_3_af_hu_rolling_counter_3_af_3_encode(calc_ecu_GW_3AF_HU_RollingCounter_3AF_3());
	g_ecu_gw_3af.hu_crc_check_3_af_3 = ecu_gw_3_af_hu_crc_check_3_af_3_encode(calc_ecu_GW_3AF_HU_CRCCheck_3AF_3());
	g_ecu_gw_3af.hu_speed_limit_distance = ecu_gw_3_af_hu_speed_limit_distance_encode(calc_ecu_GW_3AF_HU_SpeedLimitDistance());
	g_ecu_gw_3af.hu_rolling_counter_3_bb = ecu_gw_3_af_hu_rolling_counter_3_bb_encode(calc_ecu_GW_3AF_HU_RollingCounter_3BB());
	g_ecu_gw_3af.hu_crc_check_3_bb = ecu_gw_3_af_hu_crc_check_3_bb_encode(calc_ecu_GW_3AF_HU_CRCCheck_3BB());
	g_ecu_gw_3af.hu_service_road_dis = ecu_gw_3_af_hu_service_road_dis_encode(calc_ecu_GW_3AF_HU_ServiceRoadDis());
	g_ecu_gw_3af.hu_lane_type_id1 = ecu_gw_3_af_hu_lane_type_id1_encode(calc_ecu_GW_3AF_HU_LaneType_ID1());
	g_ecu_gw_3af.hu_lane_type_id2 = ecu_gw_3_af_hu_lane_type_id2_encode(calc_ecu_GW_3AF_HU_LaneType_ID2());
	g_ecu_gw_3af.hu_lane_type_id3 = ecu_gw_3_af_hu_lane_type_id3_encode(calc_ecu_GW_3AF_HU_LaneType_ID3());
	g_ecu_gw_3af.hu_lane_type_id4 = ecu_gw_3_af_hu_lane_type_id4_encode(calc_ecu_GW_3AF_HU_LaneType_ID4());
	g_ecu_gw_3af.hu_lane_type_id5 = ecu_gw_3_af_hu_lane_type_id5_encode(calc_ecu_GW_3AF_HU_LaneType_ID5());
	g_ecu_gw_3af.hu_lane_type_id6 = ecu_gw_3_af_hu_lane_type_id6_encode(calc_ecu_GW_3AF_HU_LaneType_ID6());
	g_ecu_gw_3af.hu_ehp_heart_flag = ecu_gw_3_af_hu_ehp_heart_flag_encode(calc_ecu_GW_3AF_HU_EHPHeartFlag());
	g_ecu_gw_3af.hu_ehr_heart_flag = ecu_gw_3_af_hu_ehr_heart_flag_encode(calc_ecu_GW_3AF_HU_EHRHeartFlag());
	g_ecu_gw_3af.hu_adas_posn_pathldx = ecu_gw_3_af_hu_adas_posn_pathldx_encode(calc_ecu_GW_3AF_HU_ADAS_Posn_Pathldx());
	g_ecu_gw_3af.hu_adas_posn_offset = ecu_gw_3_af_hu_adas_posn_offset_encode(calc_ecu_GW_3AF_HU_ADAS_Posn_Offset());
	g_ecu_gw_3af.hu_rolling_counter_3_af = ecu_gw_3_af_hu_rolling_counter_3_af_encode(calc_ecu_GW_3AF_HU_RollingCounter_3AF());
	g_ecu_gw_3af.hu_crc_check_3_af = ecu_gw_3_af_hu_crc_check_3_af_encode(calc_ecu_GW_3AF_HU_CRCCheck_3AF());
	ECU_GW_3AF_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3B3 (u8_t Direction)
{
	g_ecu_gw_3b3.bcm_door_handle_time_difference = ecu_gw_3_b3_bcm_door_handle_time_difference_encode(calc_ecu_GW_3B3_BCM_DoorHandle_TimeDifference());
	g_ecu_gw_3b3.bcm_passenge_door_handle_status = ecu_gw_3_b3_bcm_passenge_door_handle_status_encode(calc_ecu_GW_3B3_BCM_PassengeDoorHandleStatus());
	g_ecu_gw_3b3.bcm_right_rear_door_handle_status = ecu_gw_3_b3_bcm_right_rear_door_handle_status_encode(calc_ecu_GW_3B3_BCM_RightRearDoorHandleStatus());
	g_ecu_gw_3b3.bcm_rear_foglamp_status = ecu_gw_3_b3_bcm_rear_foglamp_status_encode(calc_ecu_GW_3B3_BCM_RearFoglampStatus());
	g_ecu_gw_3b3.bcm_brake_lamp_error = ecu_gw_3_b3_bcm_brake_lamp_error_encode(calc_ecu_GW_3B3_BCM_BrakeLampError());
	g_ecu_gw_3b3.bcm_right_rear_foglamp_error = ecu_gw_3_b3_bcm_right_rear_foglamp_error_encode(calc_ecu_GW_3B3_BCM_RightRearFoglampError());
	g_ecu_gw_3b3.bcm_left_rear_foglamp_error = ecu_gw_3_b3_bcm_left_rear_foglamp_error_encode(calc_ecu_GW_3B3_BCM_LeftRearFoglampError());
	g_ecu_gw_3b3.bcm_rear_position_lamp_error = ecu_gw_3_b3_bcm_rear_position_lamp_error_encode(calc_ecu_GW_3B3_BCM_RearPositionLampError());
	g_ecu_gw_3b3.lcm_reverse_light_sts = ecu_gw_3_b3_lcm_reverse_light_sts_encode(calc_ecu_GW_3B3_LCM_ReverseLightSts());
	g_ecu_gw_3b3.bcm_reverse_lamp_error = ecu_gw_3_b3_bcm_reverse_lamp_error_encode(calc_ecu_GW_3B3_BCM_ReverseLampError());
	g_ecu_gw_3b3.bcm_chm_lamp_error = ecu_gw_3_b3_bcm_chm_lamp_error_encode(calc_ecu_GW_3B3_BCM_CHMLampError());
	ECU_GW_3B3_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3BD (u8_t Direction)
{
	g_ecu_gw_3bd.hu_csla_enable = ecu_gw_3_bd_hu_csla_enable_encode(calc_ecu_GW_3BD_HU_CSLAEnable());
	g_ecu_gw_3bd.hu_hwa_enable = ecu_gw_3_bd_hu_hwa_enable_encode(calc_ecu_GW_3BD_HU_HWAEnable());
	g_ecu_gw_3bd.hu_irlc_enable = ecu_gw_3_bd_hu_irlc_enable_encode(calc_ecu_GW_3BD_HU_IRLCEnable());
	g_ecu_gw_3bd.hu_elk_enable = ecu_gw_3_bd_hu_elk_enable_encode(calc_ecu_GW_3BD_HU_ELKEnable());
	g_ecu_gw_3bd.hu_lane_change_req = ecu_gw_3_bd_hu_lane_change_req_encode(calc_ecu_GW_3BD_HU_LaneChangeReq());
	g_ecu_gw_3bd.hu_ess_enable = ecu_gw_3_bd_hu_ess_enable_encode(calc_ecu_GW_3BD_HU_ESSEnable());
	g_ecu_gw_3bd.hu_tla_enable = ecu_gw_3_bd_hu_tla_enable_encode(calc_ecu_GW_3BD_HU_TLAEnable());
	g_ecu_gw_3bd.hu_ads_road_voice_enable = ecu_gw_3_bd_hu_ads_road_voice_enable_encode(calc_ecu_GW_3BD_HU_ADSRoadVoiceEnable());
	g_ecu_gw_3bd.hu_ads_rescue_confirm = ecu_gw_3_bd_hu_ads_rescue_confirm_encode(calc_ecu_GW_3BD_HU_ADSRescueConfirm());
	g_ecu_gw_3bd.hu_udlc_enable = ecu_gw_3_bd_hu_udlc_enable_encode(calc_ecu_GW_3BD_HU_UDLCEnable());
	g_ecu_gw_3bd.hu_transparent_value_car_request = ecu_gw_3_bd_hu_transparent_value_car_request_encode(calc_ecu_GW_3BD_HU_TransparentValueCarRequest());
	g_ecu_gw_3bd.hu_3_davm_req = ecu_gw_3_bd_hu_3_davm_req_encode(calc_ecu_GW_3BD_HU_3DAVMReq());
	g_ecu_gw_3bd.hu_ads_lane_change_voice_enable = ecu_gw_3_bd_hu_ads_lane_change_voice_enable_encode(calc_ecu_GW_3BD_HU_ADSLaneChangeVoiceEnable());
	g_ecu_gw_3bd.hu_ads_safe_voice_enable = ecu_gw_3_bd_hu_ads_safe_voice_enable_encode(calc_ecu_GW_3BD_HU_ADSSafeVoiceEnable());
	g_ecu_gw_3bd.hu_rolling_counter_394 = ecu_gw_3_bd_hu_rolling_counter_394_encode(calc_ecu_GW_3BD_HU_RollingCounter_394());
	g_ecu_gw_3bd.hu_crc_check_394 = ecu_gw_3_bd_hu_crc_check_394_encode(calc_ecu_GW_3BD_HU_CRCCheck_394());
	g_ecu_gw_3bd.hu_avm_map_display_feedback = ecu_gw_3_bd_hu_avm_map_display_feedback_encode(calc_ecu_GW_3BD_HU_AVMMapDisplayFeedback());
	g_ecu_gw_3bd.hu_rebroadcast_req = ecu_gw_3_bd_hu_rebroadcast_req_encode(calc_ecu_GW_3BD_HU_RebroadcastReq());
	g_ecu_gw_3bd.hu_360_av_mdetection_request = ecu_gw_3_bd_hu_360_av_mdetection_request_encode(calc_ecu_GW_3BD_HU_360AVMdetectionRequest());
	g_ecu_gw_3bd.hu_real_time_req = ecu_gw_3_bd_hu_real_time_req_encode(calc_ecu_GW_3BD_HU_RealTimeReq());
	g_ecu_gw_3bd.hu_dvr_edit_selected = ecu_gw_3_bd_hu_dvr_edit_selected_encode(calc_ecu_GW_3BD_HU_DVREditSelected());
	g_ecu_gw_3bd.hu_vision_angle_req = ecu_gw_3_bd_hu_vision_angle_req_encode(calc_ecu_GW_3BD_HU_VisionAngleReq());
	g_ecu_gw_3bd.hu_navi_icon_number_2 = ecu_gw_3_bd_hu_navi_icon_number_2_encode(calc_ecu_GW_3BD_HU_NaviIconNumber_2());
	g_ecu_gw_3bd.hu_auto_view_set = ecu_gw_3_bd_hu_auto_view_set_encode(calc_ecu_GW_3BD_HU_AutoViewSet());
	g_ecu_gw_3bd.hu_sd_capacity = ecu_gw_3_bd_hu_sd_capacity_encode(calc_ecu_GW_3BD_HU_SDCapacity());
	g_ecu_gw_3bd.hu_seeoffanimation = ecu_gw_3_bd_hu_seeoffanimation_encode(calc_ecu_GW_3BD_HU_Seeoffanimation());
	g_ecu_gw_3bd.hu_tuid_req = ecu_gw_3_bd_hu_tuid_req_encode(calc_ecu_GW_3BD_HU_TUIDReq());
	g_ecu_gw_3bd.hu_register_status = ecu_gw_3_bd_hu_register_status_encode(calc_ecu_GW_3BD_HU_RegisterStatus());
	g_ecu_gw_3bd.hu_surronding_monitor_done = ecu_gw_3_bd_hu_surronding_monitor_done_encode(calc_ecu_GW_3BD_HU_SurrondingMonitorDone());
	g_ecu_gw_3bd.hu_bcall_req = ecu_gw_3_bd_hu_bcall_req_encode(calc_ecu_GW_3BD_HU_BcallReq());
	g_ecu_gw_3bd.hu_dvr_error_record = ecu_gw_3_bd_hu_dvr_error_record_encode(calc_ecu_GW_3BD_HU_DVRErrorRecord());
	g_ecu_gw_3bd.hu_dvr_system_imprint = ecu_gw_3_bd_hu_dvr_system_imprint_encode(calc_ecu_GW_3BD_HU_DVRSystemImprint());
	g_ecu_gw_3bd.hu_navi_distance = ecu_gw_3_bd_hu_navi_distance_encode(calc_ecu_GW_3BD_HU_NaviDistance());
	g_ecu_gw_3bd.hu_navi_icon_number = ecu_gw_3_bd_hu_navi_icon_number_encode(calc_ecu_GW_3BD_HU_NaviIconNumber());
	g_ecu_gw_3bd.hu_vc_vr = ecu_gw_3_bd_hu_vc_vr_encode(calc_ecu_GW_3BD_HU_VC_VR());
	g_ecu_gw_3bd.hu_hud_pos_adjust_inc = ecu_gw_3_bd_hu_hud_pos_adjust_inc_encode(calc_ecu_GW_3BD_HU_HUDPosAdjustInc());
	g_ecu_gw_3bd.hu_hud_pos_adjust_dec = ecu_gw_3_bd_hu_hud_pos_adjust_dec_encode(calc_ecu_GW_3BD_HU_HUDPosAdjustDec());
	g_ecu_gw_3bd.hu_compass = ecu_gw_3_bd_hu_compass_encode(calc_ecu_GW_3BD_HU_Compass());
	g_ecu_gw_3bd.hu_apa_active = ecu_gw_3_bd_hu_apa_active_encode(calc_ecu_GW_3BD_HU_APAActive());
	g_ecu_gw_3bd.hu_remote_disp_sts = ecu_gw_3_bd_hu_remote_disp_sts_encode(calc_ecu_GW_3BD_HU_RemoteDispSts());
	g_ecu_gw_3bd.hu_laeb_enable = ecu_gw_3_bd_hu_laeb_enable_encode(calc_ecu_GW_3BD_HU_LAEBEnable());
	g_ecu_gw_3bd.hu_current_media_info = ecu_gw_3_bd_hu_current_media_info_encode(calc_ecu_GW_3BD_HU_CurrentMedia_Info());
	g_ecu_gw_3bd.hu_apa_remote_disp_sts = ecu_gw_3_bd_hu_apa_remote_disp_sts_encode(calc_ecu_GW_3BD_HU_APARemoteDispSts());
	g_ecu_gw_3bd.hu_rads_switch = ecu_gw_3_bd_hu_rads_switch_encode(calc_ecu_GW_3BD_HU_RADSSwitch());
	g_ecu_gw_3bd.hu_language_sync = ecu_gw_3_bd_hu_language_sync_encode(calc_ecu_GW_3BD_HU_LanguageSync());
	g_ecu_gw_3bd.hu_asp_remind_enable = ecu_gw_3_bd_hu_asp_remind_enable_encode(calc_ecu_GW_3BD_HU_ASPRemindEnable());
	g_ecu_gw_3bd.hu_pac_mode_select = ecu_gw_3_bd_hu_pac_mode_select_encode(calc_ecu_GW_3BD_HU_PACModeSelect());
	g_ecu_gw_3bd.hu_ext_remote_detect_upload_status = ecu_gw_3_bd_hu_ext_remote_detect_upload_status_encode(calc_ecu_GW_3BD_HU_EXT_RemoteDetectUploadStatus());
	g_ecu_gw_3bd.hu_asp_mode_select = ecu_gw_3_bd_hu_asp_mode_select_encode(calc_ecu_GW_3BD_HU_ASPModeSelect());
	g_ecu_gw_3bd.hu_cross_parking_mode_set = ecu_gw_3_bd_hu_cross_parking_mode_set_encode(calc_ecu_GW_3BD_HU_CrossParkingModeSet());
	g_ecu_gw_3bd.hu_asp_switch = ecu_gw_3_bd_hu_asp_switch_encode(calc_ecu_GW_3BD_HU_ASPSwitch());
	g_ecu_gw_3bd.hu_apa_mode_select = ecu_gw_3_bd_hu_apa_mode_select_encode(calc_ecu_GW_3BD_HU_APAModeSelect());
	g_ecu_gw_3bd.hu_rear_foglamp_set = ecu_gw_3_bd_hu_rear_foglamp_set_encode(calc_ecu_GW_3BD_HU_RearFoglampSet());
	g_ecu_gw_3bd.hu_auto_head_li_set = ecu_gw_3_bd_hu_auto_head_li_set_encode(calc_ecu_GW_3BD_HU_AutoHeadLiSet());
	g_ecu_gw_3bd.hu_body_colour_set = ecu_gw_3_bd_hu_body_colour_set_encode(calc_ecu_GW_3BD_HU_BodyColourSet());
	g_ecu_gw_3bd.hu_avmdvr_replay_mode_req = ecu_gw_3_bd_hu_avmdvr_replay_mode_req_encode(calc_ecu_GW_3BD_HU_AVMDVRReplayModeReq());
	g_ecu_gw_3bd.hu_wheel_hub_set = ecu_gw_3_bd_hu_wheel_hub_set_encode(calc_ecu_GW_3BD_HU_WheelHubSet());
	g_ecu_gw_3bd.hu_license_number_set = ecu_gw_3_bd_hu_license_number_set_encode(calc_ecu_GW_3BD_HU_LicenseNumberSet());
	g_ecu_gw_3bd.hu_license_number = ecu_gw_3_bd_hu_license_number_encode(calc_ecu_GW_3BD_HU_LicenseNumber());
	g_ecu_gw_3bd.hu_license_number_check_sum = ecu_gw_3_bd_hu_license_number_check_sum_encode(calc_ecu_GW_3BD_HU_LicenseNumberCheckSum());
	g_ecu_gw_3bd.hu_apa_theme_change = ecu_gw_3_bd_hu_apa_theme_change_encode(calc_ecu_GW_3BD_HU_APAThemeChange());
	g_ecu_gw_3bd.hu_dvr_update_req = ecu_gw_3_bd_hu_dvr_update_req_encode(calc_ecu_GW_3BD_HU_DVRUpdateReq());
	ECU_GW_3BD_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3C4 (u8_t Direction)
{
	g_ecu_gw_3c4.hu_enter_tunnel_info = ecu_gw_3_c4_hu_enter_tunnel_info_encode(calc_ecu_GW_3C4_HU_EnterTunnelInfo());
	g_ecu_gw_3c4.hu_road_curvature = ecu_gw_3_c4_hu_road_curvature_encode(calc_ecu_GW_3C4_HU_RoadCurvature());
	g_ecu_gw_3c4.hu_tunnel_distance = ecu_gw_3_c4_hu_tunnel_distance_encode(calc_ecu_GW_3C4_HU_TunnelDistance());
	g_ecu_gw_3c4.hu_road_curvature_far = ecu_gw_3_c4_hu_road_curvature_far_encode(calc_ecu_GW_3C4_HU_RoadCurvatureFar());
	g_ecu_gw_3c4.hu_tunnel_length = ecu_gw_3_c4_hu_tunnel_length_encode(calc_ecu_GW_3C4_HU_TunnelLength());
	g_ecu_gw_3c4.hu_nav_guigance_status = ecu_gw_3_c4_hu_nav_guigance_status_encode(calc_ecu_GW_3C4_HU_NavGuiganceStatus());
	g_ecu_gw_3c4.hu_rolling_counter_3_b8 = ecu_gw_3_c4_hu_rolling_counter_3_b8_encode(calc_ecu_GW_3C4_HU_RollingCounter_3B8());
	g_ecu_gw_3c4.hu_crc_check_3_b8 = ecu_gw_3_c4_hu_crc_check_3_b8_encode(calc_ecu_GW_3C4_HU_CRCCheck_3B8());
	g_ecu_gw_3c4.hu_ramp_side = ecu_gw_3_c4_hu_ramp_side_encode(calc_ecu_GW_3C4_HU_RampSide());
	g_ecu_gw_3c4.hu_forward_road_type = ecu_gw_3_c4_hu_forward_road_type_encode(calc_ecu_GW_3C4_HU_ForwardRoadType());
	g_ecu_gw_3c4.hu_lane_cnt = ecu_gw_3_c4_hu_lane_cnt_encode(calc_ecu_GW_3C4_HU_LaneCnt());
	g_ecu_gw_3c4.hu_toll_info = ecu_gw_3_c4_hu_toll_info_encode(calc_ecu_GW_3C4_HU_TollInfo());
	g_ecu_gw_3c4.hu_toll_dis = ecu_gw_3_c4_hu_toll_dis_encode(calc_ecu_GW_3C4_HU_TollDis());
	g_ecu_gw_3c4.hu_road_traffic_flow = ecu_gw_3_c4_hu_road_traffic_flow_encode(calc_ecu_GW_3C4_HU_Road_TrafficFlow());
	g_ecu_gw_3c4.hu_map_data_update_status = ecu_gw_3_c4_hu_map_data_update_status_encode(calc_ecu_GW_3C4_HU_MapDataUpdateStatus());
	g_ecu_gw_3c4.hu_rolling_counter_3_c2 = ecu_gw_3_c4_hu_rolling_counter_3_c2_encode(calc_ecu_GW_3C4_HU_RollingCounter_3C2());
	g_ecu_gw_3c4.hu_crc_check_3_c2 = ecu_gw_3_c4_hu_crc_check_3_c2_encode(calc_ecu_GW_3C4_HU_CRCCheck_3C2());
	g_ecu_gw_3c4.hu_to_numchange_of_lanes_dist = ecu_gw_3_c4_hu_to_numchange_of_lanes_dist_encode(calc_ecu_GW_3C4_HU_To_NumchangeOfLanes_Dist());
	g_ecu_gw_3c4.hu_lane_changtype = ecu_gw_3_c4_hu_lane_changtype_encode(calc_ecu_GW_3C4_HU_Lane_Changtype());
	g_ecu_gw_3c4.hu_road_curvature_10m = ecu_gw_3_c4_hu_road_curvature_10m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_10m());
	g_ecu_gw_3c4.hu_road_curvature_20m = ecu_gw_3_c4_hu_road_curvature_20m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_20m());
	g_ecu_gw_3c4.hu_road_curvature_30m = ecu_gw_3_c4_hu_road_curvature_30m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_30m());
	g_ecu_gw_3c4.hu_road_curvature_40m = ecu_gw_3_c4_hu_road_curvature_40m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_40m());
	g_ecu_gw_3c4.hu_rolling_counter_3_c4_2 = ecu_gw_3_c4_hu_rolling_counter_3_c4_2_encode(calc_ecu_GW_3C4_HU_RollingCounter_3C4_2());
	g_ecu_gw_3c4.hu_crc_check_3_c4_2 = ecu_gw_3_c4_hu_crc_check_3_c4_2_encode(calc_ecu_GW_3C4_HU_CRCCheck_3C4_2());
	g_ecu_gw_3c4.hu_road_curvature_50m = ecu_gw_3_c4_hu_road_curvature_50m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_50m());
	g_ecu_gw_3c4.hu_road_curvature_60m = ecu_gw_3_c4_hu_road_curvature_60m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_60m());
	g_ecu_gw_3c4.hu_road_curvature_70m = ecu_gw_3_c4_hu_road_curvature_70m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_70m());
	g_ecu_gw_3c4.hu_road_curvature_80m = ecu_gw_3_c4_hu_road_curvature_80m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_80m());
	g_ecu_gw_3c4.hu_road_curvature_90m = ecu_gw_3_c4_hu_road_curvature_90m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_90m());
	g_ecu_gw_3c4.hu_rolling_counter_3_c6 = ecu_gw_3_c4_hu_rolling_counter_3_c6_encode(calc_ecu_GW_3C4_HU_RollingCounter_3C6());
	g_ecu_gw_3c4.hu_crc_check_3_c6 = ecu_gw_3_c4_hu_crc_check_3_c6_encode(calc_ecu_GW_3C4_HU_CRCCheck_3C6());
	g_ecu_gw_3c4.hu_road_curvature_100m = ecu_gw_3_c4_hu_road_curvature_100m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_100m());
	g_ecu_gw_3c4.hu_road_curvature_300m = ecu_gw_3_c4_hu_road_curvature_300m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_300m());
	g_ecu_gw_3c4.hu_road_curvature_400m = ecu_gw_3_c4_hu_road_curvature_400m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_400m());
	g_ecu_gw_3c4.hu_road_curvature_600m = ecu_gw_3_c4_hu_road_curvature_600m_encode(calc_ecu_GW_3C4_HU_RoadCurvature_600m());
	g_ecu_gw_3c4.hu_map_match_status = ecu_gw_3_c4_hu_map_match_status_encode(calc_ecu_GW_3C4_HU_MapMatchStatus());
	g_ecu_gw_3c4.hu_rolling_counter_3_c7 = ecu_gw_3_c4_hu_rolling_counter_3_c7_encode(calc_ecu_GW_3C4_HU_RollingCounter_3C7());
	g_ecu_gw_3c4.hu_crc_check_3_c7 = ecu_gw_3_c4_hu_crc_check_3_c7_encode(calc_ecu_GW_3C4_HU_CRCCheck_3C7());
	g_ecu_gw_3c4.hu_rolling_counter_3_c4 = ecu_gw_3_c4_hu_rolling_counter_3_c4_encode(calc_ecu_GW_3C4_HU_RollingCounter_3C4());
	g_ecu_gw_3c4.hu_crc_check_3_c4 = ecu_gw_3_c4_hu_crc_check_3_c4_encode(calc_ecu_GW_3C4_HU_CRCCheck_3C4());
	ECU_GW_3C4_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3FD (u8_t Direction)
{
	g_ecu_gw_3fd.bcm_drive_mode = ecu_gw_3_fd_bcm_drive_mode_encode(calc_ecu_GW_3FD_BCM_DriveMode());
	g_ecu_gw_3fd.bcm_eps_torq_syn_status = ecu_gw_3_fd_bcm_eps_torq_syn_status_encode(calc_ecu_GW_3FD_BCM_EPSTorqSYNStatus());
	g_ecu_gw_3fd.bcm_drv_mod_sw_sts = ecu_gw_3_fd_bcm_drv_mod_sw_sts_encode(calc_ecu_GW_3FD_BCM_DrvModSwSts());
	g_ecu_gw_3fd.bcm_eps_torque_mode = ecu_gw_3_fd_bcm_eps_torque_mode_encode(calc_ecu_GW_3FD_BCM_EPSTorqueMode());
	g_ecu_gw_3fd.bcm_power_manage_level = ecu_gw_3_fd_bcm_power_manage_level_encode(calc_ecu_GW_3FD_BCM_PowerManageLevel());
	g_ecu_gw_3fd.bcm_rear_foglamp_status_fb = ecu_gw_3_fd_bcm_rear_foglamp_status_fb_encode(calc_ecu_GW_3FD_BCM_RearFoglampStatusFB());
	g_ecu_gw_3fd.bcm_aut_head_li_sts = ecu_gw_3_fd_bcm_aut_head_li_sts_encode(calc_ecu_GW_3FD_BCM_AutHeadLiSts());
	g_ecu_gw_3fd.bcm_front_windshield_warm_status = ecu_gw_3_fd_bcm_front_windshield_warm_status_encode(calc_ecu_GW_3FD_BCM_FrontWindshieldWarmStatus());
	g_ecu_gw_3fd.bcm_switch_dimmerlevel = ecu_gw_3_fd_bcm_switch_dimmerlevel_encode(calc_ecu_GW_3FD_BCM_SwitchDimmerlevel());
	g_ecu_gw_3fd.bcm_rolling_counter_3_fd = ecu_gw_3_fd_bcm_rolling_counter_3_fd_encode(calc_ecu_GW_3FD_BCM_RollingCounter_3FD());
	g_ecu_gw_3fd.bcm_crc_check_3_fd = ecu_gw_3_fd_bcm_crc_check_3_fd_encode(calc_ecu_GW_3FD_BCM_CRCCheck_3FD());
	ECU_GW_3FD_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3FF (u8_t Direction)
{
	g_ecu_gw_3ff.bcm_music_play_request_signal = ecu_gw_3_ff_bcm_music_play_request_signal_encode(calc_ecu_GW_3FF_BCM_MusicPlayRequestSignal());
	g_ecu_gw_3ff.bcm_music_light_mode_select_sts = ecu_gw_3_ff_bcm_music_light_mode_select_sts_encode(calc_ecu_GW_3FF_BCM_MusicLightModeSelectSts());
	g_ecu_gw_3ff.bcm_follow_me_turnon = ecu_gw_3_ff_bcm_follow_me_turnon_encode(calc_ecu_GW_3FF_BCM_FollowMeTurnon());
	g_ecu_gw_3ff.peps_welcome_light_staus = ecu_gw_3_ff_peps_welcome_light_staus_encode(calc_ecu_GW_3FF_PEPS_WelcomeLightStaus());
	g_ecu_gw_3ff.bcm_musiclightfeedback = ecu_gw_3_ff_bcm_musiclightfeedback_encode(calc_ecu_GW_3FF_BCM_Musiclightfeedback());
	g_ecu_gw_3ff.bcm_front_position_lamp_error = ecu_gw_3_ff_bcm_front_position_lamp_error_encode(calc_ecu_GW_3FF_BCM_FrontPositionLampError());
	g_ecu_gw_3ff.bcm_auto_headlight_sts = ecu_gw_3_ff_bcm_auto_headlight_sts_encode(calc_ecu_GW_3FF_BCM_AutoHeadlightSts());
	g_ecu_gw_3ff.bcm_front_foglamp_status = ecu_gw_3_ff_bcm_front_foglamp_status_encode(calc_ecu_GW_3FF_BCM_FrontFoglampStatus());
	g_ecu_gw_3ff.bcm_position_lamp_status = ecu_gw_3_ff_bcm_position_lamp_status_encode(calc_ecu_GW_3FF_BCM_PositionLampStatus());
	g_ecu_gw_3ff.bcm_right_front_foglamp_error = ecu_gw_3_ff_bcm_right_front_foglamp_error_encode(calc_ecu_GW_3FF_BCM_RightFrontFoglampError());
	g_ecu_gw_3ff.bcm_left_front_foglamp_error = ecu_gw_3_ff_bcm_left_front_foglamp_error_encode(calc_ecu_GW_3FF_BCM_LeftFrontFoglampError());
	g_ecu_gw_3ff.bcm_right_low_beam_error = ecu_gw_3_ff_bcm_right_low_beam_error_encode(calc_ecu_GW_3FF_BCM_RightLowBeamError());
	g_ecu_gw_3ff.bcm_left_low_beam_error = ecu_gw_3_ff_bcm_left_low_beam_error_encode(calc_ecu_GW_3FF_BCM_LeftLowBeamError());
	g_ecu_gw_3ff.bcm_right_day_lamp_error = ecu_gw_3_ff_bcm_right_day_lamp_error_encode(calc_ecu_GW_3FF_BCM_RightDayLampError());
	g_ecu_gw_3ff.bcm_left_day_lamp_error = ecu_gw_3_ff_bcm_left_day_lamp_error_encode(calc_ecu_GW_3FF_BCM_LeftDayLampError());
	g_ecu_gw_3ff.bcm_turn_indicator_right_error = ecu_gw_3_ff_bcm_turn_indicator_right_error_encode(calc_ecu_GW_3FF_BCM_TurnIndicatorRightError());
	g_ecu_gw_3ff.bcm_turn_indicator_left_error = ecu_gw_3_ff_bcm_turn_indicator_left_error_encode(calc_ecu_GW_3FF_BCM_TurnIndicatorLeftError());
	g_ecu_gw_3ff.bcm_position_lamp_switch_status = ecu_gw_3_ff_bcm_position_lamp_switch_status_encode(calc_ecu_GW_3FF_BCM_PositionLampSwitchStatus());
	g_ecu_gw_3ff.lcm_drl_sts = ecu_gw_3_ff_lcm_drl_sts_encode(calc_ecu_GW_3FF_LCM_DRLSts());
	g_ecu_gw_3ff.bcm_follow_me_home_light_set_status = ecu_gw_3_ff_bcm_follow_me_home_light_set_status_encode(calc_ecu_GW_3FF_BCM_FollowMeHomeLightSetStatus());
	g_ecu_gw_3ff.bcm_floor_lamp_status = ecu_gw_3_ff_bcm_floor_lamp_status_encode(calc_ecu_GW_3FF_BCM_FloorLampStatus());
	g_ecu_gw_3ff.bcm_high_beam_lamp_error = ecu_gw_3_ff_bcm_high_beam_lamp_error_encode(calc_ecu_GW_3FF_BCM_HighBeamLampError());
	g_ecu_gw_3ff.bcm_rolling_counter_3_ff = ecu_gw_3_ff_bcm_rolling_counter_3_ff_encode(calc_ecu_GW_3FF_BCM_RollingCounter_3FF());
	g_ecu_gw_3ff.bcm_crc_check_3_ff = ecu_gw_3_ff_bcm_crc_check_3_ff_encode(calc_ecu_GW_3FF_BCM_CRCCheck_3FF());
	ECU_GW_3FF_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_51E (u8_t Direction)
{
	g_ecu_gw_51e.tpms_lf_temperature_warning = ecu_gw_51_e_tpms_lf_temperature_warning_encode(calc_ecu_GW_51E_TPMS_LFTemperatureWarning());
	g_ecu_gw_51e.tpms_rf_temperature_warning = ecu_gw_51_e_tpms_rf_temperature_warning_encode(calc_ecu_GW_51E_TPMS_RFTemperatureWarning());
	g_ecu_gw_51e.tpms_rr_temperature_warning = ecu_gw_51_e_tpms_rr_temperature_warning_encode(calc_ecu_GW_51E_TPMS_RRTemperatureWarning());
	g_ecu_gw_51e.tpms_lr_temperature_warning = ecu_gw_51_e_tpms_lr_temperature_warning_encode(calc_ecu_GW_51E_TPMS_LRTemperatureWarning());
	g_ecu_gw_51e.tpms_tire_position = ecu_gw_51_e_tpms_tire_position_encode(calc_ecu_GW_51E_TPMS_TirePosition());
	g_ecu_gw_51e.tpms_tire_temperature = ecu_gw_51_e_tpms_tire_temperature_encode(calc_ecu_GW_51E_TPMS_TireTemperature());
	g_ecu_gw_51e.tpms_lf_leakage_warning = ecu_gw_51_e_tpms_lf_leakage_warning_encode(calc_ecu_GW_51E_TPMS_LFLeakageWarning());
	g_ecu_gw_51e.tpms_rf_leakage_warning = ecu_gw_51_e_tpms_rf_leakage_warning_encode(calc_ecu_GW_51E_TPMS_RFLeakageWarning());
	g_ecu_gw_51e.tpms_rr_leakage_warning = ecu_gw_51_e_tpms_rr_leakage_warning_encode(calc_ecu_GW_51E_TPMS_RRLeakageWarning());
	g_ecu_gw_51e.tpms_lr_leakage_warning = ecu_gw_51_e_tpms_lr_leakage_warning_encode(calc_ecu_GW_51E_TPMS_LRLeakageWarning());
	g_ecu_gw_51e.tpms_suggestion = ecu_gw_51_e_tpms_suggestion_encode(calc_ecu_GW_51E_TPMS_Suggestion());
	g_ecu_gw_51e.tpms_commendatorypressure = ecu_gw_51_e_tpms_commendatorypressure_encode(calc_ecu_GW_51E_TPMS_Commendatorypressure());
	g_ecu_gw_51e.tpms_aerate_flag = ecu_gw_51_e_tpms_aerate_flag_encode(calc_ecu_GW_51E_TPMS_AerateFlag());
	g_ecu_gw_51e.bcm_rolling_counter_51_e = ecu_gw_51_e_bcm_rolling_counter_51_e_encode(calc_ecu_GW_51E_BCM_RollingCounter_51E());
	g_ecu_gw_51e.bcm_crc_check_51_e = ecu_gw_51_e_bcm_crc_check_51_e_encode(calc_ecu_GW_51E_BCM_CRCCheck_51E());
	ECU_GW_51E_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_693 (u8_t Direction)
{
	g_ecu_acc_693.acc_dtc1_high_byte = ecu_acc_693_acc_dtc1_high_byte_encode(calc_ecu_ACC_693_ACC_DTC1_HighByte());
	g_ecu_acc_693.acc_dtc1_midd_byte = ecu_acc_693_acc_dtc1_midd_byte_encode(calc_ecu_ACC_693_ACC_DTC1_MiddByte());
	g_ecu_acc_693.acc_dtc1_low_byte = ecu_acc_693_acc_dtc1_low_byte_encode(calc_ecu_ACC_693_ACC_DTC1_LowByte());
	g_ecu_acc_693.acc_dtc1_status = ecu_acc_693_acc_dtc1_status_encode(calc_ecu_ACC_693_ACC_DTC1_Status());
	g_ecu_acc_693.acc_dtc2_high_byte = ecu_acc_693_acc_dtc2_high_byte_encode(calc_ecu_ACC_693_ACC_DTC2_HighByte());
	g_ecu_acc_693.acc_dtc2_midd_byte = ecu_acc_693_acc_dtc2_midd_byte_encode(calc_ecu_ACC_693_ACC_DTC2_MiddByte());
	g_ecu_acc_693.acc_dtc2_low_byte = ecu_acc_693_acc_dtc2_low_byte_encode(calc_ecu_ACC_693_ACC_DTC2_LowByte());
	g_ecu_acc_693.acc_dtc2_status = ecu_acc_693_acc_dtc2_status_encode(calc_ecu_ACC_693_ACC_DTC2_Status());
	ECU_ACC_693_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_694 (u8_t Direction)
{
	g_ecu_las_694.las_dtc1_high_byte = ecu_las_694_las_dtc1_high_byte_encode(calc_ecu_LAS_694_LAS_DTC1_HighByte());
	g_ecu_las_694.las_dtc1_midd_byte = ecu_las_694_las_dtc1_midd_byte_encode(calc_ecu_LAS_694_LAS_DTC1_MiddByte());
	g_ecu_las_694.las_dtc1_low_byte = ecu_las_694_las_dtc1_low_byte_encode(calc_ecu_LAS_694_LAS_DTC1_LowByte());
	g_ecu_las_694.las_dtc1_status = ecu_las_694_las_dtc1_status_encode(calc_ecu_LAS_694_LAS_DTC1_Status());
	g_ecu_las_694.las_dtc2_high_byte = ecu_las_694_las_dtc2_high_byte_encode(calc_ecu_LAS_694_LAS_DTC2_HighByte());
	g_ecu_las_694.las_dtc2_midd_byte = ecu_las_694_las_dtc2_midd_byte_encode(calc_ecu_LAS_694_LAS_DTC2_MiddByte());
	g_ecu_las_694.las_dtc2_low_byte = ecu_las_694_las_dtc2_low_byte_encode(calc_ecu_LAS_694_LAS_DTC2_LowByte());
	g_ecu_las_694.las_dtc2_status = ecu_las_694_las_dtc2_status_encode(calc_ecu_LAS_694_LAS_DTC2_Status());
	ECU_LAS_694_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_452 (u8_t Direction)
{
	g_ecu_las_452.nm_message452 = ecu_las_452_nm_message452_encode(calc_ecu_LAS_452_NM_message452());
	ECU_LAS_452_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );
}
void on_Timer_ecu_GW_28C (u8_t Direction)
{
	g_ecu_gw_28c.gw_mfs_set_reduce_switch_signal = ecu_gw_28_c_gw_mfs_set_reduce_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_SETReduce_switch_signal());
	g_ecu_gw_28c.gw_mfs_res_plus_switch_signal = ecu_gw_28_c_gw_mfs_res_plus_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_RESPlus_switch_signal());
	g_ecu_gw_28c.gw_mfs_cancle_switch_signal = ecu_gw_28_c_gw_mfs_cancle_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_Cancle_switch_signal());
	g_ecu_gw_28c.gw_mfs_crusie_switch_signal = ecu_gw_28_c_gw_mfs_crusie_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_Crusie_switch_signal());
	g_ecu_gw_28c.gw_mfs_eps_switch = ecu_gw_28_c_gw_mfs_eps_switch_encode(calc_ecu_GW_28C_GW_MFS_EPS_switch());
	g_ecu_gw_28c.gw_mfs_iac_cenable_switch_signal = ecu_gw_28_c_gw_mfs_iac_cenable_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_IACCenable_switch_signal());
	g_ecu_gw_28c.gw_mfs_lim_switch_signal = ecu_gw_28_c_gw_mfs_lim_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_LIM_switch_signal());
	g_ecu_gw_28c.gw_mfs_dist_switch_signal = ecu_gw_28_c_gw_mfs_dist_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_DIST_switch_signal());
	g_ecu_gw_28c.gw_mfs_hod_system_status = ecu_gw_28_c_gw_mfs_hod_system_status_encode(calc_ecu_GW_28C_GW_MFS_HODSystemStatus());
	g_ecu_gw_28c.gw_mfs_handsoff_detect_result = ecu_gw_28_c_gw_mfs_handsoff_detect_result_encode(calc_ecu_GW_28C_GW_MFS_handsoffDetectResult());
	g_ecu_gw_28c.gw_mfs_dist_plus_switch_signal = ecu_gw_28_c_gw_mfs_dist_plus_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_DISTPlus_switch_signal());
	g_ecu_gw_28c.gw_mfs_dist_reduce_switch_signal = ecu_gw_28_c_gw_mfs_dist_reduce_switch_signal_encode(calc_ecu_GW_28C_GW_MFS_DISTReduce_switch_signal());
	g_ecu_gw_28c.gw_mfs_hod_calibrated_status = ecu_gw_28_c_gw_mfs_hod_calibrated_status_encode(calc_ecu_GW_28C_GW_MFS_HODCalibratedStatus());
	g_ecu_gw_28c.gw_mfs_hod_lin_status = ecu_gw_28_c_gw_mfs_hod_lin_status_encode(calc_ecu_GW_28C_GW_MFS_HODLinStatus());
	g_ecu_gw_28c.gw_mfs_hod_app_status = ecu_gw_28_c_gw_mfs_hod_app_status_encode(calc_ecu_GW_28C_GW_MFS_HODAppStatus());
	g_ecu_gw_28c.gw_mfs_handsoff_ability_detect = ecu_gw_28_c_gw_mfs_handsoff_ability_detect_encode(calc_ecu_GW_28C_GW_MFS_handsoffAbilityDetect());
	g_ecu_gw_28c.gw_mfs_hod_senser_status = ecu_gw_28_c_gw_mfs_hod_senser_status_encode(calc_ecu_GW_28C_GW_MFS_HODSenserStatus());
	g_ecu_gw_28c.gw_mfs_ers_reduce_switch = ecu_gw_28_c_gw_mfs_ers_reduce_switch_encode(calc_ecu_GW_28C_GW_MFS_ERSReduce_switch());
	g_ecu_gw_28c.gw_mfs_ers_plus_switch = ecu_gw_28_c_gw_mfs_ers_plus_switch_encode(calc_ecu_GW_28C_GW_MFS_ERSPlus_switch());
	g_ecu_gw_28c.gw_mfs_diag_info_sw_28_c = ecu_gw_28_c_gw_mfs_diag_info_sw_28_c_encode(calc_ecu_GW_28C_GW_MFS_DiagInfoSW_28C());
	g_ecu_gw_28c.gw_mfs_gearshift_plus_switch = ecu_gw_28_c_gw_mfs_gearshift_plus_switch_encode(calc_ecu_GW_28C_GW_MFS_GearshiftPlus_switch());
	g_ecu_gw_28c.gw_mfs_gearshift_reduce_switch = ecu_gw_28_c_gw_mfs_gearshift_reduce_switch_encode(calc_ecu_GW_28C_GW_MFS_GearshiftReduce_switch());
	g_ecu_gw_28c.gw_mfs_rolling_counter_28_c = ecu_gw_28_c_gw_mfs_rolling_counter_28_c_encode(calc_ecu_GW_28C_GW_MFS_RollingCounter_28C());
	g_ecu_gw_28c.gw_mfs_crc_check_28_c = ecu_gw_28_c_gw_mfs_crc_check_28_c_encode(calc_ecu_GW_28C_GW_MFS_CRCCheck_28C());
	ECU_GW_28C_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_331 (u8_t Direction)
{
	g_ecu_gw_331.tcu_failure_lamp = ecu_gw_331_tcu_failure_lamp_encode(calc_ecu_GW_331_TCU_FailureLamp());
	g_ecu_gw_331.tcu_trans_temp_warning = ecu_gw_331_tcu_trans_temp_warning_encode(calc_ecu_GW_331_TCU_TransTempWarning());
	g_ecu_gw_331.tcu_coolant_fan_request = ecu_gw_331_tcu_coolant_fan_request_encode(calc_ecu_GW_331_TCU_CoolantFanRequest());
	g_ecu_gw_331.tcu_trans_fluid_temp = ecu_gw_331_tcu_trans_fluid_temp_encode(calc_ecu_GW_331_TCU_TransFluidTemp());
	g_ecu_gw_331.tcu_k0_clutch_exit_oil_temp = ecu_gw_331_tcu_k0_clutch_exit_oil_temp_encode(calc_ecu_GW_331_TCU_K0ClutchExitOilTemp());
	g_ecu_gw_331.tcu_gear_for_display = ecu_gw_331_tcu_gear_for_display_encode(calc_ecu_GW_331_TCU_GearForDisplay());
	g_ecu_gw_331.tcu_rotor_acutal_cooling_flow = ecu_gw_331_tcu_rotor_acutal_cooling_flow_encode(calc_ecu_GW_331_TCU_RotorAcutalCoolingFlow());
	g_ecu_gw_331.tcu_park_rel_a_posn_ip_req = ecu_gw_331_tcu_park_rel_a_posn_ip_req_encode(calc_ecu_GW_331_TCU_ParkRelAPosnIPReq());
	g_ecu_gw_331.tcu_park_rel_m_posn_ip_req = ecu_gw_331_tcu_park_rel_m_posn_ip_req_encode(calc_ecu_GW_331_TCU_ParkRelMPosnIPReq());
	g_ecu_gw_331.tcu_park_select_ip_req = ecu_gw_331_tcu_park_select_ip_req_encode(calc_ecu_GW_331_TCU_ParkSelectIPReq());
	g_ecu_gw_331.tcu_esl_fault_ip_req = ecu_gw_331_tcu_esl_fault_ip_req_encode(calc_ecu_GW_331_TCU_ESLFaultIPReq());
	g_ecu_gw_331.tcu_arc_fault_ip_req = ecu_gw_331_tcu_arc_fault_ip_req_encode(calc_ecu_GW_331_TCU_ARCFaultIPReq());
	g_ecu_gw_331.tcu_powerplant_status_ip_req = ecu_gw_331_tcu_powerplant_status_ip_req_encode(calc_ecu_GW_331_TCU_PowerplantStatusIPReq());
	g_ecu_gw_331.tcu_trans_fault_level = ecu_gw_331_tcu_trans_fault_level_encode(calc_ecu_GW_331_TCU_TransFaultLevel());
	g_ecu_gw_331.tcu_rolling_counter_338 = ecu_gw_331_tcu_rolling_counter_338_encode(calc_ecu_GW_331_TCU_RollingCounter_338());
	g_ecu_gw_331.tcu_crc_check_338 = ecu_gw_331_tcu_crc_check_338_encode(calc_ecu_GW_331_TCU_CRCCheck_338());
	ECU_GW_331_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_1AF (u8_t Direction)
{
	g_ecu_gw_1af.tcu_stl_kfailure = ecu_gw_1_af_tcu_stl_kfailure_encode(calc_ecu_GW_1AF_TCU_STLKfailure());
	g_ecu_gw_1af.tcu_actual_driving_gear_valid = ecu_gw_1_af_tcu_actual_driving_gear_valid_encode(calc_ecu_GW_1AF_TCU_ActualDrivingGearValid());
	g_ecu_gw_1af.tcu_shift_postion_valid = ecu_gw_1_af_tcu_shift_postion_valid_encode(calc_ecu_GW_1AF_TCU_ShiftPostionValid());
	g_ecu_gw_1af.tcu_actual_driving_gear = ecu_gw_1_af_tcu_actual_driving_gear_encode(calc_ecu_GW_1AF_TCU_ActualDrivingGear());
	g_ecu_gw_1af.tcu_gear_shift_position = ecu_gw_1_af_tcu_gear_shift_position_encode(calc_ecu_GW_1AF_TCU_GearShiftPosition());
	g_ecu_gw_1af.tcu_actual_preselect_gear = ecu_gw_1_af_tcu_actual_preselect_gear_encode(calc_ecu_GW_1AF_TCU_ActualPreselectGear());
	g_ecu_gw_1af.tcu_input_shaft_speed = ecu_gw_1_af_tcu_input_shaft_speed_encode(calc_ecu_GW_1AF_TCU_InputShaftSpeed());
	g_ecu_gw_1af.tcu_tho_state = ecu_gw_1_af_tcu_tho_state_encode(calc_ecu_GW_1AF_TCU_THOState());
	g_ecu_gw_1af.tcu_gear_ratio = ecu_gw_1_af_tcu_gear_ratio_encode(calc_ecu_GW_1AF_TCU_GearRatio());
	g_ecu_gw_1af.tcu_tip_switch_signal = ecu_gw_1_af_tcu_tip_switch_signal_encode(calc_ecu_GW_1AF_TCU_TipSwitchSignal());
	g_ecu_gw_1af.tcu_rolling_counter_1_a8 = ecu_gw_1_af_tcu_rolling_counter_1_a8_encode(calc_ecu_GW_1AF_TCU_RollingCounter_1A8());
	g_ecu_gw_1af.tcu_crc_check_1_a8 = ecu_gw_1_af_tcu_crc_check_1_a8_encode(calc_ecu_GW_1AF_TCU_CRCCheck_1A8());
	ECU_GW_1AF_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_320 (u8_t Direction)
{
	g_ecu_gw_320.gw_ot_amode_chks = ecu_gw_320_gw_ot_amode_chks_encode(calc_ecu_GW_320_GW_OTAmode_Chks());
	g_ecu_gw_320.gw_dcan_diag_sts = ecu_gw_320_gw_dcan_diag_sts_encode(calc_ecu_GW_320_GW_DCANDiagSts());
	g_ecu_gw_320.gw_gateway_failure_flag = ecu_gw_320_gw_gateway_failure_flag_encode(calc_ecu_GW_320_GW_GatewayFailureFlag());
	g_ecu_gw_320.gw_ot_amode_cntr = ecu_gw_320_gw_ot_amode_cntr_encode(calc_ecu_GW_320_GW_OTAmode_Cntr());
	g_ecu_gw_320.gw_ads_sec_oc_verify_failure_flag = ecu_gw_320_gw_ads_sec_oc_verify_failure_flag_encode(calc_ecu_GW_320_GW_ADSSecOCVerifyFailureFlag());
	g_ecu_gw_320.gw_reset_req = ecu_gw_320_gw_reset_req_encode(calc_ecu_GW_320_GW_ResetReq());
	g_ecu_gw_320.gw_ot_amode = ecu_gw_320_gw_ot_amode_encode(calc_ecu_GW_320_GW_OTAmode());
	ECU_GW_320_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_39A (u8_t Direction)
{
	g_ecu_las_39a.las_tsr_speed_limit_type = ecu_las_39_a_las_tsr_speed_limit_type_encode(calc_ecu_LAS_39A_LAS_TSRSpeedLimitType());
	g_ecu_las_39a.las_overspeed_visual_warning = ecu_las_39_a_las_overspeed_visual_warning_encode(calc_ecu_LAS_39A_LAS_OverspeedVisualWarning());
	g_ecu_las_39a.las_overspeed_sound_warning = ecu_las_39_a_las_overspeed_sound_warning_encode(calc_ecu_LAS_39A_LAS_OverspeedSoundWarning());
	g_ecu_las_39a.las_overspeed_warning_enable_status = ecu_las_39_a_las_overspeed_warning_enable_status_encode(calc_ecu_LAS_39A_LAS_OverspeedWarningEnableStatus());
	g_ecu_las_39a.las_overspeed_warning_offset = ecu_las_39_a_las_overspeed_warning_offset_encode(calc_ecu_LAS_39A_LAS_OverspeedWarningOffset());
	g_ecu_las_39a.las_hma_light_distribution = ecu_las_39_a_las_hma_light_distribution_encode(calc_ecu_LAS_39A_LAS_HMALightDistribution());
	g_ecu_las_39a.las_hma_enable_status = ecu_las_39_a_las_hma_enable_status_encode(calc_ecu_LAS_39A_LAS_HMAEnableStatus());
	g_ecu_las_39a.las_front_camera_calibration_status = ecu_las_39_a_las_front_camera_calibration_status_encode(calc_ecu_LAS_39A_LAS_FrontCameraCalibrationStatus());
	g_ecu_las_39a.las_front_camera_failure_status = ecu_las_39_a_las_front_camera_failure_status_encode(calc_ecu_LAS_39A_LAS_FrontCameraFailureStatus());
	g_ecu_las_39a.las_tsr_enable = ecu_las_39_a_las_tsr_enable_encode(calc_ecu_LAS_39A_LAS_TSREnable());
	g_ecu_las_39a.las_overspeed_sound_warning_en_st = ecu_las_39_a_las_overspeed_sound_warning_en_st_encode(calc_ecu_LAS_39A_LAS_OverspeedSoundWarningEnSt());
	g_ecu_las_39a.las_tsr_status = ecu_las_39_a_las_tsr_status_encode(calc_ecu_LAS_39A_LAS_TSRStatus());
	g_ecu_las_39a.las_tsr_host_spd_limit = ecu_las_39_a_las_tsr_host_spd_limit_encode(calc_ecu_LAS_39A_LAS_TSRHostSpdLimit());
	g_ecu_las_39a.las_hma_status = ecu_las_39_a_las_hma_status_encode(calc_ecu_LAS_39A_LAS_HMAStatus());
	g_ecu_las_39a.las_tsr_host_spd_limit_units = ecu_las_39_a_las_tsr_host_spd_limit_units_encode(calc_ecu_LAS_39A_LAS_TSRHostSpdLimitUnits());
	g_ecu_las_39a.las_rolling_counter_332 = ecu_las_39_a_las_rolling_counter_332_encode(calc_ecu_LAS_39A_LAS_RollingCounter_332());
	g_ecu_las_39a.las_crc_check_332 = ecu_las_39_a_las_crc_check_332_encode(calc_ecu_LAS_39A_LAS_CRCCheck_332());
	g_ecu_las_39a.las_rolling_counter_3_d4 = ecu_las_39_a_las_rolling_counter_3_d4_encode(calc_ecu_LAS_39A_LAS_RollingCounter_3D4());
	g_ecu_las_39a.las_crc_check_3_d4 = ecu_las_39_a_las_crc_check_3_d4_encode(calc_ecu_LAS_39A_LAS_CRCCheck_3D4());
	g_ecu_las_39a.las_rolling_counter_3_c0 = ecu_las_39_a_las_rolling_counter_3_c0_encode(calc_ecu_LAS_39A_LAS_RollingCounter_3C0());
	g_ecu_las_39a.las_crc_check_3_c0 = ecu_las_39_a_las_crc_check_3_c0_encode(calc_ecu_LAS_39A_LAS_CRCCheck_3C0());
	g_ecu_las_39a.las_rolling_counter_37_d = ecu_las_39_a_las_rolling_counter_37_d_encode(calc_ecu_LAS_39A_LAS_RollingCounter_37D());
	g_ecu_las_39a.las_crc_check_37_d = ecu_las_39_a_las_crc_check_37_d_encode(calc_ecu_LAS_39A_LAS_CRCCheck_37D());
	g_ecu_las_39a.las_crosswalk_lng_range_h_lane = ecu_las_39_a_las_crosswalk_lng_range_h_lane_encode(calc_ecu_LAS_39A_LAS_CrosswalkLngRange_HLane());
	g_ecu_las_39a.las_rd4_road_infor_available = ecu_las_39_a_las_rd4_road_infor_available_encode(calc_ecu_LAS_39A_LAS_RD4RoadInforAvailable());
	g_ecu_las_39a.las_rd2_road_infor_available = ecu_las_39_a_las_rd2_road_infor_available_encode(calc_ecu_LAS_39A_LAS_RD2RoadInforAvailable());
	g_ecu_las_39a.las_road_feature = ecu_las_39_a_las_road_feature_encode(calc_ecu_LAS_39A_LAS_RoadFeature());
	g_ecu_las_39a.las_rd4_long_distence = ecu_las_39_a_las_rd4_long_distence_encode(calc_ecu_LAS_39A_LAS_RD4LongDistence());
	g_ecu_las_39a.las_rd3_long_distence = ecu_las_39_a_las_rd3_long_distence_encode(calc_ecu_LAS_39A_LAS_RD3LongDistence());
	g_ecu_las_39a.las_rd2_long_distence = ecu_las_39_a_las_rd2_long_distence_encode(calc_ecu_LAS_39A_LAS_RD2LongDistence());
	g_ecu_las_39a.las_rd1_long_distence = ecu_las_39_a_las_rd1_long_distence_encode(calc_ecu_LAS_39A_LAS_RD1LongDistence());
	g_ecu_las_39a.las_rd3_road_infor_available = ecu_las_39_a_las_rd3_road_infor_available_encode(calc_ecu_LAS_39A_LAS_RD3RoadInforAvailable());
	g_ecu_las_39a.las_rd1_road_infor_available = ecu_las_39_a_las_rd1_road_infor_available_encode(calc_ecu_LAS_39A_LAS_RD1RoadInforAvailable());
	g_ecu_las_39a.las_rolling_counter_579 = ecu_las_39_a_las_rolling_counter_579_encode(calc_ecu_LAS_39A_LAS_RollingCounter_579());
	g_ecu_las_39a.las_crc_check_579 = ecu_las_39_a_las_crc_check_579_encode(calc_ecu_LAS_39A_LAS_CRCCheck_579());
	g_ecu_las_39a.acc_rolling_counter_39_a = ecu_las_39_a_acc_rolling_counter_39_a_encode(calc_ecu_LAS_39A_ACC_RollingCounter_39A());
	g_ecu_las_39a.acc_crc_check_39_a = ecu_las_39_a_acc_crc_check_39_a_encode(calc_ecu_LAS_39A_ACC_CRCCheck_39A());
	ECU_LAS_39A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_310 (u8_t Direction)
{
	g_ecu_gw_310.amp_vol_speed_enable_set_status = ecu_gw_310_amp_vol_speed_enable_set_status_encode(calc_ecu_GW_310_AMP_VOLSpeedEnableSETStatus());
	g_ecu_gw_310.amp_head_spkniviset_status = ecu_gw_310_amp_head_spkniviset_status_encode(calc_ecu_GW_310_AMP_HeadSPKNIVISETStatus());
	g_ecu_gw_310.amp_head_spk_tel_set_status = ecu_gw_310_amp_head_spk_tel_set_status_encode(calc_ecu_GW_310_AMP_HeadSPKTelSETStatus());
	g_ecu_gw_310.amp_head_spk_media_set_status = ecu_gw_310_amp_head_spk_media_set_status_encode(calc_ecu_GW_310_AMP_HeadSPKMediaSETStatus());
	g_ecu_gw_310.amp_head_spk_vol_set_status = ecu_gw_310_amp_head_spk_vol_set_status_encode(calc_ecu_GW_310_AMP_HeadSPKVolSETStatus());
	g_ecu_gw_310.amp_alarm_vol_set_status = ecu_gw_310_amp_alarm_vol_set_status_encode(calc_ecu_GW_310_AMP_AlarmVolSETStatus());
	g_ecu_gw_310.amp_lr_head_spk_balance_set_status = ecu_gw_310_amp_lr_head_spk_balance_set_status_encode(calc_ecu_GW_310_AMP_LRHeadSPKBalanceSETStatus());
	g_ecu_gw_310.amp_alarm_style_set_status = ecu_gw_310_amp_alarm_style_set_status_encode(calc_ecu_GW_310_AMP_AlarmStyleSETStatus());
	g_ecu_gw_310.amp_touch_vol_set_status = ecu_gw_310_amp_touch_vol_set_status_encode(calc_ecu_GW_310_AMP_TouchVolSETStatus());
	g_ecu_gw_310.amp_spk_channel_set_status = ecu_gw_310_amp_spk_channel_set_status_encode(calc_ecu_GW_310_AMP_SPKChannelSETStatus());
	g_ecu_gw_310.amp_muteset_status = ecu_gw_310_amp_muteset_status_encode(calc_ecu_GW_310_AMP_MUTESETStatus());
	g_ecu_gw_310.amp_ip_enable_alarm_failure_status = ecu_gw_310_amp_ip_enable_alarm_failure_status_encode(calc_ecu_GW_310_AMP_IPEnableAlarmFailureStatus());
	g_ecu_gw_310.amp_all_alarm_failure_status = ecu_gw_310_amp_all_alarm_failure_status_encode(calc_ecu_GW_310_AMP_AllAlarmFailureStatus());
	g_ecu_gw_310.amp_vol_speed_lev_set_status = ecu_gw_310_amp_vol_speed_lev_set_status_encode(calc_ecu_GW_310_AMP_VOLSpeedLevSETStatus());
	ECU_GW_310_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3E8 (u8_t Direction)
{
	g_ecu_gw_3e8.bcm_soc = ecu_gw_3_e8_bcm_soc_encode(calc_ecu_GW_3E8_BCM_SOC());
	g_ecu_gw_3e8.bcm_sof_q = ecu_gw_3_e8_bcm_sof_q_encode(calc_ecu_GW_3E8_BCM_SOF_Q());
	g_ecu_gw_3e8.bcm_sof_v1 = ecu_gw_3_e8_bcm_sof_v1_encode(calc_ecu_GW_3E8_BCM_SOF_V1());
	g_ecu_gw_3e8.bcm_sof_v2 = ecu_gw_3_e8_bcm_sof_v2_encode(calc_ecu_GW_3E8_BCM_SOF_V2());
	g_ecu_gw_3e8.bcm_sof_t = ecu_gw_3_e8_bcm_sof_t_encode(calc_ecu_GW_3E8_BCM_SOF_t());
	g_ecu_gw_3e8.bcm_soc_state = ecu_gw_3_e8_bcm_soc_state_encode(calc_ecu_GW_3E8_BCM_SOC_STATE());
	g_ecu_gw_3e8.bcm_sof_q_state = ecu_gw_3_e8_bcm_sof_q_state_encode(calc_ecu_GW_3E8_BCM_SOF_Q_STATE());
	g_ecu_gw_3e8.bcm_sof_v1_state = ecu_gw_3_e8_bcm_sof_v1_state_encode(calc_ecu_GW_3E8_BCM_SOF_V1_STATE());
	g_ecu_gw_3e8.bcm_sof_v2_state = ecu_gw_3_e8_bcm_sof_v2_state_encode(calc_ecu_GW_3E8_BCM_SOF_V2_STATE());
	g_ecu_gw_3e8.bcm_sof_t_state = ecu_gw_3_e8_bcm_sof_t_state_encode(calc_ecu_GW_3E8_BCM_SOF_t_STATE());
	ECU_GW_3E8_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3E7 (u8_t Direction)
{
	g_ecu_gw_3e7.bcm_u_batt = ecu_gw_3_e7_bcm_u_batt_encode(calc_ecu_GW_3E7_BCM_U_BATT());
	g_ecu_gw_3e7.bcm_i_range = ecu_gw_3_e7_bcm_i_range_encode(calc_ecu_GW_3E7_BCM_I_RANGE());
	g_ecu_gw_3e7.bcm_i_batt = ecu_gw_3_e7_bcm_i_batt_encode(calc_ecu_GW_3E7_BCM_I_BATT());
	g_ecu_gw_3e7.bcm_t_batt = ecu_gw_3_e7_bcm_t_batt_encode(calc_ecu_GW_3E7_BCM_T_BATT());
	g_ecu_gw_3e7.bcm_ibatt_quiescent = ecu_gw_3_e7_bcm_ibatt_quiescent_encode(calc_ecu_GW_3E7_BCM_IBATT_QUIESCENT());
	g_ecu_gw_3e7.bcm_status_current = ecu_gw_3_e7_bcm_status_current_encode(calc_ecu_GW_3E7_BCM_Status_Current());
	g_ecu_gw_3e7.bcm_status_voltage = ecu_gw_3_e7_bcm_status_voltage_encode(calc_ecu_GW_3E7_BCM_Status_Voltage());
	g_ecu_gw_3e7.bcm_status_temp = ecu_gw_3_e7_bcm_status_temp_encode(calc_ecu_GW_3E7_BCM_Status_Temp());
	g_ecu_gw_3e7.bcm_error_calib = ecu_gw_3_e7_bcm_error_calib_encode(calc_ecu_GW_3E7_BCM_ERROR_Calib());
	g_ecu_gw_3e7.bcm_error_ident = ecu_gw_3_e7_bcm_error_ident_encode(calc_ecu_GW_3E7_BCM_ERROR_IDENT());
	g_ecu_gw_3e7.bcm_resp_error = ecu_gw_3_e7_bcm_resp_error_encode(calc_ecu_GW_3E7_BCM_Resp_Error());
	g_ecu_gw_3e7.bcm_flag_inconsistency = ecu_gw_3_e7_bcm_flag_inconsistency_encode(calc_ecu_GW_3E7_BCM_FLAG_INCONSISTENCY());
	ECU_GW_3E7_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_38A (u8_t Direction)
{
	g_ecu_gw_38a.gw_mfs_down_switch = ecu_gw_38_a_gw_mfs_down_switch_encode(calc_ecu_GW_38A_GW_MFS_Down_switch());
	g_ecu_gw_38a.gw_mfs_up_switch = ecu_gw_38_a_gw_mfs_up_switch_encode(calc_ecu_GW_38A_GW_MFS_UP_switch());
	g_ecu_gw_38a.gw_mfs_right_switch = ecu_gw_38_a_gw_mfs_right_switch_encode(calc_ecu_GW_38A_GW_MFS_Right_switch());
	g_ecu_gw_38a.gw_mfs_left_switch = ecu_gw_38_a_gw_mfs_left_switch_encode(calc_ecu_GW_38A_GW_MFS_Left_switch());
	g_ecu_gw_38a.gw_mfs_dvr_switch = ecu_gw_38_a_gw_mfs_dvr_switch_encode(calc_ecu_GW_38A_GW_MFS_DVR_switch());
	g_ecu_gw_38a.gw_mfs_mode_switch = ecu_gw_38_a_gw_mfs_mode_switch_encode(calc_ecu_GW_38A_GW_MFS_Mode_switch());
	g_ecu_gw_38a.gw_mfs_speech_switch = ecu_gw_38_a_gw_mfs_speech_switch_encode(calc_ecu_GW_38A_GW_MFS_Speech_switch());
	g_ecu_gw_38a.gw_mfs_ok_switch = ecu_gw_38_a_gw_mfs_ok_switch_encode(calc_ecu_GW_38A_GW_MFS_OK_switch());
	g_ecu_gw_38a.gw_mfs_mute_switch = ecu_gw_38_a_gw_mfs_mute_switch_encode(calc_ecu_GW_38A_GW_MFS_Mute_switch());
	g_ecu_gw_38a.gw_mfs_vol_reduce_switch = ecu_gw_38_a_gw_mfs_vol_reduce_switch_encode(calc_ecu_GW_38A_GW_MFS_VolReduce_switch());
	g_ecu_gw_38a.gw_mfs_vol_plus_switch = ecu_gw_38_a_gw_mfs_vol_plus_switch_encode(calc_ecu_GW_38A_GW_MFS_VolPlus_switch());
	g_ecu_gw_38a.gw_mfs_cust_switch = ecu_gw_38_a_gw_mfs_cust_switch_encode(calc_ecu_GW_38A_GW_MFS_Cust_switch());
	g_ecu_gw_38a.gw_mfs_answer_switch_signal = ecu_gw_38_a_gw_mfs_answer_switch_signal_encode(calc_ecu_GW_38A_GW_MFS_Answer_switch_signal());
	g_ecu_gw_38a.gw_mfs_hungup_switch_signal = ecu_gw_38_a_gw_mfs_hungup_switch_signal_encode(calc_ecu_GW_38A_GW_MFS_Hungup_switch_signal());
	g_ecu_gw_38a.gw_mfs_seek_reduce_switch = ecu_gw_38_a_gw_mfs_seek_reduce_switch_encode(calc_ecu_GW_38A_GW_MFS_SeekReduce_switch());
	g_ecu_gw_38a.gw_mfs_seek_plus_switch = ecu_gw_38_a_gw_mfs_seek_plus_switch_encode(calc_ecu_GW_38A_GW_MFS_SeekPlus_switch());
	g_ecu_gw_38a.gw_mfs_we_chat_switch_signal = ecu_gw_38_a_gw_mfs_we_chat_switch_signal_encode(calc_ecu_GW_38A_GW_MFS_WeChat_switch_signal());
	g_ecu_gw_38a.gw_mfs_avm_switch = ecu_gw_38_a_gw_mfs_avm_switch_encode(calc_ecu_GW_38A_GW_MFS_AVM_switch());
	g_ecu_gw_38a.gw_mfs_diag_info_sw_38_a = ecu_gw_38_a_gw_mfs_diag_info_sw_38_a_encode(calc_ecu_GW_38A_GW_MFS_DiagInfoSW_38A());
	ECU_GW_38A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_249 (u8_t Direction)
{
	ECU_GW_249_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_262 (u8_t Direction)
{
	g_ecu_gw_262.peps_start_indicator_signal = ecu_gw_262_peps_start_indicator_signal_encode(calc_ecu_GW_262_PEPS_StartIndicatorSignal());
	g_ecu_gw_262.peps_remote_apa_done_key_off_req = ecu_gw_262_peps_remote_apa_done_key_off_req_encode(calc_ecu_GW_262_PEPS_RemoteAPADoneKeyOffReq());
	g_ecu_gw_262.peps_apa_engine0ff_feedback = ecu_gw_262_peps_apa_engine0ff_feedback_encode(calc_ecu_GW_262_PEPS_APA_Engine0ffFeedback());
	g_ecu_gw_262.peps_apa_lock_feedback = ecu_gw_262_peps_apa_lock_feedback_encode(calc_ecu_GW_262_PEPS_APA_LockFeedback());
	g_ecu_gw_262.peps_apa_remote_parking_on = ecu_gw_262_peps_apa_remote_parking_on_encode(calc_ecu_GW_262_PEPS_APARemoteParkingOn());
	g_ecu_gw_262.peps_unallow_start_escl_error = ecu_gw_262_peps_unallow_start_escl_error_encode(calc_ecu_GW_262_PEPS_UnallowStart_ESCL_Error());
	g_ecu_gw_262.peps_apa_close_win_feedback = ecu_gw_262_peps_apa_close_win_feedback_encode(calc_ecu_GW_262_PEPS_APA_CloseWinFeedback());
	g_ecu_gw_262.peps_remote_control_ac_req = ecu_gw_262_peps_remote_control_ac_req_encode(calc_ecu_GW_262_PEPS_RemoteControlACReq());
	g_ecu_gw_262.peps_power_distribution_status = ecu_gw_262_peps_power_distribution_status_encode(calc_ecu_GW_262_PEPS_PowerDistributionStatus());
	g_ecu_gw_262.peps_unallow_start_escl_lock = ecu_gw_262_peps_unallow_start_escl_lock_encode(calc_ecu_GW_262_PEPS_UnallowStart_ESCL_LOCK());
	g_ecu_gw_262.peps_unallow_start_signal_not_pn = ecu_gw_262_peps_unallow_start_signal_not_pn_encode(calc_ecu_GW_262_PEPS_UnallowStartSignal_Not_PN());
	g_ecu_gw_262.peps_immo_failed_alarmsignal = ecu_gw_262_peps_immo_failed_alarmsignal_encode(calc_ecu_GW_262_PEPS_IMMOFailedAlarmsignal());
	g_ecu_gw_262.peps_startup_button_signal = ecu_gw_262_peps_startup_button_signal_encode(calc_ecu_GW_262_PEPS_StartupButtonSignal());
	g_ecu_gw_262.peps_remote_start_feedback = ecu_gw_262_peps_remote_start_feedback_encode(calc_ecu_GW_262_PEPS_RemoteStartFeedback());
	g_ecu_gw_262.peps_apa_power_mirror_fold_feedback = ecu_gw_262_peps_apa_power_mirror_fold_feedback_encode(calc_ecu_GW_262_PEPS_APA_PowerMirrorFoldFeedback());
	g_ecu_gw_262.peps_engine_startup_inhibit_sts = ecu_gw_262_peps_engine_startup_inhibit_sts_encode(calc_ecu_GW_262_PEPS_EngineStartupInhibitSts());
	g_ecu_gw_262.peps_power_distribution_fault_bit = ecu_gw_262_peps_power_distribution_fault_bit_encode(calc_ecu_GW_262_PEPS_PowerDistributionFaultBit());
	g_ecu_gw_262.peps_engine_startup_inhibit_fb = ecu_gw_262_peps_engine_startup_inhibit_fb_encode(calc_ecu_GW_262_PEPS_EngineStartupInhibitFB());
	g_ecu_gw_262.peps_immo_feedback = ecu_gw_262_peps_immo_feedback_encode(calc_ecu_GW_262_PEPS_IMMOFeedback());
	g_ecu_gw_262.peps_remote_start_key_status = ecu_gw_262_peps_remote_start_key_status_encode(calc_ecu_GW_262_PEPS_RemoteStartKeyStatus());
	g_ecu_gw_262.peps_peps_fail_status = ecu_gw_262_peps_peps_fail_status_encode(calc_ecu_GW_262_PEPS_PEPSFailStatus());
	g_ecu_gw_262.peps_key_standby_position_indicator = ecu_gw_262_peps_key_standby_position_indicator_encode(calc_ecu_GW_262_PEPS_KeyStandbyPositionIndicator());
	g_ecu_gw_262.peps_apa_remote_parking_off = ecu_gw_262_peps_apa_remote_parking_off_encode(calc_ecu_GW_262_PEPS_APARemoteParkingOff());
	g_ecu_gw_262.peps_rolling_counter_262 = ecu_gw_262_peps_rolling_counter_262_encode(calc_ecu_GW_262_PEPS_RollingCounter_262());
	g_ecu_gw_262.peps_crc_check_262 = ecu_gw_262_peps_crc_check_262_encode(calc_ecu_GW_262_PEPS_CRCCheck_262());
	ECU_GW_262_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_334 (u8_t Direction)
{
	g_ecu_gw_334.dsm_left_mirror_up_down_sts = ecu_gw_334_dsm_left_mirror_up_down_sts_encode(calc_ecu_GW_334_DSM_LeftMirrorUpDownSts());
	g_ecu_gw_334.dsm_left_mirror_left_right_sts = ecu_gw_334_dsm_left_mirror_left_right_sts_encode(calc_ecu_GW_334_DSM_LeftMirrorLeftRightSts());
	g_ecu_gw_334.dsm_right_mirror_left_right_sts = ecu_gw_334_dsm_right_mirror_left_right_sts_encode(calc_ecu_GW_334_DSM_RightMirrorLeftRightSts());
	g_ecu_gw_334.dsm_right_mirror_up_down_sts = ecu_gw_334_dsm_right_mirror_up_down_sts_encode(calc_ecu_GW_334_DSM_RightMirrorUpDownSts());
	g_ecu_gw_334.dsm_rolling_counter_334 = ecu_gw_334_dsm_rolling_counter_334_encode(calc_ecu_GW_334_DSM_RollingCounter_334());
	g_ecu_gw_334.dsm_crc_check_334 = ecu_gw_334_dsm_crc_check_334_encode(calc_ecu_GW_334_DSM_CRCCheck_334());
	ECU_GW_334_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_395 (u8_t Direction)
{
	g_ecu_gw_395.tbox_remote_engine_startup_req = ecu_gw_395_tbox_remote_engine_startup_req_encode(calc_ecu_GW_395_TBOX_RemoteEngineStartupReq());
	g_ecu_gw_395.tbox_engine_startup_inhibit = ecu_gw_395_tbox_engine_startup_inhibit_encode(calc_ecu_GW_395_TBOX_EngineStartupInhibit());
	g_ecu_gw_395.tbox_lock_command = ecu_gw_395_tbox_lock_command_encode(calc_ecu_GW_395_TBOX_LockCommand());
	g_ecu_gw_395.tbox_vehicle_vedio_detect_req = ecu_gw_395_tbox_vehicle_vedio_detect_req_encode(calc_ecu_GW_395_TBOX_VehicleVedioDetectReq());
	g_ecu_gw_395.tbox_car_remind = ecu_gw_395_tbox_car_remind_encode(calc_ecu_GW_395_TBOX_CarRemind());
	g_ecu_gw_395.tbox_audio_request = ecu_gw_395_tbox_audio_request_encode(calc_ecu_GW_395_TBOX_AudioRequest());
	g_ecu_gw_395.tbox_change_part_status = ecu_gw_395_tbox_change_part_status_encode(calc_ecu_GW_395_TBOX_ChangePartStatus());
	g_ecu_gw_395.tbox_ese_updata_hu_wake_up_req = ecu_gw_395_tbox_ese_updata_hu_wake_up_req_encode(calc_ecu_GW_395_TBOX_EseUpdataHUWakeUpReq());
	g_ecu_gw_395.tbox_call_status = ecu_gw_395_tbox_call_status_encode(calc_ecu_GW_395_TBOX_CallStatus());
	g_ecu_gw_395.tbox_b_call_status = ecu_gw_395_tbox_b_call_status_encode(calc_ecu_GW_395_TBOX_BCallStatus());
	g_ecu_gw_395.tbox_ac_temp_value_req = ecu_gw_395_tbox_ac_temp_value_req_encode(calc_ecu_GW_395_TBOX_ACTempValueReq());
	g_ecu_gw_395.tbox_vehicle_status_demand_req = ecu_gw_395_tbox_vehicle_status_demand_req_encode(calc_ecu_GW_395_TBOX_VehicleStatusDemandReq());
	g_ecu_gw_395.tbox_remote_start_run_time = ecu_gw_395_tbox_remote_start_run_time_encode(calc_ecu_GW_395_TBOX_RemoteStartRunTime());
	g_ecu_gw_395.tbox_vin_match_status = ecu_gw_395_tbox_vin_match_status_encode(calc_ecu_GW_395_TBOX_VINMatchStatus());
	g_ecu_gw_395.tbox_vin_req = ecu_gw_395_tbox_vin_req_encode(calc_ecu_GW_395_TBOX_VINReq());
	g_ecu_gw_395.tbox_search_car_req = ecu_gw_395_tbox_search_car_req_encode(calc_ecu_GW_395_TBOX_SearchCarReq());
	g_ecu_gw_395.tbox_rmote_trunk = ecu_gw_395_tbox_rmote_trunk_encode(calc_ecu_GW_395_TBOX_RmoteTrunk());
	g_ecu_gw_395.tbox_rmote_roof = ecu_gw_395_tbox_rmote_roof_encode(calc_ecu_GW_395_TBOX_RmoteRoof());
	g_ecu_gw_395.tbox_remote_ac_startup_req = ecu_gw_395_tbox_remote_ac_startup_req_encode(calc_ecu_GW_395_TBOX_RemoteACStartupReq());
	g_ecu_gw_395.tbox_remote_steer_wheel_hot_req = ecu_gw_395_tbox_remote_steer_wheel_hot_req_encode(calc_ecu_GW_395_TBOX_RemoteSteerWheelHotReq());
	g_ecu_gw_395.tbox_remote_driver_seat_hot_req = ecu_gw_395_tbox_remote_driver_seat_hot_req_encode(calc_ecu_GW_395_TBOX_RemoteDriverSeatHotReq());
	g_ecu_gw_395.tbox_remote_passanger_seat_hot_req = ecu_gw_395_tbox_remote_passanger_seat_hot_req_encode(calc_ecu_GW_395_TBOX_RemotePassangerSeatHotReq());
	g_ecu_gw_395.tbox_remote_detect_req = ecu_gw_395_tbox_remote_detect_req_encode(calc_ecu_GW_395_TBOX_RemoteDetectReq());
	g_ecu_gw_395.tbox_remote_air_clean_req = ecu_gw_395_tbox_remote_air_clean_req_encode(calc_ecu_GW_395_TBOX_RemoteAirCleanReq());
	g_ecu_gw_395.tbox_remote_dis_req = ecu_gw_395_tbox_remote_dis_req_encode(calc_ecu_GW_395_TBOX_RemoteDisReq());
	g_ecu_gw_395.tbox_remote_air_quality_inquire = ecu_gw_395_tbox_remote_air_quality_inquire_encode(calc_ecu_GW_395_TBOX_RemoteAirQualityInquire());
	g_ecu_gw_395.tbox_remote_dr_ventilatie_req = ecu_gw_395_tbox_remote_dr_ventilatie_req_encode(calc_ecu_GW_395_TBOX_RemoteDrVentilatieReq());
	g_ecu_gw_395.tbox_remote_pa_ventilatie_req = ecu_gw_395_tbox_remote_pa_ventilatie_req_encode(calc_ecu_GW_395_TBOX_RemotePaVentilatieReq());
	g_ecu_gw_395.tbox_remote_install_req = ecu_gw_395_tbox_remote_install_req_encode(calc_ecu_GW_395_TBOX_RemoteInstallReq());
	g_ecu_gw_395.tbox_ap_amodule_enable = ecu_gw_395_tbox_ap_amodule_enable_encode(calc_ecu_GW_395_TBOX_APAmoduleEnable());
	g_ecu_gw_395.tbox_apa_maneuver_cancel = ecu_gw_395_tbox_apa_maneuver_cancel_encode(calc_ecu_GW_395_TBOX_APAManeuverCancel());
	g_ecu_gw_395.tbox_apa_maneuver_start = ecu_gw_395_tbox_apa_maneuver_start_encode(calc_ecu_GW_395_TBOX_APAManeuverStart());
	g_ecu_gw_395.tbox_apa_maneuver_suspend = ecu_gw_395_tbox_apa_maneuver_suspend_encode(calc_ecu_GW_395_TBOX_APAManeuverSuspend());
	g_ecu_gw_395.tbox_apapoc_mode_select = ecu_gw_395_tbox_apapoc_mode_select_encode(calc_ecu_GW_395_TBOX_APAPOCModeSelect());
	g_ecu_gw_395.tbox_apa_fuction_selection = ecu_gw_395_tbox_apa_fuction_selection_encode(calc_ecu_GW_395_TBOX_APAFuctionSelection());
	g_ecu_gw_395.tbox_verticalbackward = ecu_gw_395_tbox_verticalbackward_encode(calc_ecu_GW_395_TBOX_Verticalbackward());
	g_ecu_gw_395.tbox_verticalforward = ecu_gw_395_tbox_verticalforward_encode(calc_ecu_GW_395_TBOX_Verticalforward());
	g_ecu_gw_395.tbox_apa_video_delay = ecu_gw_395_tbox_apa_video_delay_encode(calc_ecu_GW_395_TBOX_APA_VideoDelay());
	g_ecu_gw_395.tbox_apa_signal_delay = ecu_gw_395_tbox_apa_signal_delay_encode(calc_ecu_GW_395_TBOX_APA_SignalDelay());
	g_ecu_gw_395.tbox_turn_right = ecu_gw_395_tbox_turn_right_encode(calc_ecu_GW_395_TBOX_TurnRight());
	g_ecu_gw_395.tbox_turn_left = ecu_gw_395_tbox_turn_left_encode(calc_ecu_GW_395_TBOX_TurnLeft());
	g_ecu_gw_395.tbox_apa_remote_drive_req = ecu_gw_395_tbox_apa_remote_drive_req_encode(calc_ecu_GW_395_TBOX_APARemoteDriveReq());
	g_ecu_gw_395.tbox_signal_type = ecu_gw_395_tbox_signal_type_encode(calc_ecu_GW_395_TBOX_SignalType());
	g_ecu_gw_395.tbox_signal_strength = ecu_gw_395_tbox_signal_strength_encode(calc_ecu_GW_395_TBOX_SignalStrength());
	g_ecu_gw_395.tbox_hzp_function_req = ecu_gw_395_tbox_hzp_function_req_encode(calc_ecu_GW_395_TBOX_HZPFunctionReq());
	g_ecu_gw_395.tbox_hzp_control_enable = ecu_gw_395_tbox_hzp_control_enable_encode(calc_ecu_GW_395_TBOX_HZPControlEnable());
	g_ecu_gw_395.tbox_avm_display_form = ecu_gw_395_tbox_avm_display_form_encode(calc_ecu_GW_395_TBOX_AVM_DisplayForm());
	g_ecu_gw_395.t_box_messsage_counter_395 = ecu_gw_395_t_box_messsage_counter_395_encode(calc_ecu_GW_395_TBox_MesssageCounter_395());
	g_ecu_gw_395.t_box_reset_flag_395 = ecu_gw_395_t_box_reset_flag_395_encode(calc_ecu_GW_395_TBox_ResetFlag_395());
	g_ecu_gw_395.t_box_authenticator_395 = ecu_gw_395_t_box_authenticator_395_encode(calc_ecu_GW_395_TBox_Authenticator_395());
	ECU_GW_395_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_18A (u8_t Direction)
{
	g_ecu_gw_18a.tcu_ap_adriver_interruption = ecu_gw_18_a_tcu_ap_adriver_interruption_encode(calc_ecu_GW_18A_TCU_APAdriverInterruption());
	g_ecu_gw_18a.tcu_apa_shift_gear_request_enable = ecu_gw_18_a_tcu_apa_shift_gear_request_enable_encode(calc_ecu_GW_18A_TCU_APAShiftGearRequestEnable());
	ECU_GW_18A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_24A (u8_t Direction)
{
	g_ecu_gw_24a.esl_shift_lever_positionrequest = ecu_gw_24_a_esl_shift_lever_positionrequest_encode(calc_ecu_GW_24A_ESL_ShiftLeverPositionrequest());
	g_ecu_gw_24a.esl_un_lock_button_position_status = ecu_gw_24_a_esl_un_lock_button_position_status_encode(calc_ecu_GW_24A_ESL_UnLockButtonPositionStatus());
	g_ecu_gw_24a.esl_epb_button_position_status = ecu_gw_24_a_esl_epb_button_position_status_encode(calc_ecu_GW_24A_ESL_EPBButton_PositionStatus());
	g_ecu_gw_24a.esl_drive_mode_request = ecu_gw_24_a_esl_drive_mode_request_encode(calc_ecu_GW_24A_ESL_DriveModeRequest());
	g_ecu_gw_24a.esl_driver_park_request = ecu_gw_24_a_esl_driver_park_request_encode(calc_ecu_GW_24A_ESL_DriverParkRequest());
	g_ecu_gw_24a.esl_shift_lever_position_fault_sts = ecu_gw_24_a_esl_shift_lever_position_fault_sts_encode(calc_ecu_GW_24A_ESL_ShiftLeverPositionFaultSts());
	g_ecu_gw_24a.esl_drive_mode_fault_status = ecu_gw_24_a_esl_drive_mode_fault_status_encode(calc_ecu_GW_24A_ESL_DriveModeFaultStatus());
	g_ecu_gw_24a.esl_driver_park_button_fault_status = ecu_gw_24_a_esl_driver_park_button_fault_status_encode(calc_ecu_GW_24A_ESL_DriverParkButtonFaultStatus());
	g_ecu_gw_24a.esl_un_lock_button_fault_status = ecu_gw_24_a_esl_un_lock_button_fault_status_encode(calc_ecu_GW_24A_ESL_UnLockButtonFaultStatus());
	g_ecu_gw_24a.esl_epb_button_fault_status = ecu_gw_24_a_esl_epb_button_fault_status_encode(calc_ecu_GW_24A_ESL_EPBButton_FaultStatus());
	g_ecu_gw_24a.esl_hall_status = ecu_gw_24_a_esl_hall_status_encode(calc_ecu_GW_24A_ESL_HALLStatus());
	g_ecu_gw_24a.esl_reset_sts = ecu_gw_24_a_esl_reset_sts_encode(calc_ecu_GW_24A_ESL_ResetSts());
	g_ecu_gw_24a.esl_tcugear_ref = ecu_gw_24_a_esl_tcugear_ref_encode(calc_ecu_GW_24A_ESL_TcugearRef());
	g_ecu_gw_24a.esl_rolling_counter_24_a = ecu_gw_24_a_esl_rolling_counter_24_a_encode(calc_ecu_GW_24A_ESL_RollingCounter_24A());
	g_ecu_gw_24a.esl_crc_check_24_a = ecu_gw_24_a_esl_crc_check_24_a_encode(calc_ecu_GW_24A_ESL_CRCCheck_24A());
	ECU_GW_24A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_25C (u8_t Direction)
{
	g_ecu_gw_25c.gw_trip_counter_25_c = ecu_gw_25_c_gw_trip_counter_25_c_encode(calc_ecu_GW_25C_GW_TripCounter_25C());
	g_ecu_gw_25c.gw_reset_counter_25_c = ecu_gw_25_c_gw_reset_counter_25_c_encode(calc_ecu_GW_25C_GW_ResetCounter_25C());
	g_ecu_gw_25c.gw_authernticator_25_c = ecu_gw_25_c_gw_authernticator_25_c_encode(calc_ecu_GW_25C_GW_Authernticator_25C());
	ECU_GW_25C_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2D7 (u8_t Direction)
{
	g_ecu_gw_2d7.hu_3_d_hor_angle_req = ecu_gw_2_d7_hu_3_d_hor_angle_req_encode(calc_ecu_GW_2D7_HU_3DHorAngleReq());
	g_ecu_gw_2d7.hu_dvr_display_vision = ecu_gw_2_d7_hu_dvr_display_vision_encode(calc_ecu_GW_2D7_HU_DVRDisplayVision());
	g_ecu_gw_2d7.hu_av_mswitch = ecu_gw_2_d7_hu_av_mswitch_encode(calc_ecu_GW_2D7_HU_AVMswitch());
	g_ecu_gw_2d7.hu_dvr_mode = ecu_gw_2_d7_hu_dvr_mode_encode(calc_ecu_GW_2D7_HU_DVRMode());
	g_ecu_gw_2d7.hu_avm_triggermethod = ecu_gw_2_d7_hu_avm_triggermethod_encode(calc_ecu_GW_2D7_HU_AVMTriggermethod());
	g_ecu_gw_2d7.hu_screen_operate_status = ecu_gw_2_d7_hu_screen_operate_status_encode(calc_ecu_GW_2D7_HU_ScreenOperateStatus());
	g_ecu_gw_2d7.hu_dvr_driving_play_switch_status = ecu_gw_2_d7_hu_dvr_driving_play_switch_status_encode(calc_ecu_GW_2D7_HU_DVRDrivingPlaySwitchStatus());
	ECU_GW_2D7_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_341 (u8_t Direction)
{
	g_ecu_gw_341.pcu_pwr_tq_wh_min_total = ecu_gw_341_pcu_pwr_tq_wh_min_total_encode(calc_ecu_GW_341_PCU_PwrTqWhMinTotal());
	g_ecu_gw_341.pcu_pwr_tq_wh_max_total = ecu_gw_341_pcu_pwr_tq_wh_max_total_encode(calc_ecu_GW_341_PCU_PwrTqWhMaxTotal());
	g_ecu_gw_341.pcu_pwr_tq_wh_min_vld = ecu_gw_341_pcu_pwr_tq_wh_min_vld_encode(calc_ecu_GW_341_PCU_PwrTqWhMinVld());
	g_ecu_gw_341.pcu_pwr_tq_wh_max_vld = ecu_gw_341_pcu_pwr_tq_wh_max_vld_encode(calc_ecu_GW_341_PCU_PwrTqWhMaxVld());
	g_ecu_gw_341.pcu_acc_ped_shield = ecu_gw_341_pcu_acc_ped_shield_encode(calc_ecu_GW_341_PCU_AccPedShield());
	g_ecu_gw_341.pcu_rolling_counter_341 = ecu_gw_341_pcu_rolling_counter_341_encode(calc_ecu_GW_341_PCU_RollingCounter_341());
	g_ecu_gw_341.pcu_crc_check_341 = ecu_gw_341_pcu_crc_check_341_encode(calc_ecu_GW_341_PCU_CRCCheck_341());
	ECU_GW_341_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3D6 (u8_t Direction)
{
	g_ecu_gw_3d6.slcm_rr_window_status = ecu_gw_3_d6_slcm_rr_window_status_encode(calc_ecu_GW_3D6_SLCM_RRWindowStatus());
	g_ecu_gw_3d6.slcm_fr_window_status = ecu_gw_3_d6_slcm_fr_window_status_encode(calc_ecu_GW_3D6_SLCM_FRWindowStatus());
	ECU_GW_3D6_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3D8 (u8_t Direction)
{
	g_ecu_gw_3d8.slcm_rl_win_motor = ecu_gw_3_d8_slcm_rl_win_motor_encode(calc_ecu_GW_3D8_SLCM_RLWinMotor());
	g_ecu_gw_3d8.slcm_driver_win_motor = ecu_gw_3_d8_slcm_driver_win_motor_encode(calc_ecu_GW_3D8_SLCM_DriverWinMotor());
	g_ecu_gw_3d8.slcm_rl_window_switch = ecu_gw_3_d8_slcm_rl_window_switch_encode(calc_ecu_GW_3D8_SLCM_RLWindowSwitch());
	g_ecu_gw_3d8.slcm_driver_window_switch = ecu_gw_3_d8_slcm_driver_window_switch_encode(calc_ecu_GW_3D8_SLCM_DriverWindowSwitch());
	g_ecu_gw_3d8.slcm_rl_window_ap_actice = ecu_gw_3_d8_slcm_rl_window_ap_actice_encode(calc_ecu_GW_3D8_SLCM_RLWindowAPActice());
	g_ecu_gw_3d8.slcm_driver_window_ap_actice = ecu_gw_3_d8_slcm_driver_window_ap_actice_encode(calc_ecu_GW_3D8_SLCM_DriverWindowAPActice());
	g_ecu_gw_3d8.slcm_rl_window_initialized_sts = ecu_gw_3_d8_slcm_rl_window_initialized_sts_encode(calc_ecu_GW_3D8_SLCM_RLWindowInitializedSts());
	g_ecu_gw_3d8.slcm_driver_window_initialized_sts = ecu_gw_3_d8_slcm_driver_window_initialized_sts_encode(calc_ecu_GW_3D8_SLCM_DriverWindowInitializedSts());
	g_ecu_gw_3d8.slcm_rl_window_status = ecu_gw_3_d8_slcm_rl_window_status_encode(calc_ecu_GW_3D8_SLCM_RLWindowStatus());
	g_ecu_gw_3d8.slcm_driver_window_status = ecu_gw_3_d8_slcm_driver_window_status_encode(calc_ecu_GW_3D8_SLCM_DriverWindowStatus());
	g_ecu_gw_3d8.slcm_fail_status = ecu_gw_3_d8_slcm_fail_status_encode(calc_ecu_GW_3D8_SLCM_FailStatus());
	ECU_GW_3D8_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3DE (u8_t Direction)
{
	g_ecu_gw_3de.dsm_dsm_horizontal_position_sts = ecu_gw_3_de_dsm_dsm_horizontal_position_sts_encode(calc_ecu_GW_3DE_DSM_DSMHorizontalPositionSts());
	g_ecu_gw_3de.dsm_dsm_front_end_position_sts = ecu_gw_3_de_dsm_dsm_front_end_position_sts_encode(calc_ecu_GW_3DE_DSM_DSMFrontEndPositionSts());
	g_ecu_gw_3de.dsm_dsm_vertical_position_sts = ecu_gw_3_de_dsm_dsm_vertical_position_sts_encode(calc_ecu_GW_3DE_DSM_DSMVerticalPositionSts());
	g_ecu_gw_3de.dsm_dsm_backrest_position_sts = ecu_gw_3_de_dsm_dsm_backrest_position_sts_encode(calc_ecu_GW_3DE_DSM_DSMBackrestPositionSts());
	g_ecu_gw_3de.dsm_rolling_counter_3_de = ecu_gw_3_de_dsm_rolling_counter_3_de_encode(calc_ecu_GW_3DE_DSM_RollingCounter_3DE());
	g_ecu_gw_3de.dsm_crc_check_3_de = ecu_gw_3_de_dsm_crc_check_3_de_encode(calc_ecu_GW_3DE_DSM_CRCCheck_3DE());
	ECU_GW_3DE_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3EE (u8_t Direction)
{
	g_ecu_gw_3ee.gw_saf_cert_sts = ecu_gw_3_ee_gw_saf_cert_sts_encode(calc_ecu_GW_3EE_GW_SafCertSts());
	ECU_GW_3EE_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_6B0 (u8_t Direction)
{
	g_ecu_gw_6b0.gw_apa_authentication_status = ecu_gw_6_b0_gw_apa_authentication_status_encode(calc_ecu_GW_6B0_GW_APA_AuthenticationStatus());
	ECU_GW_6B0_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_2D3 (u8_t Direction)
{
	g_ecu_acc_2d3.acc_aeb_status_for_srs = ecu_acc_2_d3_acc_aeb_status_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBStatus_for_SRS());
	g_ecu_acc_2d3.acc_aeb_active_for_srs = ecu_acc_2_d3_acc_aeb_active_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBActive_for_SRS());
	g_ecu_acc_2d3.acc_aeb_target_lng_range_for_srs = ecu_acc_2_d3_acc_aeb_target_lng_range_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBTargetLngRange_for_SRS());
	g_ecu_acc_2d3.acc_aeb_target_rel_speed_for_srs = ecu_acc_2_d3_acc_aeb_target_rel_speed_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBTargetRelSpeed_for_SRS());
	g_ecu_acc_2d3.acc_aeb_target_ttc_for_srs = ecu_acc_2_d3_acc_aeb_target_ttc_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBTargetTTC_for_SRS());
	g_ecu_acc_2d3.acc_aeb_target_type_for_srs = ecu_acc_2_d3_acc_aeb_target_type_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBTargetType_for_SRS());
	g_ecu_acc_2d3.acc_aeb_target_prob_for_srs = ecu_acc_2_d3_acc_aeb_target_prob_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBTargetProb_for_SRS());
	g_ecu_acc_2d3.acc_rolling_counter_282 = ecu_acc_2_d3_acc_rolling_counter_282_encode(calc_ecu_ACC_2D3_ACC_RollingCounter_282());
	g_ecu_acc_2d3.acc_crc_checkr_282 = ecu_acc_2_d3_acc_crc_checkr_282_encode(calc_ecu_ACC_2D3_ACC_CRCCheckr_282());
	g_ecu_acc_2d3.acc_aeb_target_lat_range_for_srs = ecu_acc_2_d3_acc_aeb_target_lat_range_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBTargetLatRange_for_SRS());
	g_ecu_acc_2d3.acc_aeb_target_lat_rel_speed_for_srs = ecu_acc_2_d3_acc_aeb_target_lat_rel_speed_for_srs_encode(calc_ecu_ACC_2D3_ACC_AEBTargetLatRelSpeed_for_SRS());
	g_ecu_acc_2d3.acc_rolling_counter_283 = ecu_acc_2_d3_acc_rolling_counter_283_encode(calc_ecu_ACC_2D3_ACC_RollingCounter_283());
	g_ecu_acc_2d3.acc_crc_check_283 = ecu_acc_2_d3_acc_crc_check_283_encode(calc_ecu_ACC_2D3_ACC_CRCCheck_283());
	ECU_ACC_2D3_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_ACC_301 (u8_t Direction)
{
	g_ecu_acc_301.acc_reset_sts = ecu_acc_301_acc_reset_sts_encode(calc_ecu_ACC_301_ACC_ResetSts());
	ECU_ACC_301_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_30C (u8_t Direction)
{
	g_ecu_las_30c.las_reset_sts = ecu_las_30_c_las_reset_sts_encode(calc_ecu_LAS_30C_LAS_ResetSts());
	ECU_LAS_30C_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2E2 (u8_t Direction)
{
	g_ecu_gw_2e2.rlr_elk_obj1_track_id = ecu_gw_2_e2_rlr_elk_obj1_track_id_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Track_ID());
	g_ecu_gw_2e2.rlr_elk_obj1_type = ecu_gw_2_e2_rlr_elk_obj1_type_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Type());
	g_ecu_gw_2e2.rlr_elk_obj1_width = ecu_gw_2_e2_rlr_elk_obj1_width_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Width());
	g_ecu_gw_2e2.rlr_elk_obj1_height = ecu_gw_2_e2_rlr_elk_obj1_height_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Height());
	g_ecu_gw_2e2.rlr_elk_obj1_length = ecu_gw_2_e2_rlr_elk_obj1_length_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Length());
	g_ecu_gw_2e2.rlr_elk_obj1_heading_angle = ecu_gw_2_e2_rlr_elk_obj1_heading_angle_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_HeadingAngle());
	g_ecu_gw_2e2.rlr_elk_obj1_dy = ecu_gw_2_e2_rlr_elk_obj1_dy_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Dy());
	g_ecu_gw_2e2.rlr_elk_obj1_ref_point_loc = ecu_gw_2_e2_rlr_elk_obj1_ref_point_loc_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_RefPointLoc());
	g_ecu_gw_2e2.rlr_elk_obj1_dx = ecu_gw_2_e2_rlr_elk_obj1_dx_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Dx());
	g_ecu_gw_2e2.rlr_elk_obj1_rel_vy = ecu_gw_2_e2_rlr_elk_obj1_rel_vy_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_RelVy());
	g_ecu_gw_2e2.rlr_elk_obj1_rel_vx = ecu_gw_2_e2_rlr_elk_obj1_rel_vx_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_RelVx());
	g_ecu_gw_2e2.rlr_elk_obj1_rel_ay = ecu_gw_2_e2_rlr_elk_obj1_rel_ay_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_RelAy());
	g_ecu_gw_2e2.rlr_elk_obj1_rel_ax = ecu_gw_2_e2_rlr_elk_obj1_rel_ax_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_RelAx());
	g_ecu_gw_2e2.rlr_elk_obj1_location = ecu_gw_2_e2_rlr_elk_obj1_location_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Location());
	g_ecu_gw_2e2.rlr_elk_obj1_exist_prob = ecu_gw_2_e2_rlr_elk_obj1_exist_prob_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_ExistProb());
	g_ecu_gw_2e2.rlr_elk_obj1_measured = ecu_gw_2_e2_rlr_elk_obj1_measured_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_Measured());
	g_ecu_gw_2e2.rlr_elk_obj1_obstacle_prob = ecu_gw_2_e2_rlr_elk_obj1_obstacle_prob_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_ObstacleProb());
	g_ecu_gw_2e2.rlr_elk_obj1_ref_point_dy = ecu_gw_2_e2_rlr_elk_obj1_ref_point_dy_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_RefPointDy());
	g_ecu_gw_2e2.rlr_elk_obj1_ref_point_dx = ecu_gw_2_e2_rlr_elk_obj1_ref_point_dx_encode(calc_ecu_GW_2E2_RLR_ElkOBJ1_RefPointDx());
	g_ecu_gw_2e2.rlr_elk_obj2_obstacle_prob = ecu_gw_2_e2_rlr_elk_obj2_obstacle_prob_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_ObstacleProb());
	g_ecu_gw_2e2.rlr_elk_obj2_ref_point_dy = ecu_gw_2_e2_rlr_elk_obj2_ref_point_dy_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_RefPointDy());
	g_ecu_gw_2e2.rlr_elk_obj2_ref_point_dx = ecu_gw_2_e2_rlr_elk_obj2_ref_point_dx_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_RefPointDx());
	g_ecu_gw_2e2.rlr_elk_obj2_track_id = ecu_gw_2_e2_rlr_elk_obj2_track_id_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Track_ID());
	g_ecu_gw_2e2.rlr_elk_obj2_type = ecu_gw_2_e2_rlr_elk_obj2_type_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Type());
	g_ecu_gw_2e2.rlr_elk_obj2_width = ecu_gw_2_e2_rlr_elk_obj2_width_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Width());
	g_ecu_gw_2e2.rlr_elk_obj2_height = ecu_gw_2_e2_rlr_elk_obj2_height_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Height());
	g_ecu_gw_2e2.rlr_elk_obj2_length = ecu_gw_2_e2_rlr_elk_obj2_length_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Length());
	g_ecu_gw_2e2.rlr_elk_obj2_heading_angle = ecu_gw_2_e2_rlr_elk_obj2_heading_angle_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_HeadingAngle());
	g_ecu_gw_2e2.rlr_elk_obj2_dy = ecu_gw_2_e2_rlr_elk_obj2_dy_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Dy());
	g_ecu_gw_2e2.rlr_elk_obj2_ref_point_loc = ecu_gw_2_e2_rlr_elk_obj2_ref_point_loc_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_RefPointLoc());
	g_ecu_gw_2e2.rlr_elk_obj2_dx = ecu_gw_2_e2_rlr_elk_obj2_dx_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Dx());
	g_ecu_gw_2e2.rlr_elk_obj2_rel_vy = ecu_gw_2_e2_rlr_elk_obj2_rel_vy_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_RelVy());
	g_ecu_gw_2e2.rlr_elk_obj2_rel_vx = ecu_gw_2_e2_rlr_elk_obj2_rel_vx_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_RelVx());
	g_ecu_gw_2e2.rlr_elk_obj2_rel_ay = ecu_gw_2_e2_rlr_elk_obj2_rel_ay_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_RelAy());
	g_ecu_gw_2e2.rlr_elk_obj2_rel_ax = ecu_gw_2_e2_rlr_elk_obj2_rel_ax_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_RelAx());
	g_ecu_gw_2e2.rlr_elk_obj2_location = ecu_gw_2_e2_rlr_elk_obj2_location_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Location());
	g_ecu_gw_2e2.rlr_elk_obj2_exist_prob = ecu_gw_2_e2_rlr_elk_obj2_exist_prob_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_ExistProb());
	g_ecu_gw_2e2.rlr_elk_obj2_measured = ecu_gw_2_e2_rlr_elk_obj2_measured_encode(calc_ecu_GW_2E2_RLR_ElkOBJ2_Measured());
	g_ecu_gw_2e2.rlr_rolling_counter_2_e2 = ecu_gw_2_e2_rlr_rolling_counter_2_e2_encode(calc_ecu_GW_2E2_RLR_RollingCounter_2E2());
	g_ecu_gw_2e2.rlr_crc_check_2_e2 = ecu_gw_2_e2_rlr_crc_check_2_e2_encode(calc_ecu_GW_2E2_RLR_CRCCheck_2E2());
	ECU_GW_2E2_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2E3 (u8_t Direction)
{
	g_ecu_gw_2e3.rlr_elk_obj3_track_id = ecu_gw_2_e3_rlr_elk_obj3_track_id_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Track_ID());
	g_ecu_gw_2e3.rlr_elk_obj3_type = ecu_gw_2_e3_rlr_elk_obj3_type_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Type());
	g_ecu_gw_2e3.rlr_elk_obj3_width = ecu_gw_2_e3_rlr_elk_obj3_width_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Width());
	g_ecu_gw_2e3.rlr_elk_obj3_height = ecu_gw_2_e3_rlr_elk_obj3_height_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Height());
	g_ecu_gw_2e3.rlr_elk_obj3_length = ecu_gw_2_e3_rlr_elk_obj3_length_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Length());
	g_ecu_gw_2e3.rlr_elk_obj3_heading_angle = ecu_gw_2_e3_rlr_elk_obj3_heading_angle_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_HeadingAngle());
	g_ecu_gw_2e3.rlr_elk_obj3_dy = ecu_gw_2_e3_rlr_elk_obj3_dy_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Dy());
	g_ecu_gw_2e3.rlr_elk_obj3_ref_point_loc = ecu_gw_2_e3_rlr_elk_obj3_ref_point_loc_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_RefPointLoc());
	g_ecu_gw_2e3.rlr_elk_obj3_dx = ecu_gw_2_e3_rlr_elk_obj3_dx_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Dx());
	g_ecu_gw_2e3.rlr_elk_obj3_rel_vy = ecu_gw_2_e3_rlr_elk_obj3_rel_vy_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_RelVy());
	g_ecu_gw_2e3.rlr_elk_obj3_rel_vx = ecu_gw_2_e3_rlr_elk_obj3_rel_vx_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_RelVx());
	g_ecu_gw_2e3.rlr_elk_obj3_rel_ay = ecu_gw_2_e3_rlr_elk_obj3_rel_ay_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_RelAy());
	g_ecu_gw_2e3.rlr_elk_obj3_rel_ax = ecu_gw_2_e3_rlr_elk_obj3_rel_ax_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_RelAx());
	g_ecu_gw_2e3.rlr_elk_obj3_location = ecu_gw_2_e3_rlr_elk_obj3_location_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Location());
	g_ecu_gw_2e3.rlr_elk_obj3_exist_prob = ecu_gw_2_e3_rlr_elk_obj3_exist_prob_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_ExistProb());
	g_ecu_gw_2e3.rlr_elk_obj3_measured = ecu_gw_2_e3_rlr_elk_obj3_measured_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_Measured());
	g_ecu_gw_2e3.rlr_elk_obj3_obstacle_prob = ecu_gw_2_e3_rlr_elk_obj3_obstacle_prob_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_ObstacleProb());
	g_ecu_gw_2e3.rlr_elk_obj3_ref_point_dy = ecu_gw_2_e3_rlr_elk_obj3_ref_point_dy_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_RefPointDy());
	g_ecu_gw_2e3.rlr_elk_obj3_ref_point_dx = ecu_gw_2_e3_rlr_elk_obj3_ref_point_dx_encode(calc_ecu_GW_2E3_RLR_ElkOBJ3_RefPointDx());
	g_ecu_gw_2e3.rlr_elk_obj4_obstacle_prob = ecu_gw_2_e3_rlr_elk_obj4_obstacle_prob_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_ObstacleProb());
	g_ecu_gw_2e3.rlr_elk_obj4_ref_point_dy = ecu_gw_2_e3_rlr_elk_obj4_ref_point_dy_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_RefPointDy());
	g_ecu_gw_2e3.rlr_elk_obj4_ref_point_dx = ecu_gw_2_e3_rlr_elk_obj4_ref_point_dx_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_RefPointDx());
	g_ecu_gw_2e3.rlr_elk_obj4_track_id = ecu_gw_2_e3_rlr_elk_obj4_track_id_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Track_ID());
	g_ecu_gw_2e3.rlr_elk_obj4_type = ecu_gw_2_e3_rlr_elk_obj4_type_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Type());
	g_ecu_gw_2e3.rlr_elk_obj4_width = ecu_gw_2_e3_rlr_elk_obj4_width_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Width());
	g_ecu_gw_2e3.rlr_elk_obj4_height = ecu_gw_2_e3_rlr_elk_obj4_height_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Height());
	g_ecu_gw_2e3.rlr_elk_obj4_length = ecu_gw_2_e3_rlr_elk_obj4_length_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Length());
	g_ecu_gw_2e3.rlr_elk_obj4_heading_angle = ecu_gw_2_e3_rlr_elk_obj4_heading_angle_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_HeadingAngle());
	g_ecu_gw_2e3.rlr_elk_obj4_dy = ecu_gw_2_e3_rlr_elk_obj4_dy_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Dy());
	g_ecu_gw_2e3.rlr_elk_obj4_ref_point_loc = ecu_gw_2_e3_rlr_elk_obj4_ref_point_loc_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_RefPointLoc());
	g_ecu_gw_2e3.rlr_elk_obj4_dx = ecu_gw_2_e3_rlr_elk_obj4_dx_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Dx());
	g_ecu_gw_2e3.rlr_elk_obj4_rel_vy = ecu_gw_2_e3_rlr_elk_obj4_rel_vy_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_RelVy());
	g_ecu_gw_2e3.rlr_elk_obj4_rel_vx = ecu_gw_2_e3_rlr_elk_obj4_rel_vx_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_RelVx());
	g_ecu_gw_2e3.rlr_elk_obj4_rel_ay = ecu_gw_2_e3_rlr_elk_obj4_rel_ay_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_RelAy());
	g_ecu_gw_2e3.rlr_elk_obj4_rel_ax = ecu_gw_2_e3_rlr_elk_obj4_rel_ax_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_RelAx());
	g_ecu_gw_2e3.rlr_elk_obj4_location = ecu_gw_2_e3_rlr_elk_obj4_location_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Location());
	g_ecu_gw_2e3.rlr_elk_obj4_exist_prob = ecu_gw_2_e3_rlr_elk_obj4_exist_prob_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_ExistProb());
	g_ecu_gw_2e3.rlr_elk_obj4_measured = ecu_gw_2_e3_rlr_elk_obj4_measured_encode(calc_ecu_GW_2E3_RLR_ElkOBJ4_Measured());
	g_ecu_gw_2e3.rlr_rolling_counter_2_e3 = ecu_gw_2_e3_rlr_rolling_counter_2_e3_encode(calc_ecu_GW_2E3_RLR_RollingCounter_2E3());
	g_ecu_gw_2e3.rlr_crc_check_2_e3 = ecu_gw_2_e3_rlr_crc_check_2_e3_encode(calc_ecu_GW_2E3_RLR_CRCCheck_2E3());
	ECU_GW_2E3_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2C9 (u8_t Direction)
{
	g_ecu_gw_2c9.hu_xlevel = ecu_gw_2_c9_hu_xlevel_encode(calc_ecu_GW_2C9_HU_Xlevel());
	g_ecu_gw_2c9.hu_ylevel = ecu_gw_2_c9_hu_ylevel_encode(calc_ecu_GW_2C9_HU_Ylevel());
	g_ecu_gw_2c9.hu_interface_change_singnal = ecu_gw_2_c9_hu_interface_change_singnal_encode(calc_ecu_GW_2C9_HU_InterfaceChangeSingnal());
	g_ecu_gw_2c9.hu_novice_response = ecu_gw_2_c9_hu_novice_response_encode(calc_ecu_GW_2C9_HU_Novice_Response());
	ECU_GW_2C9_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_761 (u8_t Direction)
{
	g_ecu_gw_761.diagnose_message761 = ecu_gw_761_diagnose_message761_encode(calc_ecu_GW_761_Diagnose_message761());
	ECU_GW_761_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_57D (u8_t Direction)
{
	g_ecu_gw_57d.hu_apa_on_off = ecu_gw_57_d_hu_apa_on_off_encode(calc_ecu_GW_57D_HU_APAOnOff());
	ECU_GW_57D_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_518 (u8_t Direction)
{
	g_ecu_gw_518.bcm_car_mode = ecu_gw_518_bcm_car_mode_encode(calc_ecu_GW_518_BCM_CarMode());
	ECU_GW_518_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_2AE (u8_t Direction)
{
	g_ecu_gw_2ae.lcdal_system_status = ecu_gw_2_ae_lcdal_system_status_encode(calc_ecu_GW_2AE_LCDAL_SystemStatus());
	ECU_GW_2AE_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_3D9 (u8_t Direction)
{
	g_ecu_las_3d9.acc_obs_target1_lng_range = ecu_las_3_d9_acc_obs_target1_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget1LngRange());
	g_ecu_las_3d9.acc_obs_target1_lat_range = ecu_las_3_d9_acc_obs_target1_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget1LatRange());
	g_ecu_las_3d9.acc_obs_target1_type = ecu_las_3_d9_acc_obs_target1_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget1Type());
	g_ecu_las_3d9.acc_obs_target1_id = ecu_las_3_d9_acc_obs_target1_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget1ID());
	g_ecu_las_3d9.acc_obs_target2_lng_range = ecu_las_3_d9_acc_obs_target2_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget2LngRange());
	g_ecu_las_3d9.acc_obs_target2_lat_range = ecu_las_3_d9_acc_obs_target2_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget2LatRange());
	g_ecu_las_3d9.acc_obs_target2_type = ecu_las_3_d9_acc_obs_target2_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget2Type());
	g_ecu_las_3d9.acc_obs_target2_id = ecu_las_3_d9_acc_obs_target2_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget2ID());
	g_ecu_las_3d9.acc_obs_target3_lng_range = ecu_las_3_d9_acc_obs_target3_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget3LngRange());
	g_ecu_las_3d9.acc_obs_target3_lat_range = ecu_las_3_d9_acc_obs_target3_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget3LatRange());
	g_ecu_las_3d9.acc_obs_target3_type = ecu_las_3_d9_acc_obs_target3_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget3Type());
	g_ecu_las_3d9.acc_obs_target3_id = ecu_las_3_d9_acc_obs_target3_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget3ID());
	g_ecu_las_3d9.acc_obs_target4_lng_range = ecu_las_3_d9_acc_obs_target4_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget4LngRange());
	g_ecu_las_3d9.acc_obs_target4_lat_range = ecu_las_3_d9_acc_obs_target4_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget4LatRange());
	g_ecu_las_3d9.acc_obs_target4_type = ecu_las_3_d9_acc_obs_target4_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget4Type());
	g_ecu_las_3d9.acc_obs_target4_id = ecu_las_3_d9_acc_obs_target4_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget4ID());
	g_ecu_las_3d9.acc_obs_target5_lng_range = ecu_las_3_d9_acc_obs_target5_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget5LngRange());
	g_ecu_las_3d9.acc_obs_target5_lat_range = ecu_las_3_d9_acc_obs_target5_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget5LatRange());
	g_ecu_las_3d9.acc_obs_target5_type = ecu_las_3_d9_acc_obs_target5_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget5Type());
	g_ecu_las_3d9.acc_obs_target5_id = ecu_las_3_d9_acc_obs_target5_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget5ID());
	g_ecu_las_3d9.acc_obs_target6_lng_range = ecu_las_3_d9_acc_obs_target6_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget6LngRange());
	g_ecu_las_3d9.acc_obs_target6_lat_range = ecu_las_3_d9_acc_obs_target6_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget6LatRange());
	g_ecu_las_3d9.acc_obs_target6_type = ecu_las_3_d9_acc_obs_target6_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget6Type());
	g_ecu_las_3d9.acc_obs_target6_id = ecu_las_3_d9_acc_obs_target6_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget6ID());
	g_ecu_las_3d9.acc_obs_target7_lng_range = ecu_las_3_d9_acc_obs_target7_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget7LngRange());
	g_ecu_las_3d9.acc_obs_target7_lat_range = ecu_las_3_d9_acc_obs_target7_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget7LatRange());
	g_ecu_las_3d9.acc_obs_target7_type = ecu_las_3_d9_acc_obs_target7_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget7Type());
	g_ecu_las_3d9.acc_obs_target7_id = ecu_las_3_d9_acc_obs_target7_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget7ID());
	g_ecu_las_3d9.acc_obs_target8_lng_range = ecu_las_3_d9_acc_obs_target8_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget8LngRange());
	g_ecu_las_3d9.acc_obs_target8_lat_range = ecu_las_3_d9_acc_obs_target8_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget8LatRange());
	g_ecu_las_3d9.acc_obs_target8_type = ecu_las_3_d9_acc_obs_target8_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget8Type());
	g_ecu_las_3d9.acc_obs_target8_id = ecu_las_3_d9_acc_obs_target8_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget8ID());
	g_ecu_las_3d9.acc_obs_target9_lng_range = ecu_las_3_d9_acc_obs_target9_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget9LngRange());
	g_ecu_las_3d9.acc_obs_target9_lat_range = ecu_las_3_d9_acc_obs_target9_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget9LatRange());
	g_ecu_las_3d9.acc_obs_target9_type = ecu_las_3_d9_acc_obs_target9_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget9Type());
	g_ecu_las_3d9.acc_obs_target9_id = ecu_las_3_d9_acc_obs_target9_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget9ID());
	g_ecu_las_3d9.acc_obs_target10_lng_range = ecu_las_3_d9_acc_obs_target10_lng_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget10LngRange());
	g_ecu_las_3d9.acc_obs_target10_lat_range = ecu_las_3_d9_acc_obs_target10_lat_range_encode(calc_ecu_LAS_3D9_ACC_ObsTarget10LatRange());
	g_ecu_las_3d9.acc_obs_target10_type = ecu_las_3_d9_acc_obs_target10_type_encode(calc_ecu_LAS_3D9_ACC_ObsTarget10Type());
	g_ecu_las_3d9.acc_obs_target10_id = ecu_las_3_d9_acc_obs_target10_id_encode(calc_ecu_LAS_3D9_ACC_ObsTarget10ID());
	ECU_LAS_3D9_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_LAS_3DB (u8_t Direction)
{
	g_ecu_las_3db.acc_obs_target11_lng_range = ecu_las_3_db_acc_obs_target11_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget11LngRange());
	g_ecu_las_3db.acc_obs_target11_lat_range = ecu_las_3_db_acc_obs_target11_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget11LatRange());
	g_ecu_las_3db.acc_obs_target11_type = ecu_las_3_db_acc_obs_target11_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget11Type());
	g_ecu_las_3db.acc_obs_target11_id = ecu_las_3_db_acc_obs_target11_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget11ID());
	g_ecu_las_3db.acc_obs_target12_lng_range = ecu_las_3_db_acc_obs_target12_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget12LngRange());
	g_ecu_las_3db.acc_obs_target12_lat_range = ecu_las_3_db_acc_obs_target12_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget12LatRange());
	g_ecu_las_3db.acc_obs_target12_type = ecu_las_3_db_acc_obs_target12_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget12Type());
	g_ecu_las_3db.acc_obs_target12_id = ecu_las_3_db_acc_obs_target12_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget12ID());
	g_ecu_las_3db.acc_obs_target13_lng_range = ecu_las_3_db_acc_obs_target13_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget13LngRange());
	g_ecu_las_3db.acc_obs_target13_lat_range = ecu_las_3_db_acc_obs_target13_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget13LatRange());
	g_ecu_las_3db.acc_obs_target13_type = ecu_las_3_db_acc_obs_target13_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget13Type());
	g_ecu_las_3db.acc_obs_target13_id = ecu_las_3_db_acc_obs_target13_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget13ID());
	g_ecu_las_3db.acc_obs_target14_lng_range = ecu_las_3_db_acc_obs_target14_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget14LngRange());
	g_ecu_las_3db.acc_obs_target14_lat_range = ecu_las_3_db_acc_obs_target14_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget14LatRange());
	g_ecu_las_3db.acc_obs_target14_type = ecu_las_3_db_acc_obs_target14_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget14Type());
	g_ecu_las_3db.acc_obs_target14_id = ecu_las_3_db_acc_obs_target14_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget14ID());
	g_ecu_las_3db.acc_obs_target15_lng_range = ecu_las_3_db_acc_obs_target15_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget15LngRange());
	g_ecu_las_3db.acc_obs_target15_lat_range = ecu_las_3_db_acc_obs_target15_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget15LatRange());
	g_ecu_las_3db.acc_obs_target15_type = ecu_las_3_db_acc_obs_target15_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget15Type());
	g_ecu_las_3db.acc_obs_target15_id = ecu_las_3_db_acc_obs_target15_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget15ID());
	g_ecu_las_3db.acc_obs_target16_lng_range = ecu_las_3_db_acc_obs_target16_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget16LngRange());
	g_ecu_las_3db.acc_obs_target16_lat_range = ecu_las_3_db_acc_obs_target16_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget16LatRange());
	g_ecu_las_3db.acc_obs_target16_type = ecu_las_3_db_acc_obs_target16_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget16Type());
	g_ecu_las_3db.acc_obs_target16_id = ecu_las_3_db_acc_obs_target16_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget16ID());
	g_ecu_las_3db.acc_obs_target17_lng_range = ecu_las_3_db_acc_obs_target17_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget17LngRange());
	g_ecu_las_3db.acc_obs_target17_lat_range = ecu_las_3_db_acc_obs_target17_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget17LatRange());
	g_ecu_las_3db.acc_obs_target17_type = ecu_las_3_db_acc_obs_target17_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget17Type());
	g_ecu_las_3db.acc_obs_target17_id = ecu_las_3_db_acc_obs_target17_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget17ID());
	g_ecu_las_3db.acc_obs_target18_lng_range = ecu_las_3_db_acc_obs_target18_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget18LngRange());
	g_ecu_las_3db.acc_obs_target18_lat_range = ecu_las_3_db_acc_obs_target18_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget18LatRange());
	g_ecu_las_3db.acc_obs_target18_type = ecu_las_3_db_acc_obs_target18_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget18Type());
	g_ecu_las_3db.acc_obs_target18_id = ecu_las_3_db_acc_obs_target18_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget18ID());
	g_ecu_las_3db.acc_obs_target19_lng_range = ecu_las_3_db_acc_obs_target19_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget19LngRange());
	g_ecu_las_3db.acc_obs_target19_lat_range = ecu_las_3_db_acc_obs_target19_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget19LatRange());
	g_ecu_las_3db.acc_obs_target19_type = ecu_las_3_db_acc_obs_target19_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget19Type());
	g_ecu_las_3db.acc_obs_target19_id = ecu_las_3_db_acc_obs_target19_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget19ID());
	g_ecu_las_3db.acc_obs_target20_lng_range = ecu_las_3_db_acc_obs_target20_lng_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget20LngRange());
	g_ecu_las_3db.acc_obs_target20_lat_range = ecu_las_3_db_acc_obs_target20_lat_range_encode(calc_ecu_LAS_3DB_ACC_ObsTarget20LatRange());
	g_ecu_las_3db.acc_obs_target20_type = ecu_las_3_db_acc_obs_target20_type_encode(calc_ecu_LAS_3DB_ACC_ObsTarget20Type());
	g_ecu_las_3db.acc_obs_target20_id = ecu_las_3_db_acc_obs_target20_id_encode(calc_ecu_LAS_3DB_ACC_ObsTarget20ID());
	ECU_LAS_3DB_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_371 (u8_t Direction)
{
	g_ecu_gw_371.pcu_drv_mod2 = ecu_gw_371_pcu_drv_mod2_encode(calc_ecu_GW_371_PCU_DrvMod2());
	g_ecu_gw_371.pcu_special_mode_set_fb = ecu_gw_371_pcu_special_mode_set_fb_encode(calc_ecu_GW_371_PCU_SpecialModeSetFB());
	ECU_GW_371_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_31C (u8_t Direction)
{
	g_ecu_gw_31c.pcu_power_output_sts = ecu_gw_31_c_pcu_power_output_sts_encode(calc_ecu_GW_31C_PCU_PowerOutputSts());
	g_ecu_gw_31c.pcu_vcu_rdy_sts = ecu_gw_31_c_pcu_vcu_rdy_sts_encode(calc_ecu_GW_31C_PCU_VcuRdySts());
	ECU_GW_31C_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_10A (u8_t Direction)
{
	g_ecu_gw_10a.epb_fail_status = ecu_gw_10_a_epb_fail_status_encode(calc_ecu_GW_10A_EPB_FailStatus());
	g_ecu_gw_10a.epb_status = ecu_gw_10_a_epb_status_encode(calc_ecu_GW_10A_EPB_Status());
	g_ecu_gw_10a.epb_achieved_clamp_force = ecu_gw_10_a_epb_achieved_clamp_force_encode(calc_ecu_GW_10A_EPB_AchievedClampForce());
	g_ecu_gw_10a.epb_switch_position = ecu_gw_10_a_epb_switch_position_encode(calc_ecu_GW_10A_EPB_SwitchPosition());
	g_ecu_gw_10a.epb_switch_position_valid = ecu_gw_10_a_epb_switch_position_valid_encode(calc_ecu_GW_10A_EPB_SwitchPositionValid());
	g_ecu_gw_10a.esp_rwu_parking_active_for_acc = ecu_gw_10_a_esp_rwu_parking_active_for_acc_encode(calc_ecu_GW_10A_ESP_RWU_ParkingActiveForACC());
	g_ecu_gw_10a.esp_rwu_parking_avail_for_acc = ecu_gw_10_a_esp_rwu_parking_avail_for_acc_encode(calc_ecu_GW_10A_ESP_RWU_ParkingAvailForACC());
	g_ecu_gw_10a.epb_ap_arequest_available = ecu_gw_10_a_epb_ap_arequest_available_encode(calc_ecu_GW_10A_EPB_APArequest_Available());
	g_ecu_gw_10a.epb_rolling_counter_10_a = ecu_gw_10_a_epb_rolling_counter_10_a_encode(calc_ecu_GW_10A_EPB_RollingCounter_10A());
	g_ecu_gw_10a.epb_crc_check_10_a = ecu_gw_10_a_epb_crc_check_10_a_encode(calc_ecu_GW_10A_EPB_CRCCheck_10A());
	ECU_GW_10A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_BDC_400 (u8_t Direction)
{
	g_ecu_bdc_400.nm_message400 = ecu_bdc_400_nm_message400_encode(calc_ecu_BDC_400_NM_message400());
	ECU_BDC_400_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );
}
void on_Timer_ecu_ACC_453 (u8_t Direction)
{
	g_ecu_acc_453.nm_message453 = ecu_acc_453_nm_message453_encode(calc_ecu_ACC_453_NM_message453());
	ECU_ACC_453_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );
}
void on_Timer_ecu_GW_7DF (u8_t Direction)
{
	g_ecu_gw_7df.diagnose_message7_df = ecu_gw_7_df_diagnose_message7_df_encode(calc_ecu_GW_7DF_Diagnose_message7DF());
	ECU_GW_7DF_Send_Msg(Direction, ( CAN_MSGTYPE_STANDARD ) );
}
void on_Timer_ecu_GW_15D (u8_t Direction)
{
	g_ecu_gw_15d.esp_imu_calibrated = ecu_gw_15_d_esp_imu_calibrated_encode(calc_ecu_GW_15D_ESP_IMUCalibrated());
	g_ecu_gw_15d.esp_rolling_counter_278 = ecu_gw_15_d_esp_rolling_counter_278_encode(calc_ecu_GW_15D_ESP_RollingCounter_278());
	g_ecu_gw_15d.esp_crc_check_278 = ecu_gw_15_d_esp_crc_check_278_encode(calc_ecu_GW_15D_ESP_CRCCheck_278());
	ECU_GW_15D_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_10F (u8_t Direction)
{
	g_ecu_gw_10f.ibcu_s_output_rod_driver = ecu_gw_10_f_ibcu_s_output_rod_driver_encode(calc_ecu_GW_10F_IBCU_sOutputRodDriver());
	g_ecu_gw_10f.ibcu_s_output_rod_driver_q = ecu_gw_10_f_ibcu_s_output_rod_driver_q_encode(calc_ecu_GW_10F_IBCU_sOutputRodDriver_Q());
	g_ecu_gw_10f.ibcu_s_output_rod_act_q = ecu_gw_10_f_ibcu_s_output_rod_act_q_encode(calc_ecu_GW_10F_IBCU_sOutputRodAct_Q());
	g_ecu_gw_10f.ibcu_s_output_rod_act = ecu_gw_10_f_ibcu_s_output_rod_act_encode(calc_ecu_GW_10F_IBCU_sOutputRodAct());
	ECU_GW_10F_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_32A (u8_t Direction)
{
	g_ecu_gw_32a.trm_connect_sts = ecu_gw_32_a_trm_connect_sts_encode(calc_ecu_GW_32A_TRM_ConnectSts());
	ECU_GW_32A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_3BE (u8_t Direction)
{
	g_ecu_gw_3be.ats_current_driving_mode = ecu_gw_3_be_ats_current_driving_mode_encode(calc_ecu_GW_3BE_ATS_CurrentDrivingMode());
	ECU_GW_3BE_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
void on_Timer_ecu_GW_37A (u8_t Direction)
{
	g_ecu_gw_37a.vmc_ecas_mode = ecu_gw_37_a_vmc_ecas_mode_encode(calc_ecu_GW_37A_VMC_EcasMode());
	g_ecu_gw_37a.vmc_ecdc_mode = ecu_gw_37_a_vmc_ecdc_mode_encode(calc_ecu_GW_37A_VMC_EcdcMode());
	g_ecu_gw_37a.vmc_ecas_mode_val = ecu_gw_37_a_vmc_ecas_mode_val_encode(calc_ecu_GW_37A_VMC_EcasModeVal());
	g_ecu_gw_37a.vmc_ecas_mode_cha_sts = ecu_gw_37_a_vmc_ecas_mode_cha_sts_encode(calc_ecu_GW_37A_VMC_EcasModeCHASts());
	g_ecu_gw_37a.vmc_ctrl_level_fr_valid = ecu_gw_37_a_vmc_ctrl_level_fr_valid_encode(calc_ecu_GW_37A_VMC_CtrlLevelFRValid());
	g_ecu_gw_37a.vmc_ctrl_level_fl_valid = ecu_gw_37_a_vmc_ctrl_level_fl_valid_encode(calc_ecu_GW_37A_VMC_CtrlLevelFLValid());
	g_ecu_gw_37a.vmc_ecas_mode_frt_sts = ecu_gw_37_a_vmc_ecas_mode_frt_sts_encode(calc_ecu_GW_37A_VMC_EcasModeFRTSts());
	g_ecu_gw_37a.vmc_ecas_mode_rel_sts = ecu_gw_37_a_vmc_ecas_mode_rel_sts_encode(calc_ecu_GW_37A_VMC_EcasModeRELSts());
	g_ecu_gw_37a.vmc_ctrl_level_rr_valid = ecu_gw_37_a_vmc_ctrl_level_rr_valid_encode(calc_ecu_GW_37A_VMC_CtrlLevelRRValid());
	g_ecu_gw_37a.vmc_ctrl_level_r_ly_valid = ecu_gw_37_a_vmc_ctrl_level_r_ly_valid_encode(calc_ecu_GW_37A_VMC_CtrlLevelRLyValid());
	g_ecu_gw_37a.vmc_ctrl_level_fl = ecu_gw_37_a_vmc_ctrl_level_fl_encode(calc_ecu_GW_37A_VMC_CtrlLevelFL());
	g_ecu_gw_37a.vmc_ctrl_level_fr = ecu_gw_37_a_vmc_ctrl_level_fr_encode(calc_ecu_GW_37A_VMC_CtrlLevelFR());
	g_ecu_gw_37a.vmc_lvl_tar_rl = ecu_gw_37_a_vmc_lvl_tar_rl_encode(calc_ecu_GW_37A_VMC_LvlTarRL());
	g_ecu_gw_37a.vmc_lvl_tar_rr = ecu_gw_37_a_vmc_lvl_tar_rr_encode(calc_ecu_GW_37A_VMC_LvlTarRR());
	g_ecu_gw_37a.vmc_ctrl_level_rl = ecu_gw_37_a_vmc_ctrl_level_rl_encode(calc_ecu_GW_37A_VMC_CtrlLevelRL());
	g_ecu_gw_37a.vmc_ctrl_level_rr = ecu_gw_37_a_vmc_ctrl_level_rr_encode(calc_ecu_GW_37A_VMC_CtrlLevelRR());
	g_ecu_gw_37a.vmc_lvl_tar_fl = ecu_gw_37_a_vmc_lvl_tar_fl_encode(calc_ecu_GW_37A_VMC_LvlTarFL());
	g_ecu_gw_37a.vmc_lvl_tar_fr = ecu_gw_37_a_vmc_lvl_tar_fr_encode(calc_ecu_GW_37A_VMC_LvlTarFR());
	g_ecu_gw_37a.vmc_rolling_counter_37_a = ecu_gw_37_a_vmc_rolling_counter_37_a_encode(calc_ecu_GW_37A_VMC_RollingCounter_37A());
	g_ecu_gw_37a.vmc_crc_check_37_a = ecu_gw_37_a_vmc_crc_check_37_a_encode(calc_ecu_GW_37A_VMC_CRCCheck_37A());
	ECU_GW_37A_Send_Msg(Direction, ( CAN_MSGTYPE_FDF | CAN_MSGTYPE_BRS ) );
}
