// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _dateport_C1_conv_HH_
#define _dateport_C1_conv_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dateport_fadd_32ns_32ns_32_5_full_dsp.h"
#include "dateport_fmul_32ns_32ns_32_4_max_dsp.h"
#include "dateport_fcmp_32ns_32ns_1_1.h"

namespace ap_rtl {

struct dateport_C1_conv : public sc_module {
    // Port declarations 30
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > inputimg_address0;
    sc_out< sc_logic > inputimg_ce0;
    sc_in< sc_lv<32> > inputimg_q0;
    sc_out< sc_lv<10> > inputimg_address1;
    sc_out< sc_logic > inputimg_ce1;
    sc_in< sc_lv<32> > inputimg_q1;
    sc_out< sc_lv<13> > C1_v_address0;
    sc_out< sc_logic > C1_v_ce0;
    sc_out< sc_logic > C1_v_we0;
    sc_out< sc_lv<32> > C1_v_d0;
    sc_in< sc_lv<32> > C1_v_q0;
    sc_out< sc_lv<3> > C1_bias_address0;
    sc_out< sc_logic > C1_bias_ce0;
    sc_in< sc_lv<32> > C1_bias_q0;
    sc_out< sc_lv<13> > C1_y_address0;
    sc_out< sc_logic > C1_y_ce0;
    sc_out< sc_logic > C1_y_we0;
    sc_out< sc_lv<32> > C1_y_d0;
    sc_out< sc_lv<8> > C1_mapData_address0;
    sc_out< sc_logic > C1_mapData_ce0;
    sc_in< sc_lv<32> > C1_mapData_q0;
    sc_out< sc_lv<8> > C1_mapData_address1;
    sc_out< sc_logic > C1_mapData_ce1;
    sc_in< sc_lv<32> > C1_mapData_q1;


    // Module declarations
    dateport_C1_conv(sc_module_name name);
    SC_HAS_PROCESS(dateport_C1_conv);

    ~dateport_C1_conv();

    sc_trace_file* mVcdFile;

