set moduleName dateport_S2_pool
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_S2_pool}
set C_modelType { void 0 }
set C_modelArgList { 
	{ C1_y float 32 regular {array 4704 { 1 1 } 1 1 } {global 0}  }
	{ S2_y float 32 regular {array 1176 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C1_y", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "S2_y", "interface" : "memory", "bitwidth" : 32 ,"direction" : "WRITEONLY" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C1_y_address0 sc_out sc_lv 13 signal 0 } 
	{ C1_y_ce0 sc_out sc_logic 1 signal 0 } 
	{ C1_y_q0 sc_in sc_lv 32 signal 0 } 
	{ C1_y_address1 sc_out sc_lv 13 signal 0 } 
	{ C1_y_ce1 sc_out sc_logic 1 signal 0 } 
	{ C1_y_q1 sc_in sc_lv 32 signal 0 } 
	{ S2_y_address0 sc_out sc_lv 11 signal 1 } 
	{ S2_y_ce0 sc_out sc_logic 1 signal 1 } 
	{ S2_y_we0 sc_out sc_logic 1 signal 1 } 
	{ S2_y_d0 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C1_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_y", "role": "address0" }} , 
 	{ "name": "C1_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_y", "role": "ce0" }} , 
 	{ "name": "C1_y_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_y", "role": "q0" }} , 
 	{ "name": "C1_y_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_y", "role": "address1" }} , 
 	{ "name": "C1_y_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_y", "role": "ce1" }} , 
 	{ "name": "C1_y_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_y", "role": "q1" }} , 
 	{ "name": "S2_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "S2_y", "role": "address0" }} , 
 	{ "name": "S2_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S2_y", "role": "ce0" }} , 
 	{ "name": "S2_y_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S2_y", "role": "we0" }} , 
 	{ "name": "S2_y_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S2_y", "role": "d0" }}  ]}
set Spec2ImplPortList { 
	C1_y { ap_memory {  { C1_y_address0 mem_address 1 13 }  { C1_y_ce0 mem_ce 1 1 }  { C1_y_q0 mem_dout 0 32 }  { C1_y_address1 mem_address 1 13 }  { C1_y_ce1 mem_ce 1 1 }  { C1_y_q1 mem_dout 0 32 } } }
	S2_y { ap_memory {  { S2_y_address0 mem_address 1 11 }  { S2_y_ce0 mem_ce 1 1 }  { S2_y_we0 mem_we 1 1 }  { S2_y_d0 mem_din 1 32 } } }
}
