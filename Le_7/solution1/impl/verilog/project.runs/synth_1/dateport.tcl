# 
# Synthesis run script generated by Vivado
# 

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7z020clg484-1

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir D:/vivado_hls/Le_7/solution1/impl/verilog/project.cache/wt [current_project]
set_property parent.project_path D:/vivado_hls/Le_7/solution1/impl/verilog/project.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
read_ip d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fadd_3_full_dsp_32/dateport_ap_fadd_3_full_dsp_32.xci
set_property is_locked true [get_files d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fadd_3_full_dsp_32/dateport_ap_fadd_3_full_dsp_32.xci]

read_ip d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fcmp_0_no_dsp_32/dateport_ap_fcmp_0_no_dsp_32.xci
set_property is_locked true [get_files d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fcmp_0_no_dsp_32/dateport_ap_fcmp_0_no_dsp_32.xci]

read_ip d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fdiv_14_no_dsp_32/dateport_ap_fdiv_14_no_dsp_32.xci
set_property is_locked true [get_files d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fdiv_14_no_dsp_32/dateport_ap_fdiv_14_no_dsp_32.xci]

read_ip d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fexp_7_full_dsp_32/dateport_ap_fexp_7_full_dsp_32.xci
set_property is_locked true [get_files d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fexp_7_full_dsp_32/dateport_ap_fexp_7_full_dsp_32.xci]

read_ip d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fmul_2_max_dsp_32/dateport_ap_fmul_2_max_dsp_32.xci
set_property is_locked true [get_files d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fmul_2_max_dsp_32/dateport_ap_fmul_2_max_dsp_32.xci]

read_ip d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fsub_3_full_dsp_32/dateport_ap_fsub_3_full_dsp_32.xci
set_property is_locked true [get_files d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_fsub_3_full_dsp_32/dateport_ap_fsub_3_full_dsp_32.xci]

read_ip d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_sitofp_4_no_dsp_32/dateport_ap_sitofp_4_no_dsp_32.xci
set_property is_locked true [get_files d:/vivado_hls/Le_7/solution1/impl/verilog/project.srcs/sources_1/ip/dateport_ap_sitofp_4_no_dsp_32/dateport_ap_sitofp_4_no_dsp_32.xci]

read_verilog -library xil_defaultlib {
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C3_conv_C3_v.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_DS2_layer_tmp1.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_fadd_32ns_32ns_32_5_full_dsp.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_fcmp_32ns_32ns_1_1.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_fdiv_32ns_32ns_32_16.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_fexp_32ns_32ns_32_9_full_dsp.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_fmul_32ns_32ns_32_4_max_dsp.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_fsub_32ns_32ns_32_5_full_dsp.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_O_layer_output_v.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_update_C1_tmp.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_AXILiteS_s_axi.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C1_bias.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C1_conv.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C1_d.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C1_dmapData.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C1_mapData.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C1_v.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C3_bias.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C3_conv.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C3_d.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C3_dmapData.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C3_mapData.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C3_y.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C5_conv.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C5_dmapData.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C5_mapData.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_C5_v.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_DC1_layer.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_DC3_layer.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_DC5_layer.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_DS2_layer.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_DS4_layer.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_input_img.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_output_dwei.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_output_wei.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_O_layer.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_resid.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_S2_d.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_S2_pool.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_S2_y.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_S4_d.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_S4_pool.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_S4_y.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_sitofp_32ns_32_6.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_upadteall.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_update_C1.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_update_C3.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_update_C5.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport_update_OUT.v
  D:/vivado_hls/Le_7/solution1/impl/verilog/dateport.v
}
read_xdc D:/vivado_hls/Le_7/solution1/impl/verilog/dateport.xdc
set_property used_in_implementation false [get_files D:/vivado_hls/Le_7/solution1/impl/verilog/dateport.xdc]

read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
synth_design -top dateport -part xc7z020clg484-1 -no_iobuf -mode out_of_context
write_checkpoint -noxdef dateport.dcp
catch { report_utilization -file dateport_utilization_synth.rpt -pb dateport_utilization_synth.pb }
