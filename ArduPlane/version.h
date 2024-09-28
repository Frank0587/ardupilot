#pragma once

#ifndef FORCE_VERSION_H_INCLUDE
#error version.h should never be included directly. You probably want to include AP_Common/AP_FWVersion.h
#endif

#include "ap_version.h"

// SP-Master-branch
#define THISFIRMWARE "ArduPlane V4.5.6-SP-v14"

// the following line is parsed by the autotest scripts
#define FIRMWARE_VERSION 4,5,6,FIRMWARE_VERSION_TYPE_OFFICIAL

#define FW_MAJOR 4
#define FW_MINOR 5
#define FW_PATCH 6
#define FW_TYPE FIRMWARE_VERSION_TYPE_OFFICIAL

#include <AP_Common/AP_FWVersionDefine.h>
