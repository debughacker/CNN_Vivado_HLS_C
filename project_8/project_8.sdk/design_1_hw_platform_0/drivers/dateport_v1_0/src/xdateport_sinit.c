// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xdateport.h"

extern XDateport_Config XDateport_ConfigTable[];

XDateport_Config *XDateport_LookupConfig(u16 DeviceId) {
	XDateport_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XDATEPORT_NUM_INSTANCES; Index++) {
		if (XDateport_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XDateport_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XDateport_Initialize(XDateport *InstancePtr, u16 DeviceId) {
	XDateport_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XDateport_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XDateport_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

