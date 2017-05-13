# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2015.2
# Copyright (C) 2015 Xilinx Inc. All rights reserved.
# 
# ==============================================================

#
# Settings for Vivado implementation flow
#
set top_module dateport
set language vhdl
set family zynq
set device xc7z020
set package clg484
set speed -1
set clock ap_clk
set fsm_ext "off"

# For customizing the implementation flow
set add_io_buffers false ;# true|false

set src_files [list \
    dateport.v \
    dateport_AXILiteS_s_axi.v \
    dateport_C1_bias.v \
    dateport_C1_conv.v \
    dateport_C1_d.v \
    dateport_C1_dmapData.v \
    dateport_C1_mapData.v \
    dateport_C1_v.v \
    dateport_C3_bias.v \
    dateport_C3_conv.v \
    dateport_C3_conv_C3_v.v \
    dateport_C3_d.v \
    dateport_C3_dmapData.v \
    dateport_C3_mapData.v \
    dateport_C3_y.v \
    dateport_C5_conv.v \
    dateport_C5_dmapData.v \
    dateport_C5_mapData.v \
    dateport_C5_v.v \
    dateport_DC1_layer.v \
    dateport_DC3_layer.v \
    dateport_DC5_layer.v \
    dateport_DS2_layer.v \
    dateport_DS2_layer_tmp1.v \
    dateport_DS4_layer.v \
    dateport_fadd_32ns_32ns_32_5_full_dsp.v \
    dateport_fcmp_32ns_32ns_1_1.v \
    dateport_fdiv_32ns_32ns_32_16.v \
    dateport_fexp_32ns_32ns_32_9_full_dsp.v \
    dateport_fmul_32ns_32ns_32_4_max_dsp.v \
    dateport_fsub_32ns_32ns_32_5_full_dsp.v \
    dateport_input_img.v \
    dateport_output_dwei.v \
    dateport_output_wei.v \
    dateport_O_layer.v \
    dateport_O_layer_output_v.v \
    dateport_resid.v \
    dateport_S2_d.v \
    dateport_S2_pool.v \
    dateport_S2_y.v \
    dateport_S4_d.v \
    dateport_S4_pool.v \
    dateport_S4_y.v \
    dateport_sitofp_32ns_32_6.v \
    dateport_upadteall.v \
    dateport_update_C1.v \
    dateport_update_C1_tmp.v \
    dateport_update_C3.v \
    dateport_update_C5.v \
    dateport_update_OUT.v \
]

set pcore_syn 1
set pcore_lang verilog
