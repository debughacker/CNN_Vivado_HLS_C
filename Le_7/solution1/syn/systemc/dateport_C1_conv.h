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
    sc_signal< sc_lv<27> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_45;
    sc_signal< sc_lv<15> > indvar_flatten3_reg_286;
    sc_signal< sc_lv<3> > i_1_reg_297;
    sc_signal< sc_lv<13> > indvar_flatten4_reg_309;
    sc_signal< sc_lv<5> > j_1_reg_320;
    sc_signal< sc_lv<8> > indvar_flatten_reg_331;
    sc_signal< sc_lv<5> > k_1_reg_342;
    sc_signal< sc_lv<3> > m_reg_353;
    sc_signal< sc_lv<32> > grp_fu_365_p2;
    sc_signal< sc_lv<32> > reg_382;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg11_fsm_15;
    sc_signal< bool > ap_sig_bdd_110;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1049;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg15_fsm_19;
    sc_signal< bool > ap_sig_bdd_125;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg19_fsm_23;
    sc_signal< bool > ap_sig_bdd_134;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg1_fsm_5;
    sc_signal< bool > ap_sig_bdd_143;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond_flatten_reg_1049_pp0_it1;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg5_fsm_9;
    sc_signal< bool > ap_sig_bdd_154;
    sc_signal< sc_lv<1> > exitcond7_fu_387_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_165;
    sc_signal< sc_lv<3> > i_2_fu_393_p2;
    sc_signal< sc_lv<3> > i_2_reg_1018;
    sc_signal< sc_lv<10> > C1_v_addr8_cast_fu_429_p1;
    sc_signal< sc_lv<10> > C1_v_addr8_cast_reg_1023;
    sc_signal< sc_lv<5> > j_2_fu_439_p2;
    sc_signal< sc_lv<5> > j_2_reg_1031;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_180;
    sc_signal< sc_lv<32> > C1_v_addr11_fu_478_p2;
    sc_signal< sc_lv<32> > C1_v_addr11_reg_1036;
    sc_signal< sc_lv<1> > exitcond6_fu_433_p2;
    sc_signal< sc_lv<5> > k_2_fu_490_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_194;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_510_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_4;
    sc_signal< bool > ap_sig_bdd_202;
    sc_signal< sc_lv<15> > indvar_flatten_next3_fu_516_p2;
    sc_signal< sc_lv<15> > indvar_flatten_next3_reg_1053;
    sc_signal< sc_lv<1> > exitcond_flatten7_fu_522_p2;
    sc_signal< sc_lv<1> > exitcond_flatten7_reg_1058;
    sc_signal< sc_lv<5> > j_1_mid_fu_528_p3;
    sc_signal< sc_lv<5> > j_1_mid_reg_1064;
    sc_signal< sc_lv<1> > exitcond_flatten_mid_fu_560_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_mid_reg_1070;
    sc_signal< sc_lv<5> > k_1_mid_fu_572_p3;
    sc_signal< sc_lv<5> > k_1_mid_reg_1076;
    sc_signal< sc_lv<1> > exitcond1_mid3_fu_592_p2;
    sc_signal< sc_lv<1> > exitcond1_mid3_reg_1082;
    sc_signal< sc_lv<8> > indvar_flatten_next_fu_604_p3;
    sc_signal< sc_lv<8> > indvar_flatten_next_reg_1088;
    sc_signal< sc_lv<13> > indvar_flatten_next4_fu_618_p3;
    sc_signal< sc_lv<13> > indvar_flatten_next4_reg_1093;
    sc_signal< sc_lv<3> > i_1_mid2_fu_632_p3;
    sc_signal< sc_lv<3> > i_1_mid2_reg_1098;
    sc_signal< sc_lv<3> > ap_reg_ppstg_i_1_mid2_reg_1098_pp0_it1;
    sc_signal< sc_lv<5> > j_1_mid2_fu_644_p3;
    sc_signal< sc_lv<5> > j_1_mid2_reg_1105;
    sc_signal< sc_lv<5> > k_1_mid2_fu_672_p3;
    sc_signal< sc_lv<5> > k_1_mid2_reg_1111;
    sc_signal< sc_lv<5> > tmp_22_fu_688_p2;
    sc_signal< sc_lv<5> > tmp_22_reg_1120;
    sc_signal< sc_lv<5> > tmp_311_fu_704_p3;
    sc_signal< sc_lv<5> > tmp_311_reg_1127;
    sc_signal< sc_lv<6> > C1_mapData_addr2_fu_739_p2;
    sc_signal< sc_lv<6> > C1_mapData_addr2_reg_1137;
    sc_signal< sc_lv<3> > m_1_fu_758_p2;
    sc_signal< sc_lv<3> > m_1_reg_1148;
    sc_signal< sc_lv<1> > ifzero_fu_764_p2;
    sc_signal< sc_lv<1> > ifzero_reg_1153;
    sc_signal< sc_lv<1> > ap_reg_ppstg_ifzero_reg_1153_pp0_it1;
    sc_signal< sc_lv<32> > inputimg_load_reg_1157;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg2_fsm_6;
    sc_signal< bool > ap_sig_bdd_258;
    sc_signal< sc_lv<32> > C1_mapData_addr3_fu_794_p2;
    sc_signal< sc_lv<32> > C1_mapData_addr3_reg_1162;
    sc_signal< sc_lv<32> > inputimg_load_1_reg_1174;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg3_fsm_7;
    sc_signal< bool > ap_sig_bdd_278;
    sc_signal< sc_lv<32> > C1_mapData_load_1_reg_1199;
    sc_signal< sc_lv<32> > inputimg_load_2_reg_1204;
    sc_signal< sc_lv<32> > inputimg_load_3_reg_1214;
    sc_signal< sc_lv<32> > C1_mapData_load_2_reg_1229;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg4_fsm_8;
    sc_signal< bool > ap_sig_bdd_296;
    sc_signal< sc_lv<32> > C1_mapData_load_3_reg_1234;
    sc_signal< sc_lv<32> > inputimg_load_4_reg_1239;
    sc_signal< sc_lv<10> > C1_v_addr4_fu_914_p2;
    sc_signal< sc_lv<10> > C1_v_addr4_reg_1249;
    sc_signal< sc_lv<32> > C1_mapData_load_4_reg_1255;
    sc_signal< sc_lv<64> > tmp_312_fu_957_p1;
    sc_signal< sc_lv<64> > tmp_312_reg_1260;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg6_fsm_10;
    sc_signal< bool > ap_sig_bdd_314;
    sc_signal< sc_lv<64> > ap_reg_ppstg_tmp_312_reg_1260_pp0_it1;
    sc_signal< sc_lv<13> > C1_v_addr_7_reg_1265;
    sc_signal< sc_lv<32> > grp_fu_372_p2;
    sc_signal< sc_lv<32> > tmp_31_reg_1270;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg7_fsm_11;
    sc_signal< bool > ap_sig_bdd_329;
    sc_signal< sc_lv<32> > tmp_31_1_reg_1280;
    sc_signal< sc_lv<32> > tmp_31_2_reg_1285;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg8_fsm_12;
    sc_signal< bool > ap_sig_bdd_339;
    sc_signal< sc_lv<32> > tmp_31_3_reg_1290;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg9_fsm_13;
    sc_signal< bool > ap_sig_bdd_348;
    sc_signal< sc_lv<32> > tmp_31_4_reg_1295;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg10_fsm_14;
    sc_signal< bool > ap_sig_bdd_357;
    sc_signal< sc_lv<32> > C1_bias_load_reg_1305;
    sc_signal< sc_lv<32> > temp_reg_1310;
    sc_signal< sc_lv<1> > tmp_84_fu_1001_p2;
    sc_signal< sc_lv<1> > tmp_84_reg_1317;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg21_fsm_25;
    sc_signal< bool > ap_sig_bdd_381;
    sc_signal< sc_lv<3> > i_reg_253;
    sc_signal< sc_lv<5> > j_reg_264;
    sc_signal< sc_lv<1> > exitcond5_fu_484_p2;
    sc_signal< sc_lv<5> > k_reg_275;
    sc_signal< sc_lv<15> > indvar_flatten3_phi_fu_290_p4;
    sc_signal< sc_lv<3> > i_1_phi_fu_301_p4;
    sc_signal< sc_lv<13> > indvar_flatten4_phi_fu_313_p4;
    sc_signal< sc_lv<5> > j_1_phi_fu_324_p4;
    sc_signal< sc_lv<8> > indvar_flatten_phi_fu_335_p4;
    sc_signal< sc_lv<5> > k_1_phi_fu_346_p4;
    sc_signal< sc_lv<3> > m_phi_fu_357_p4;
    sc_signal< sc_lv<64> > tmp_328_fu_505_p1;
    sc_signal< sc_lv<64> > tmp_314_fu_724_p1;
    sc_signal< sc_lv<64> > tmp_317_fu_753_p1;
    sc_signal< sc_lv<64> > tmp_315_fu_806_p1;
    sc_signal< sc_lv<64> > tmp_318_fu_817_p1;
    sc_signal< sc_lv<64> > tmp_320_fu_829_p1;
    sc_signal< sc_lv<64> > tmp_323_fu_841_p1;
    sc_signal< sc_lv<64> > tmp_321_fu_856_p1;
    sc_signal< sc_lv<64> > tmp_324_fu_866_p1;
    sc_signal< sc_lv<64> > tmp_326_fu_878_p1;
    sc_signal< sc_lv<64> > tmp_327_fu_883_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_962_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg12_fsm_16;
    sc_signal< bool > ap_sig_bdd_448;
    sc_signal< sc_lv<32> > grp_fu_365_p0;
    sc_signal< sc_lv<32> > grp_fu_365_p1;
    sc_signal< sc_lv<32> > grp_fu_372_p0;
    sc_signal< sc_lv<32> > grp_fu_372_p1;
    sc_signal< sc_lv<32> > tmp_83_fu_377_p0;
    sc_signal< sc_lv<32> > tmp_83_fu_377_p1;
    sc_signal< sc_lv<8> > tmp_fu_399_p3;
    sc_signal< sc_lv<5> > tmp_307_fu_411_p3;
    sc_signal< sc_lv<9> > p_shl_cast_fu_407_p1;
    sc_signal< sc_lv<9> > p_shl74_cast_fu_419_p1;
    sc_signal< sc_lv<9> > C1_v_addr8_fu_423_p2;
    sc_signal< sc_lv<10> > tmp_14_trn_cast_fu_445_p1;
    sc_signal< sc_lv<10> > C1_v_addr10_fu_449_p2;
    sc_signal< sc_lv<15> > tmp_150_fu_454_p3;
    sc_signal< sc_lv<12> > tmp_151_fu_466_p3;
    sc_signal< sc_lv<32> > p_shl51_fu_462_p1;
    sc_signal< sc_lv<32> > p_shl52_fu_474_p1;
    sc_signal< sc_lv<32> > tmp_17_trn_fu_496_p1;
    sc_signal< sc_lv<32> > C1_v_addr12_fu_500_p2;
    sc_signal< sc_lv<1> > exitcond_fu_542_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten_fu_536_p2;
    sc_signal< sc_lv<1> > exitcond_flatten8_fu_554_p2;
    sc_signal< sc_lv<1> > tmp_308_fu_566_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_not_fu_580_p2;
    sc_signal< sc_lv<1> > exitcond1_mid_fu_548_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten_mid_fu_586_p2;
    sc_signal< sc_lv<8> > indvar_flatten_op_fu_598_p2;
    sc_signal< sc_lv<13> > indvar_flatten14_op_fu_612_p2;
    sc_signal< sc_lv<3> > i_s_fu_626_p2;
    sc_signal< sc_lv<5> > j_3_fu_639_p2;
    sc_signal< sc_lv<1> > tmp_309_fu_655_p2;
    sc_signal< sc_lv<1> > tmp_145_fu_659_p2;
    sc_signal< sc_lv<5> > k_3_fu_650_p2;
    sc_signal< sc_lv<3> > m_mid2_fu_664_p3;
    sc_signal< sc_lv<5> > tmp_21_cast1_fu_684_p1;
    sc_signal< sc_lv<10> > tmp_313_fu_716_p3;
    sc_signal< sc_lv<3> > tmp_24_fu_694_p2;
    sc_signal< sc_lv<6> > tmp_trn_cast_fu_700_p1;
    sc_signal< sc_lv<6> > p_shl82_cast1_fu_712_p1;
    sc_signal< sc_lv<6> > C1_mapData_addr1_fu_733_p2;
    sc_signal< sc_lv<6> > tmp_25_trn_cast_fu_729_p1;
    sc_signal< sc_lv<5> > tmp_27_1_fu_678_p2;
    sc_signal< sc_lv<10> > tmp_316_fu_745_p3;
    sc_signal< sc_lv<8> > tmp_148_fu_783_p3;
    sc_signal< sc_lv<32> > C1_mapData_addr2_cast_fu_780_p1;
    sc_signal< sc_lv<32> > p_shl50_fu_790_p1;
    sc_signal< sc_lv<32> > C1_mapData_addr4_fu_800_p2;
    sc_signal< sc_lv<32> > C1_mapData_addr5_fu_811_p2;
    sc_signal< sc_lv<5> > tmp_27_2_fu_770_p2;
    sc_signal< sc_lv<10> > tmp_319_fu_822_p3;
    sc_signal< sc_lv<5> > tmp_27_3_fu_775_p2;
    sc_signal< sc_lv<10> > tmp_322_fu_834_p3;
    sc_signal< sc_lv<32> > C1_mapData_addr6_fu_851_p2;
    sc_signal< sc_lv<32> > C1_mapData_addr7_fu_861_p2;
    sc_signal< sc_lv<5> > tmp_27_4_fu_846_p2;
    sc_signal< sc_lv<10> > tmp_325_fu_871_p3;
    sc_signal< sc_lv<8> > tmp_310_fu_890_p3;
    sc_signal< sc_lv<9> > p_shl81_cast_fu_897_p1;
    sc_signal< sc_lv<9> > p_shl82_cast_fu_901_p1;
    sc_signal< sc_lv<9> > C1_v_addr9_fu_904_p2;
    sc_signal< sc_lv<10> > C1_v_addr9_cast_fu_910_p1;
    sc_signal< sc_lv<10> > tmp_15_trn_cast_fu_887_p1;
    sc_signal< sc_lv<15> > tmp_146_fu_923_p3;
    sc_signal< sc_lv<12> > tmp_147_fu_934_p3;
    sc_signal< sc_lv<32> > p_shl_fu_930_p1;
    sc_signal< sc_lv<32> > p_shl49_fu_941_p1;
    sc_signal< sc_lv<32> > C1_v_addr5_fu_945_p2;
    sc_signal< sc_lv<32> > tmp_18_trn_fu_920_p1;
    sc_signal< sc_lv<32> > C1_v_addr6_fu_951_p2;
    sc_signal< sc_lv<32> > temp_to_int_fu_966_p1;
    sc_signal< sc_lv<8> > tmp_80_fu_969_p4;
    sc_signal< sc_lv<23> > tmp_149_fu_979_p1;
    sc_signal< sc_lv<1> > notrhs_fu_989_p2;
    sc_signal< sc_lv<1> > notlhs_fu_983_p2;
    sc_signal< sc_lv<1> > tmp_82_fu_995_p2;
    sc_signal< sc_lv<1> > tmp_83_fu_377_p2;
    sc_signal< sc_logic > grp_fu_365_ce;
    sc_signal< sc_logic > grp_fu_372_ce;
    sc_signal< sc_lv<5> > tmp_83_fu_377_opcode;
    sc_signal< sc_logic > ap_sig_cseq_ST_st40_fsm_26;
    sc_signal< bool > ap_sig_bdd_891;
    sc_signal< sc_lv<27> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<27> ap_ST_st1_fsm_0;
    static const sc_lv<27> ap_ST_st2_fsm_1;
    static const sc_lv<27> ap_ST_st3_fsm_2;
    static const sc_lv<27> ap_ST_st4_fsm_3;
    static const sc_lv<27> ap_ST_pp0_stg0_fsm_4;
    static const sc_lv<27> ap_ST_pp0_stg1_fsm_5;
    static const sc_lv<27> ap_ST_pp0_stg2_fsm_6;
    static const sc_lv<27> ap_ST_pp0_stg3_fsm_7;
    static const sc_lv<27> ap_ST_pp0_stg4_fsm_8;
    static const sc_lv<27> ap_ST_pp0_stg5_fsm_9;
    static const sc_lv<27> ap_ST_pp0_stg6_fsm_10;
    static const sc_lv<27> ap_ST_pp0_stg7_fsm_11;
    static const sc_lv<27> ap_ST_pp0_stg8_fsm_12;
    static const sc_lv<27> ap_ST_pp0_stg9_fsm_13;
    static const sc_lv<27> ap_ST_pp0_stg10_fsm_14;
    static const sc_lv<27> ap_ST_pp0_stg11_fsm_15;
    static const sc_lv<27> ap_ST_pp0_stg12_fsm_16;
    static const sc_lv<27> ap_ST_pp0_stg13_fsm_17;
    static const sc_lv<27> ap_ST_pp0_stg14_fsm_18;
    static const sc_lv<27> ap_ST_pp0_stg15_fsm_19;
    static const sc_lv<27> ap_ST_pp0_stg16_fsm_20;
    static const sc_lv<27> ap_ST_pp0_stg17_fsm_21;
    static const sc_lv<27> ap_ST_pp0_stg18_fsm_22;
    static const sc_lv<27> ap_ST_pp0_stg19_fsm_23;
    static const sc_lv<27> ap_ST_pp0_stg20_fsm_24;
    static const sc_lv<27> ap_ST_pp0_stg21_fsm_25;
    static const sc_lv<27> ap_ST_st40_fsm_26;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<5> ap_const_lv5_1C;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<15> ap_const_lv15_5BE0;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<13> ap_const_lv13_F50;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<8> ap_const_lv8_8C;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<5> ap_const_lv5_3;
    static const sc_lv<5> ap_const_lv5_4;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_1A;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_C1_bias_address0();
    void thread_C1_bias_ce0();
    void thread_C1_mapData_addr1_fu_733_p2();
    void thread_C1_mapData_addr2_cast_fu_780_p1();
    void thread_C1_mapData_addr2_fu_739_p2();
    void thread_C1_mapData_addr3_fu_794_p2();
    void thread_C1_mapData_addr4_fu_800_p2();
    void thread_C1_mapData_addr5_fu_811_p2();
    void thread_C1_mapData_addr6_fu_851_p2();
    void thread_C1_mapData_addr7_fu_861_p2();
    void thread_C1_mapData_address0();
    void thread_C1_mapData_address1();
    void thread_C1_mapData_ce0();
    void thread_C1_mapData_ce1();
    void thread_C1_v_addr10_fu_449_p2();
    void thread_C1_v_addr11_fu_478_p2();
    void thread_C1_v_addr12_fu_500_p2();
    void thread_C1_v_addr4_fu_914_p2();
    void thread_C1_v_addr5_fu_945_p2();
    void thread_C1_v_addr6_fu_951_p2();
    void thread_C1_v_addr8_cast_fu_429_p1();
    void thread_C1_v_addr8_fu_423_p2();
    void thread_C1_v_addr9_cast_fu_910_p1();
    void thread_C1_v_addr9_fu_904_p2();
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
    void thread_ap_sig_bdd_110();
    void thread_ap_sig_bdd_125();
    void thread_ap_sig_bdd_134();
    void thread_ap_sig_bdd_143();
    void thread_ap_sig_bdd_154();
    void thread_ap_sig_bdd_165();
    void thread_ap_sig_bdd_180();
    void thread_ap_sig_bdd_194();
    void thread_ap_sig_bdd_202();
    void thread_ap_sig_bdd_258();
    void thread_ap_sig_bdd_278();
    void thread_ap_sig_bdd_296();
    void thread_ap_sig_bdd_314();
    void thread_ap_sig_bdd_329();
    void thread_ap_sig_bdd_339();
    void thread_ap_sig_bdd_348();
    void thread_ap_sig_bdd_357();
    void thread_ap_sig_bdd_381();
    void thread_ap_sig_bdd_448();
    void thread_ap_sig_bdd_45();
    void thread_ap_sig_bdd_891();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_4();
    void thread_ap_sig_cseq_ST_pp0_stg10_fsm_14();
    void thread_ap_sig_cseq_ST_pp0_stg11_fsm_15();
    void thread_ap_sig_cseq_ST_pp0_stg12_fsm_16();
    void thread_ap_sig_cseq_ST_pp0_stg15_fsm_19();
    void thread_ap_sig_cseq_ST_pp0_stg19_fsm_23();
    void thread_ap_sig_cseq_ST_pp0_stg1_fsm_5();
    void thread_ap_sig_cseq_ST_pp0_stg21_fsm_25();
    void thread_ap_sig_cseq_ST_pp0_stg2_fsm_6();
    void thread_ap_sig_cseq_ST_pp0_stg3_fsm_7();
    void thread_ap_sig_cseq_ST_pp0_stg4_fsm_8();
    void thread_ap_sig_cseq_ST_pp0_stg5_fsm_9();
    void thread_ap_sig_cseq_ST_pp0_stg6_fsm_10();
    void thread_ap_sig_cseq_ST_pp0_stg7_fsm_11();
    void thread_ap_sig_cseq_ST_pp0_stg8_fsm_12();
    void thread_ap_sig_cseq_ST_pp0_stg9_fsm_13();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st40_fsm_26();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_exitcond1_mid3_fu_592_p2();
    void thread_exitcond1_mid_fu_548_p2();
    void thread_exitcond5_fu_484_p2();
    void thread_exitcond6_fu_433_p2();
    void thread_exitcond7_fu_387_p2();
    void thread_exitcond_flatten7_fu_522_p2();
    void thread_exitcond_flatten8_fu_554_p2();
    void thread_exitcond_flatten_fu_510_p2();
    void thread_exitcond_flatten_mid_fu_560_p2();
    void thread_exitcond_flatten_not_fu_580_p2();
    void thread_exitcond_fu_542_p2();
    void thread_grp_fu_365_ce();
    void thread_grp_fu_365_p0();
    void thread_grp_fu_365_p1();
    void thread_grp_fu_372_ce();
    void thread_grp_fu_372_p0();
    void thread_grp_fu_372_p1();
    void thread_i_1_mid2_fu_632_p3();
    void thread_i_1_phi_fu_301_p4();
    void thread_i_2_fu_393_p2();
    void thread_i_s_fu_626_p2();
    void thread_ifzero_fu_764_p2();
    void thread_indvar_flatten14_op_fu_612_p2();
    void thread_indvar_flatten3_phi_fu_290_p4();
    void thread_indvar_flatten4_phi_fu_313_p4();
    void thread_indvar_flatten_next3_fu_516_p2();
    void thread_indvar_flatten_next4_fu_618_p3();
    void thread_indvar_flatten_next_fu_604_p3();
    void thread_indvar_flatten_op_fu_598_p2();
    void thread_indvar_flatten_phi_fu_335_p4();
    void thread_inputimg_address0();
    void thread_inputimg_address1();
    void thread_inputimg_ce0();
    void thread_inputimg_ce1();
    void thread_j_1_mid2_fu_644_p3();
    void thread_j_1_mid_fu_528_p3();
    void thread_j_1_phi_fu_324_p4();
    void thread_j_2_fu_439_p2();
    void thread_j_3_fu_639_p2();
    void thread_k_1_mid2_fu_672_p3();
    void thread_k_1_mid_fu_572_p3();
    void thread_k_1_phi_fu_346_p4();
    void thread_k_2_fu_490_p2();
    void thread_k_3_fu_650_p2();
    void thread_m_1_fu_758_p2();
    void thread_m_mid2_fu_664_p3();
    void thread_m_phi_fu_357_p4();
    void thread_not_exitcond_flatten_fu_536_p2();
    void thread_not_exitcond_flatten_mid_fu_586_p2();
    void thread_notlhs_fu_983_p2();
    void thread_notrhs_fu_989_p2();
    void thread_p_shl49_fu_941_p1();
    void thread_p_shl50_fu_790_p1();
    void thread_p_shl51_fu_462_p1();
    void thread_p_shl52_fu_474_p1();
    void thread_p_shl74_cast_fu_419_p1();
    void thread_p_shl81_cast_fu_897_p1();
    void thread_p_shl82_cast1_fu_712_p1();
    void thread_p_shl82_cast_fu_901_p1();
    void thread_p_shl_cast_fu_407_p1();
    void thread_p_shl_fu_930_p1();
    void thread_temp_to_int_fu_966_p1();
    void thread_tmp_145_fu_659_p2();
    void thread_tmp_146_fu_923_p3();
    void thread_tmp_147_fu_934_p3();
    void thread_tmp_148_fu_783_p3();
    void thread_tmp_149_fu_979_p1();
    void thread_tmp_14_trn_cast_fu_445_p1();
    void thread_tmp_150_fu_454_p3();
    void thread_tmp_151_fu_466_p3();
    void thread_tmp_15_trn_cast_fu_887_p1();
    void thread_tmp_17_trn_fu_496_p1();
    void thread_tmp_18_trn_fu_920_p1();
    void thread_tmp_21_cast1_fu_684_p1();
    void thread_tmp_22_fu_688_p2();
    void thread_tmp_24_fu_694_p2();
    void thread_tmp_25_trn_cast_fu_729_p1();
    void thread_tmp_27_1_fu_678_p2();
    void thread_tmp_27_2_fu_770_p2();
    void thread_tmp_27_3_fu_775_p2();
    void thread_tmp_27_4_fu_846_p2();
    void thread_tmp_307_fu_411_p3();
    void thread_tmp_308_fu_566_p2();
    void thread_tmp_309_fu_655_p2();
    void thread_tmp_310_fu_890_p3();
    void thread_tmp_311_fu_704_p3();
    void thread_tmp_312_fu_957_p1();
    void thread_tmp_313_fu_716_p3();
    void thread_tmp_314_fu_724_p1();
    void thread_tmp_315_fu_806_p1();
    void thread_tmp_316_fu_745_p3();
    void thread_tmp_317_fu_753_p1();
    void thread_tmp_318_fu_817_p1();
    void thread_tmp_319_fu_822_p3();
    void thread_tmp_320_fu_829_p1();
    void thread_tmp_321_fu_856_p1();
    void thread_tmp_322_fu_834_p3();
    void thread_tmp_323_fu_841_p1();
    void thread_tmp_324_fu_866_p1();
    void thread_tmp_325_fu_871_p3();
    void thread_tmp_326_fu_878_p1();
    void thread_tmp_327_fu_883_p1();
    void thread_tmp_328_fu_505_p1();
    void thread_tmp_80_fu_969_p4();
    void thread_tmp_82_fu_995_p2();
    void thread_tmp_83_fu_377_opcode();
    void thread_tmp_83_fu_377_p0();
    void thread_tmp_83_fu_377_p1();
    void thread_tmp_84_fu_1001_p2();
    void thread_tmp_fu_399_p3();
    void thread_tmp_s_fu_962_p1();
    void thread_tmp_trn_cast_fu_700_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