    dateport_fadd_32ns_32ns_32_5_full_dsp<1,5,32,32,32>* dateport_fadd_32ns_32ns_32_5_full_dsp_U0;
    dateport_fmul_32ns_32ns_32_4_max_dsp<1,4,32,32,32>* dateport_fmul_32ns_32ns_32_4_max_dsp_U1;
    dateport_fcmp_32ns_32ns_1_1<1,1,32,32,1>* dateport_fcmp_32ns_32ns_1_1_U2;
    sc_signal< sc_lv<25> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_43;
    sc_signal< sc_lv<13> > indvar_flatten4_reg_263;
    sc_signal< sc_lv<3> > i_reg_274;
    sc_signal< sc_lv<10> > indvar_flatten_reg_286;
    sc_signal< sc_lv<5> > j_reg_297;
    sc_signal< sc_lv<5> > k_reg_309;
    sc_signal< sc_lv<15> > indvar_flatten5_reg_321;
    sc_signal< sc_lv<3> > i_1_reg_332;
    sc_signal< sc_lv<13> > indvar_flatten6_reg_344;
    sc_signal< sc_lv<5> > j_1_reg_355;
    sc_signal< sc_lv<8> > indvar_flatten7_reg_366;
    sc_signal< sc_lv<5> > k_1_reg_377;
    sc_signal< sc_lv<3> > m_reg_388;
    sc_signal< sc_lv<32> > grp_fu_400_p2;
    sc_signal< sc_lv<32> > reg_417;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg11_fsm_13;
    sc_signal< bool > ap_sig_bdd_118;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it1;
    sc_signal< sc_lv<1> > exitcond_flatten8_reg_1162;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg15_fsm_17;
    sc_signal< bool > ap_sig_bdd_133;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg19_fsm_21;
    sc_signal< bool > ap_sig_bdd_142;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg1_fsm_3;
    sc_signal< bool > ap_sig_bdd_151;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond_flatten8_reg_1162_pp1_it1;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg5_fsm_7;
    sc_signal< bool > ap_sig_bdd_162;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_422_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1114;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_1;
    sc_signal< bool > ap_sig_bdd_173;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond_flatten_reg_1114_pp0_it1;
    sc_signal< sc_lv<13> > indvar_flatten_next4_fu_428_p2;
    sc_signal< sc_lv<1> > exitcond_flatten9_fu_434_p2;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_1123;
    sc_signal< sc_lv<10> > indvar_flatten_next_fu_446_p3;
    sc_signal< sc_lv<3> > i_mid2_fu_484_p3;
    sc_signal< sc_lv<3> > i_mid2_reg_1136;
    sc_signal< sc_lv<5> > k_mid2_fu_502_p3;
    sc_signal< sc_lv<5> > k_mid2_reg_1141;
    sc_signal< sc_lv<5> > j_mid2_fu_510_p3;
    sc_signal< sc_lv<5> > j_mid2_reg_1146;
    sc_signal< sc_lv<10> > C1_v_addr9_fu_556_p2;
    sc_signal< sc_lv<10> > C1_v_addr9_reg_1151;
    sc_signal< sc_lv<5> > k_2_fu_562_p2;
    sc_signal< sc_lv<5> > k_2_reg_1157;
    sc_signal< sc_lv<1> > exitcond_flatten8_fu_610_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg0_fsm_2;
    sc_signal< bool > ap_sig_bdd_213;
    sc_signal< sc_lv<15> > indvar_flatten_next5_fu_616_p2;
    sc_signal< sc_lv<15> > indvar_flatten_next5_reg_1166;
    sc_signal< sc_lv<1> > exitcond_flatten10_fu_622_p2;
    sc_signal< sc_lv<1> > exitcond_flatten10_reg_1171;
    sc_signal< sc_lv<5> > j_1_mid_fu_628_p3;
    sc_signal< sc_lv<5> > j_1_mid_reg_1177;
    sc_signal< sc_lv<1> > exitcond_flatten23_mid_fu_660_p2;
    sc_signal< sc_lv<1> > exitcond_flatten23_mid_reg_1183;
    sc_signal< sc_lv<5> > k_1_mid_fu_672_p3;
    sc_signal< sc_lv<5> > k_1_mid_reg_1189;
    sc_signal< sc_lv<1> > exitcond1_mid3_fu_692_p2;
    sc_signal< sc_lv<1> > exitcond1_mid3_reg_1195;
    sc_signal< sc_lv<8> > indvar_flatten_next6_fu_704_p3;
    sc_signal< sc_lv<8> > indvar_flatten_next6_reg_1201;
    sc_signal< sc_lv<13> > indvar_flatten_next7_fu_718_p3;
    sc_signal< sc_lv<13> > indvar_flatten_next7_reg_1206;
    sc_signal< sc_lv<3> > i_1_mid2_fu_732_p3;
    sc_signal< sc_lv<3> > i_1_mid2_reg_1211;
    sc_signal< sc_lv<3> > ap_reg_ppstg_i_1_mid2_reg_1211_pp1_it1;
    sc_signal< sc_lv<5> > j_1_mid2_fu_744_p3;
    sc_signal< sc_lv<5> > j_1_mid2_reg_1218;
    sc_signal< sc_lv<5> > k_1_mid2_fu_772_p3;
    sc_signal< sc_lv<5> > k_1_mid2_reg_1224;
    sc_signal< sc_lv<5> > tmp_22_fu_788_p2;
    sc_signal< sc_lv<5> > tmp_22_reg_1233;
    sc_signal< sc_lv<5> > tmp_322_fu_804_p3;
    sc_signal< sc_lv<5> > tmp_322_reg_1240;
    sc_signal< sc_lv<6> > C1_mapData_addr6_fu_839_p2;
    sc_signal< sc_lv<6> > C1_mapData_addr6_reg_1250;
    sc_signal< sc_lv<3> > m_1_fu_858_p2;
    sc_signal< sc_lv<3> > m_1_reg_1261;
    sc_signal< sc_lv<1> > ifzero_fu_864_p2;
    sc_signal< sc_lv<1> > ifzero_reg_1266;
    sc_signal< sc_lv<1> > ap_reg_ppstg_ifzero_reg_1266_pp1_it1;
    sc_signal< sc_lv<32> > inputimg_load_reg_1270;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg2_fsm_4;
    sc_signal< bool > ap_sig_bdd_269;
    sc_signal< sc_lv<32> > C1_mapData_addr7_fu_894_p2;
    sc_signal< sc_lv<32> > C1_mapData_addr7_reg_1275;
    sc_signal< sc_lv<32> > inputimg_load_1_reg_1287;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg3_fsm_5;
    sc_signal< bool > ap_sig_bdd_289;
    sc_signal< sc_lv<32> > C1_mapData_load_1_reg_1312;
    sc_signal< sc_lv<32> > inputimg_load_2_reg_1317;
    sc_signal< sc_lv<32> > inputimg_load_3_reg_1327;
    sc_signal< sc_lv<32> > C1_mapData_load_2_reg_1342;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg4_fsm_6;
    sc_signal< bool > ap_sig_bdd_307;
    sc_signal< sc_lv<32> > C1_mapData_load_3_reg_1347;
    sc_signal< sc_lv<32> > inputimg_load_4_reg_1352;
    sc_signal< sc_lv<10> > C1_v_addr7_fu_1014_p2;
    sc_signal< sc_lv<10> > C1_v_addr7_reg_1362;
    sc_signal< sc_lv<32> > C1_mapData_load_4_reg_1368;
    sc_signal< sc_lv<64> > tmp_323_fu_1057_p1;
    sc_signal< sc_lv<64> > tmp_323_reg_1373;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg6_fsm_8;
    sc_signal< bool > ap_sig_bdd_325;
    sc_signal< sc_lv<64> > ap_reg_ppstg_tmp_323_reg_1373_pp1_it1;
    sc_signal< sc_lv<13> > C1_v_addr_12_reg_1378;
    sc_signal< sc_lv<32> > grp_fu_407_p2;
    sc_signal< sc_lv<32> > tmp_31_reg_1383;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg7_fsm_9;
    sc_signal< bool > ap_sig_bdd_340;
    sc_signal< sc_lv<32> > tmp_31_1_reg_1393;
    sc_signal< sc_lv<32> > tmp_31_2_reg_1398;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg8_fsm_10;
    sc_signal< bool > ap_sig_bdd_350;
    sc_signal< sc_lv<32> > tmp_31_3_reg_1403;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg9_fsm_11;
    sc_signal< bool > ap_sig_bdd_359;
    sc_signal< sc_lv<32> > tmp_31_4_reg_1408;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg10_fsm_12;
    sc_signal< bool > ap_sig_bdd_368;
    sc_signal< sc_lv<32> > C1_bias_load_reg_1418;
    sc_signal< sc_lv<32> > temp_reg_1423;
    sc_signal< sc_lv<1> > tmp_84_fu_1101_p2;
    sc_signal< sc_lv<1> > tmp_84_reg_1430;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg21_fsm_23;
    sc_signal< bool > ap_sig_bdd_397;
    sc_signal< sc_lv<3> > i_phi_fu_278_p4;
    sc_signal< sc_lv<5> > j_phi_fu_301_p4;
    sc_signal< sc_lv<5> > k_phi_fu_313_p4;
    sc_signal< sc_lv<15> > indvar_flatten5_phi_fu_325_p4;
    sc_signal< sc_lv<3> > i_1_phi_fu_336_p4;
    sc_signal< sc_lv<13> > indvar_flatten6_phi_fu_348_p4;
    sc_signal< sc_lv<5> > j_1_phi_fu_359_p4;
    sc_signal< sc_lv<8> > indvar_flatten7_phi_fu_370_p4;
    sc_signal< sc_lv<5> > k_1_phi_fu_381_p4;
    sc_signal< sc_lv<3> > m_phi_fu_392_p4;
    sc_signal< sc_lv<64> > tmp_318_fu_605_p1;
    sc_signal< sc_lv<64> > tmp_325_fu_824_p1;
    sc_signal< sc_lv<64> > tmp_328_fu_853_p1;
    sc_signal< sc_lv<64> > tmp_326_fu_906_p1;
    sc_signal< sc_lv<64> > tmp_329_fu_917_p1;
    sc_signal< sc_lv<64> > tmp_331_fu_929_p1;
    sc_signal< sc_lv<64> > tmp_334_fu_941_p1;
    sc_signal< sc_lv<64> > tmp_332_fu_956_p1;
    sc_signal< sc_lv<64> > tmp_335_fu_966_p1;
    sc_signal< sc_lv<64> > tmp_337_fu_978_p1;
    sc_signal< sc_lv<64> > tmp_338_fu_983_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_1062_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg12_fsm_14;
    sc_signal< bool > ap_sig_bdd_456;
    sc_signal< sc_lv<32> > grp_fu_400_p0;
    sc_signal< sc_lv<32> > grp_fu_400_p1;
    sc_signal< sc_lv<32> > grp_fu_407_p0;
    sc_signal< sc_lv<32> > grp_fu_407_p1;
    sc_signal< sc_lv<32> > tmp_83_fu_412_p0;
    sc_signal< sc_lv<32> > tmp_83_fu_412_p1;
    sc_signal< sc_lv<10> > indvar_flatten_op_fu_440_p2;
    sc_signal< sc_lv<1> > exitcond_fu_466_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten_fu_461_p2;
    sc_signal< sc_lv<3> > i_s_fu_478_p2;
    sc_signal< sc_lv<5> > j_mid_fu_454_p3;
    sc_signal< sc_lv<1> > exitcond5_mid_fu_472_p2;
    sc_signal< sc_lv<1> > tmp_fu_497_p2;
    sc_signal< sc_lv<5> > j_2_fu_491_p2;
    sc_signal< sc_lv<8> > tmp_316_fu_522_p3;
    sc_signal< sc_lv<5> > tmp_317_fu_534_p3;
    sc_signal< sc_lv<9> > p_shl75_cast_fu_530_p1;
    sc_signal< sc_lv<9> > p_shl76_cast_fu_542_p1;
    sc_signal< sc_lv<9> > C1_v_addr8_fu_546_p2;
    sc_signal< sc_lv<10> > C1_v_addr8_cast_fu_552_p1;
    sc_signal< sc_lv<10> > tmp_14_trn_cast_fu_518_p1;
    sc_signal< sc_lv<15> > tmp_145_fu_571_p3;
    sc_signal< sc_lv<12> > tmp_146_fu_582_p3;
    sc_signal< sc_lv<32> > p_shl_fu_578_p1;
    sc_signal< sc_lv<32> > p_shl50_fu_589_p1;
    sc_signal< sc_lv<32> > C1_v_addr4_fu_593_p2;
    sc_signal< sc_lv<32> > tmp_17_trn_fu_568_p1;
    sc_signal< sc_lv<32> > C1_v_addr5_fu_599_p2;
    sc_signal< sc_lv<1> > exitcond19_fu_642_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten1_fu_636_p2;
    sc_signal< sc_lv<1> > exitcond_flatten11_fu_654_p2;
    sc_signal< sc_lv<1> > tmp_319_fu_666_p2;
    sc_signal< sc_lv<1> > exitcond_flatten23_not_fu_680_p2;
    sc_signal< sc_lv<1> > exitcond1_mid_fu_648_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten23_mid_fu_686_p2;
    sc_signal< sc_lv<8> > indvar_flatten21_op_fu_698_p2;
    sc_signal< sc_lv<13> > indvar_flatten33_op_fu_712_p2;
    sc_signal< sc_lv<3> > i_10_fu_726_p2;
    sc_signal< sc_lv<5> > j_3_fu_739_p2;
    sc_signal< sc_lv<1> > tmp_320_fu_755_p2;
    sc_signal< sc_lv<1> > tmp_147_fu_759_p2;
    sc_signal< sc_lv<5> > k_3_fu_750_p2;
    sc_signal< sc_lv<3> > m_mid2_fu_764_p3;
    sc_signal< sc_lv<5> > tmp_21_cast1_fu_784_p1;
    sc_signal< sc_lv<10> > tmp_324_fu_816_p3;
    sc_signal< sc_lv<3> > tmp_24_fu_794_p2;
    sc_signal< sc_lv<6> > tmp_trn_cast_fu_800_p1;
    sc_signal< sc_lv<6> > p_shl82_cast1_fu_812_p1;
    sc_signal< sc_lv<6> > C1_mapData_addr5_fu_833_p2;
    sc_signal< sc_lv<6> > tmp_25_trn_cast_fu_829_p1;
    sc_signal< sc_lv<5> > tmp_27_1_fu_778_p2;
    sc_signal< sc_lv<10> > tmp_327_fu_845_p3;
    sc_signal< sc_lv<8> > tmp_150_fu_883_p3;
    sc_signal< sc_lv<32> > C1_mapData_addr6_cast_fu_880_p1;
    sc_signal< sc_lv<32> > p_shl53_fu_890_p1;
    sc_signal< sc_lv<32> > C1_mapData_addr8_fu_900_p2;
    sc_signal< sc_lv<32> > C1_mapData_addr9_fu_911_p2;
    sc_signal< sc_lv<5> > tmp_27_2_fu_870_p2;
    sc_signal< sc_lv<10> > tmp_330_fu_922_p3;
    sc_signal< sc_lv<5> > tmp_27_3_fu_875_p2;
    sc_signal< sc_lv<10> > tmp_333_fu_934_p3;
    sc_signal< sc_lv<32> > C1_mapData_addr2_fu_951_p2;
    sc_signal< sc_lv<32> > C1_mapData_addr3_fu_961_p2;
    sc_signal< sc_lv<5> > tmp_27_4_fu_946_p2;
    sc_signal< sc_lv<10> > tmp_336_fu_971_p3;
    sc_signal< sc_lv<8> > tmp_321_fu_990_p3;
    sc_signal< sc_lv<9> > p_shl81_cast_fu_997_p1;
    sc_signal< sc_lv<9> > p_shl82_cast_fu_1001_p1;
    sc_signal< sc_lv<9> > C1_v_addr6_fu_1004_p2;
    sc_signal< sc_lv<10> > C1_v_addr12_cast_fu_1010_p1;
    sc_signal< sc_lv<10> > tmp_15_trn_cast_fu_987_p1;
    sc_signal< sc_lv<15> > tmp_148_fu_1023_p3;
    sc_signal< sc_lv<12> > tmp_149_fu_1034_p3;
    sc_signal< sc_lv<32> > p_shl51_fu_1030_p1;
    sc_signal< sc_lv<32> > p_shl52_fu_1041_p1;
    sc_signal< sc_lv<32> > C1_v_addr10_fu_1045_p2;
    sc_signal< sc_lv<32> > tmp_18_trn_fu_1020_p1;
    sc_signal< sc_lv<32> > C1_v_addr11_fu_1051_p2;
    sc_signal< sc_lv<32> > temp_to_int_fu_1066_p1;
    sc_signal< sc_lv<8> > tmp_80_fu_1069_p4;
    sc_signal< sc_lv<23> > tmp_151_fu_1079_p1;
    sc_signal< sc_lv<1> > notrhs_fu_1089_p2;
    sc_signal< sc_lv<1> > notlhs_fu_1083_p2;
    sc_signal< sc_lv<1> > tmp_82_fu_1095_p2;
    sc_signal< sc_lv<1> > tmp_83_fu_412_p2;
    sc_signal< sc_logic > grp_fu_400_ce;
    sc_signal< sc_logic > grp_fu_407_ce;
    sc_signal< sc_lv<5> > tmp_83_fu_412_opcode;
    sc_signal< sc_logic > ap_sig_cseq_ST_st40_fsm_24;
    sc_signal< bool > ap_sig_bdd_945;
    sc_signal< sc_lv<25> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<25> ap_ST_st1_fsm_0;
    static const sc_lv<25> ap_ST_pp0_stg0_fsm_1;
    static const sc_lv<25> ap_ST_pp1_stg0_fsm_2;
    static const sc_lv<25> ap_ST_pp1_stg1_fsm_3;
    static const sc_lv<25> ap_ST_pp1_stg2_fsm_4;
    static const sc_lv<25> ap_ST_pp1_stg3_fsm_5;
    static const sc_lv<25> ap_ST_pp1_stg4_fsm_6;
    static const sc_lv<25> ap_ST_pp1_stg5_fsm_7;
    static const sc_lv<25> ap_ST_pp1_stg6_fsm_8;
    static const sc_lv<25> ap_ST_pp1_stg7_fsm_9;
    static const sc_lv<25> ap_ST_pp1_stg8_fsm_10;
    static const sc_lv<25> ap_ST_pp1_stg9_fsm_11;
    static const sc_lv<25> ap_ST_pp1_stg10_fsm_12;
    static const sc_lv<25> ap_ST_pp1_stg11_fsm_13;
    static const sc_lv<25> ap_ST_pp1_stg12_fsm_14;
    static const sc_lv<25> ap_ST_pp1_stg13_fsm_15;
    static const sc_lv<25> ap_ST_pp1_stg14_fsm_16;
    static const sc_lv<25> ap_ST_pp1_stg15_fsm_17;
    static const sc_lv<25> ap_ST_pp1_stg16_fsm_18;
    static const sc_lv<25> ap_ST_pp1_stg17_fsm_19;
    static const sc_lv<25> ap_ST_pp1_stg18_fsm_20;
    static const sc_lv<25> ap_ST_pp1_stg19_fsm_21;
    static const sc_lv<25> ap_ST_pp1_stg20_fsm_22;
    static const sc_lv<25> ap_ST_pp1_stg21_fsm_23;
    static const sc_lv<25> ap_ST_st40_fsm_24;
    static const bool ap_true;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<13> ap_const_lv13_1260;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<10> ap_const_lv10_310;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<5> ap_const_lv5_1C;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<15> ap_const_lv15_5BE0;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<13> ap_const_lv13_F50;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<8> ap_const_lv8_8C;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<5> ap_const_lv5_3;
    static const sc_lv<5> ap_const_lv5_4;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_18;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_C1_bias_address0();
    void thread_C1_bias_ce0();
    void thread_C1_mapData_addr2_fu_951_p2();
    void thread_C1_mapData_addr3_fu_961_p2();
    void thread_C1_mapData_addr5_fu_833_p2();
    void thread_C1_mapData_addr6_cast_fu_880_p1();
    void thread_C1_mapData_addr6_fu_839_p2();
    void thread_C1_mapData_addr7_fu_894_p2();
    void thread_C1_mapData_addr8_fu_900_p2();
    void thread_C1_mapData_addr9_fu_911_p2();
    void thread_C1_mapData_address0();
    void thread_C1_mapData_address1();
    void thread_C1_mapData_ce0();
    void thread_C1_mapData_ce1();
    void thread_C1_v_addr10_fu_1045_p2();
    void thread_C1_v_addr11_fu_1051_p2();
    void thread_C1_v_addr12_cast_fu_1010_p1();
    void thread_C1_v_addr4_fu_593_p2();
    void thread_C1_v_addr5_fu_599_p2();
    void thread_C1_v_addr6_fu_1004_p2();
    void thread_C1_v_addr7_fu_1014_p2();
    void thread_C1_v_addr8_cast_fu_552_p1();
    void thread_C1_v_addr8_fu_546_p2();
    void thread_C1_v_addr9_fu_556_p2();
    void thread_C1_v_address0();
    void thread_C1_v_ce0();
    void thread_C1_v_d0();
    void thread_C1_v_we0();
    void thread_C1_y_address0();
    void thread_C1_y_ce0();
    void thread_C1_y_d0();
    void thread_C1_y_we0();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_118();
    void thread_ap_sig_bdd_133();
    void thread_ap_sig_bdd_142();
    void thread_ap_sig_bdd_151();
    void thread_ap_sig_bdd_162();
    void thread_ap_sig_bdd_173();
    void thread_ap_sig_bdd_213();
    void thread_ap_sig_bdd_269();
    void thread_ap_sig_bdd_289();
    void thread_ap_sig_bdd_307();
    void thread_ap_sig_bdd_325();
    void thread_ap_sig_bdd_340();
    void thread_ap_sig_bdd_350();
    void thread_ap_sig_bdd_359();
    void thread_ap_sig_bdd_368();
    void thread_ap_sig_bdd_397();
    void thread_ap_sig_bdd_43();
    void thread_ap_sig_bdd_456();
    void thread_ap_sig_bdd_945();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_1();
    void thread_ap_sig_cseq_ST_pp1_stg0_fsm_2();
    void thread_ap_sig_cseq_ST_pp1_stg10_fsm_12();
    void thread_ap_sig_cseq_ST_pp1_stg11_fsm_13();
    void thread_ap_sig_cseq_ST_pp1_stg12_fsm_14();
    void thread_ap_sig_cseq_ST_pp1_stg15_fsm_17();
    void thread_ap_sig_cseq_ST_pp1_stg19_fsm_21();
    void thread_ap_sig_cseq_ST_pp1_stg1_fsm_3();
    void thread_ap_sig_cseq_ST_pp1_stg21_fsm_23();
    void thread_ap_sig_cseq_ST_pp1_stg2_fsm_4();
    void thread_ap_sig_cseq_ST_pp1_stg3_fsm_5();
    void thread_ap_sig_cseq_ST_pp1_stg4_fsm_6();
    void thread_ap_sig_cseq_ST_pp1_stg5_fsm_7();
    void thread_ap_sig_cseq_ST_pp1_stg6_fsm_8();
    void thread_ap_sig_cseq_ST_pp1_stg7_fsm_9();
    void thread_ap_sig_cseq_ST_pp1_stg8_fsm_10();
    void thread_ap_sig_cseq_ST_pp1_stg9_fsm_11();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st40_fsm_24();
    void thread_exitcond19_fu_642_p2();
    void thread_exitcond1_mid3_fu_692_p2();
    void thread_exitcond1_mid_fu_648_p2();
    void thread_exitcond5_mid_fu_472_p2();
    void thread_exitcond_flatten10_fu_622_p2();
    void thread_exitcond_flatten11_fu_654_p2();
    void thread_exitcond_flatten23_mid_fu_660_p2();
    void thread_exitcond_flatten23_not_fu_680_p2();
    void thread_exitcond_flatten8_fu_610_p2();
    void thread_exitcond_flatten9_fu_434_p2();
    void thread_exitcond_flatten_fu_422_p2();
    void thread_exitcond_fu_466_p2();
    void thread_grp_fu_400_ce();
    void thread_grp_fu_400_p0();
    void thread_grp_fu_400_p1();
    void thread_grp_fu_407_ce();
    void thread_grp_fu_407_p0();
    void thread_grp_fu_407_p1();
    void thread_i_10_fu_726_p2();
    void thread_i_1_mid2_fu_732_p3();
    void thread_i_1_phi_fu_336_p4();
    void thread_i_mid2_fu_484_p3();
    void thread_i_phi_fu_278_p4();
    void thread_i_s_fu_478_p2();
    void thread_ifzero_fu_864_p2();
    void thread_indvar_flatten21_op_fu_698_p2();
    void thread_indvar_flatten33_op_fu_712_p2();
    void thread_indvar_flatten5_phi_fu_325_p4();
    void thread_indvar_flatten6_phi_fu_348_p4();
    void thread_indvar_flatten7_phi_fu_370_p4();
    void thread_indvar_flatten_next4_fu_428_p2();
    void thread_indvar_flatten_next5_fu_616_p2();
    void thread_indvar_flatten_next6_fu_704_p3();
    void thread_indvar_flatten_next7_fu_718_p3();
    void thread_indvar_flatten_next_fu_446_p3();
    void thread_indvar_flatten_op_fu_440_p2();
    void thread_inputimg_address0();
    void thread_inputimg_address1();
    void thread_inputimg_ce0();
    void thread_inputimg_ce1();
    void thread_j_1_mid2_fu_744_p3();
    void thread_j_1_mid_fu_628_p3();
    void thread_j_1_phi_fu_359_p4();
    void thread_j_2_fu_491_p2();
    void thread_j_3_fu_739_p2();
    void thread_j_mid2_fu_510_p3();
    void thread_j_mid_fu_454_p3();
    void thread_j_phi_fu_301_p4();
    void thread_k_1_mid2_fu_772_p3();
    void thread_k_1_mid_fu_672_p3();
    void thread_k_1_phi_fu_381_p4();
    void thread_k_2_fu_562_p2();
    void thread_k_3_fu_750_p2();
    void thread_k_mid2_fu_502_p3();
    void thread_k_phi_fu_313_p4();
    void thread_m_1_fu_858_p2();
    void thread_m_mid2_fu_764_p3();
    void thread_m_phi_fu_392_p4();
    void thread_not_exitcond_flatten1_fu_636_p2();
    void thread_not_exitcond_flatten23_mid_fu_686_p2();
    void thread_not_exitcond_flatten_fu_461_p2();
    void thread_notlhs_fu_1083_p2();
    void thread_notrhs_fu_1089_p2();
    void thread_p_shl50_fu_589_p1();
    void thread_p_shl51_fu_1030_p1();
    void thread_p_shl52_fu_1041_p1();
    void thread_p_shl53_fu_890_p1();
    void thread_p_shl75_cast_fu_530_p1();
    void thread_p_shl76_cast_fu_542_p1();
    void thread_p_shl81_cast_fu_997_p1();
    void thread_p_shl82_cast1_fu_812_p1();
    void thread_p_shl82_cast_fu_1001_p1();
    void thread_p_shl_fu_578_p1();
    void thread_temp_to_int_fu_1066_p1();
    void thread_tmp_145_fu_571_p3();
    void thread_tmp_146_fu_582_p3();
    void thread_tmp_147_fu_759_p2();
    void thread_tmp_148_fu_1023_p3();
    void thread_tmp_149_fu_1034_p3();
    void thread_tmp_14_trn_cast_fu_518_p1();
    void thread_tmp_150_fu_883_p3();
    void thread_tmp_151_fu_1079_p1();
    void thread_tmp_15_trn_cast_fu_987_p1();
    void thread_tmp_17_trn_fu_568_p1();
    void thread_tmp_18_trn_fu_1020_p1();
    void thread_tmp_21_cast1_fu_784_p1();
    void thread_tmp_22_fu_788_p2();
    void thread_tmp_24_fu_794_p2();
    void thread_tmp_25_trn_cast_fu_829_p1();
    void thread_tmp_27_1_fu_778_p2();
    void thread_tmp_27_2_fu_870_p2();
    void thread_tmp_27_3_fu_875_p2();
    void thread_tmp_27_4_fu_946_p2();
    void thread_tmp_316_fu_522_p3();
    void thread_tmp_317_fu_534_p3();
    void thread_tmp_318_fu_605_p1();
    void thread_tmp_319_fu_666_p2();
    void thread_tmp_320_fu_755_p2();
    void thread_tmp_321_fu_990_p3();
    void thread_tmp_322_fu_804_p3();
    void thread_tmp_323_fu_1057_p1();
    void thread_tmp_324_fu_816_p3();
    void thread_tmp_325_fu_824_p1();
    void thread_tmp_326_fu_906_p1();
    void thread_tmp_327_fu_845_p3();
    void thread_tmp_328_fu_853_p1();
    void thread_tmp_329_fu_917_p1();
    void thread_tmp_330_fu_922_p3();
    void thread_tmp_331_fu_929_p1();
    void thread_tmp_332_fu_956_p1();
    void thread_tmp_333_fu_934_p3();
    void thread_tmp_334_fu_941_p1();
    void thread_tmp_335_fu_966_p1();
    void thread_tmp_336_fu_971_p3();
    void thread_tmp_337_fu_978_p1();
    void thread_tmp_338_fu_983_p1();
    void thread_tmp_80_fu_1069_p4();
    void thread_tmp_82_fu_1095_p2();
    void thread_tmp_83_fu_412_opcode();
    void thread_tmp_83_fu_412_p0();
    void thread_tmp_83_fu_412_p1();
    void thread_tmp_84_fu_1101_p2();
    void thread_tmp_fu_497_p2();
    void thread_tmp_s_fu_1062_p1();
    void thread_tmp_trn_cast_fu_800_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
