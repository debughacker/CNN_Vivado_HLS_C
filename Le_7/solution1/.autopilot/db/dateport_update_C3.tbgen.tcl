set moduleName dateport_update_C3
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_update_C3}
set C_modelType { void 0 }
set C_modelArgList { 
	{ S2_y float 32 regular {array 1176 { 1 1 } 1 1 } {global 0}  }
	{ C3_d float 32 regular {array 1600 { 1 1 } 1 1 } {global 0}  }
	{ C3_dmapData float 32 regular {array 2400 { 2 3 } 1 1 } {global 2}  }
	{ C3_dbias float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "S2_y", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C3_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C3_dmapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C3_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ S2_y_address0 sc_out sc_lv 11 signal 0 } 
	{ S2_y_ce0 sc_out sc_logic 1 signal 0 } 
	{ S2_y_q0 sc_in sc_lv 32 signal 0 } 
	{ S2_y_address1 sc_out sc_lv 11 signal 0 } 
	{ S2_y_ce1 sc_out sc_logic 1 signal 0 } 
	{ S2_y_q1 sc_in sc_lv 32 signal 0 } 
	{ C3_d_address0 sc_out sc_lv 11 signal 1 } 
	{ C3_d_ce0 sc_out sc_logic 1 signal 1 } 
	{ C3_d_q0 sc_in sc_lv 32 signal 1 } 
	{ C3_d_address1 sc_out sc_lv 11 signal 1 } 
	{ C3_d_ce1 sc_out sc_logic 1 signal 1 } 
	{ C3_d_q1 sc_in sc_lv 32 signal 1 } 
	{ C3_dmapData_address0 sc_out sc_lv 12 signal 2 } 
	{ C3_dmapData_ce0 sc_out sc_logic 1 signal 2 } 
	{ C3_dmapData_we0 sc_out sc_logic 1 signal 2 } 
	{ C3_dmapData_d0 sc_out sc_lv 32 signal 2 } 
	{ C3_dmapData_q0 sc_in sc_lv 32 signal 2 } 
	{ C3_dbias_address0 sc_out sc_lv 4 signal 3 } 
	{ C3_dbias_ce0 sc_out sc_logic 1 signal 3 } 
	{ C3_dbias_we0 sc_out sc_logic 1 signal 3 } 
	{ C3_dbias_d0 sc_out sc_lv 32 signal 3 } 
	{ C3_dbias_q0 sc_in sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "S2_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "S2_y", "role": "address0" }} , 
 	{ "name": "S2_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S2_y", "role": "ce0" }} , 
 	{ "name": "S2_y_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S2_y", "role": "q0" }} , 
 	{ "name": "S2_y_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "S2_y", "role": "address1" }} , 
 	{ "name": "S2_y_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S2_y", "role": "ce1" }} , 
 	{ "name": "S2_y_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S2_y", "role": "q1" }} , 
 	{ "name": "C3_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "C3_d", "role": "address0" }} , 
 	{ "name": "C3_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_d", "role": "ce0" }} , 
 	{ "name": "C3_d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_d", "role": "q0" }} , 
 	{ "name": "C3_d_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "C3_d", "role": "address1" }} , 
 	{ "name": "C3_d_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_d", "role": "ce1" }} , 
 	{ "name": "C3_d_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_d", "role": "q1" }} , 
 	{ "name": "C3_dmapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "address0" }} , 
 	{ "name": "C3_dmapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "ce0" }} , 
 	{ "name": "C3_dmapData_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "we0" }} , 
 	{ "name": "C3_dmapData_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "d0" }} , 
 	{ "name": "C3_dmapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "q0" }} , 
 	{ "name": "C3_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C3_dbias", "role": "address0" }} , 
 	{ "name": "C3_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dbias", "role": "ce0" }} , 
 	{ "name": "C3_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dbias", "role": "we0" }} , 
 	{ "name": "C3_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dbias", "role": "d0" }} , 
 	{ "name": "C3_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dbias", "role": "q0" }}  ]}
set Spec2ImplPortList { 
	S2_y { ap_memory {  { S2_y_address0 mem_address 1 11 }  { S2_y_ce0 mem_ce 1 1 }  { S2_y_q0 mem_dout 0 32 }  { S2_y_address1 mem_address 1 11 }  { S2_y_ce1 mem_ce 1 1 }  { S2_y_q1 mem_dout 0 32 } } }
	C3_d { ap_memory {  { C3_d_address0 mem_address 1 11 }  { C3_d_ce0 mem_ce 1 1 }  { C3_d_q0 mem_dout 0 32 }  { C3_d_address1 mem_address 1 11 }  { C3_d_ce1 mem_ce 1 1 }  { C3_d_q1 mem_dout 0 32 } } }
	C3_dmapData { ap_memory {  { C3_dmapData_address0 mem_address 1 12 }  { C3_dmapData_ce0 mem_ce 1 1 }  { C3_dmapData_we0 mem_we 1 1 }  { C3_dmapData_d0 mem_din 1 32 }  { C3_dmapData_q0 mem_dout 0 32 } } }
	C3_dbias { ap_memory {  { C3_dbias_address0 mem_address 1 4 }  { C3_dbias_ce0 mem_ce 1 1 }  { C3_dbias_we0 mem_we 1 1 }  { C3_dbias_d0 mem_din 1 32 }  { C3_dbias_q0 mem_dout 0 32 } } }
}
