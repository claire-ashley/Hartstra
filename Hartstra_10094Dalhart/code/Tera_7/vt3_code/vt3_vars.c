/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_C
#define INCLUDE__VT3_VARS_C

#include "vt3_runtime.h"
#include "vt3_POU_common.h"
#include "vt3_IO.h"



/** project version */
const char FAR vt3_const_prj_version[21] = "0.1";

/** project name */
const char FAR vt3_const_prj_name[] = "project";

/** device name in vt3 project */
const char FAR vt3_const_dev_name[] = "Tera_7";

/** device type - long name */
char const FAR vt3_device_properties_long_name[] = "TERA 7";

/** device type - short name */
char const FAR vt3_device_properties_short_name[] = "TERA7";

/** device type - has touch screen */
BOOL const FAR vt3_device_properties_has_touch_screen = TRUE;

/**************************************************************************/

/* definition of constants */

/* variable:     vt3_screen_count
 * definition:   /project/Tera_7
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      index of current screen
 */
const UINT FAR vt3_screen_count = ((UINT)5U);

/**************************************************************************/

/* definition of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_interface
 * definition:   /project/Tera_7/CAN_interface
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/Tera_7/CAN_interface
 */
BOOL FAR vt3_can_alarm_busoff_CAN_interface;

/* variable:     CO_cmd
 * definition:   /project/Tera_7/CAN_interface/CO_NMT
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE FAR CO_cmd;

/* variable:     CO_nodeid
 * definition:   /project/Tera_7/CAN_interface/CO_NMT
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE FAR CO_nodeid;

/* variable:     IO_Fan
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL0a" configured as "PIN_LO_DIGOUT"
 */
BOOL FAR IO_Fan;

/* variable:     IO_AC
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL1a" configured as "PIN_LO_DIGOUT"
 */
BOOL FAR IO_AC;

/* variable:     IO_InteriorLight
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL2a" configured as "PIN_LO_DIGOUT"
 */
BOOL FAR IO_InteriorLight;

/* variable:     IO_StrobeLight
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL5a" configured as "PIN_LO_DIGOUT"
 */
BOOL FAR IO_StrobeLight;

/* variable:     IO_StrobePattern
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL6a" configured as "PIN_LO_DIGOUT"
 */
BOOL FAR IO_StrobePattern;

/* variable:     IO_Heat
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL7a" configured as "PIN_LO_DIGOUT"
 */
BOOL FAR IO_Heat;

/* variable:     vt3_can_period_IO_CORE_CPU0_RPDO1
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 */
UINT FAR vt3_can_period_IO_CORE_CPU0_RPDO1;

/* variable:     vt3_can_trigger_IO_CORE_CPU0_RPDO1
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 */
BOOL FAR vt3_can_trigger_IO_CORE_CPU0_RPDO1;

/* variable:     vt3_can_period_IO_CORE_CPU0_RPDO5
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 */
UINT FAR vt3_can_period_IO_CORE_CPU0_RPDO5;

/* variable:     vt3_can_trigger_IO_CORE_CPU0_RPDO5
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 */
BOOL FAR vt3_can_trigger_IO_CORE_CPU0_RPDO5;

/* variable:     vt3_can_alarm_CAN_Heartbeat_CPU01
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU01
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU01
 */
BOOL FAR vt3_can_alarm_CAN_Heartbeat_CPU01;

/* variable:     IO1_state
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU01
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE FAR IO1_state;

/* variable:     vt3_can_alarm_CAN_Heartbeat_CPU02
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU02
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU02
 */
BOOL FAR vt3_can_alarm_CAN_Heartbeat_CPU02;

/* variable:     IO2_state
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU02
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE FAR IO2_state;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO1
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO1
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO1;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO2
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO2
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO2;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO3
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO3
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO3;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO4
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO4
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO4;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO5
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO5
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO5
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO5;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO1
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO1
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO1;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO2
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO2
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO2;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO3
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO3
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO3;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO4
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO4
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO4;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO5
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO5
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO5
 */
BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO5;

/* variable:     PLC_PRG
 * definition:   /project/Tera_7/Programs/PLC_PRG
 * type:         PLC_PRG
 * address:      not specified
 * constant:     False
 * comment:      
 */
PLC_PRG_t FAR PLC_PRG;

/* variable:     assignIO
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/assignIO
 * type:         assignIO
 * address:      not specified
 * constant:     False
 * comment:      
 */
assignIO_t FAR assignIO;

/* variable:     doBrightness
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/doBrightness
 * type:         doBrightness
 * address:      not specified
 * constant:     False
 * comment:      
 */
doBrightness_t FAR doBrightness;

/* variable:     usbUpdate
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/usbUpdate
 * type:         usbUpdate
 * address:      not specified
 * constant:     False
 * comment:      
 */
usbUpdate_t FAR usbUpdate;

/* variable:     outputs
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/outputs
 * type:         outputs
 * address:      not specified
 * constant:     False
 * comment:      
 */
outputs_t FAR outputs;

/* variable:     task100
 * definition:   /project/Tera_7/Programs/task100
 * type:         task100
 * address:      not specified
 * constant:     False
 * comment:      
 */
task100_t FAR task100;

/* variable:     slaveConfig
 * definition:   /project/Tera_7/Programs/task100_POUs/slaveConfig
 * type:         slaveConfig
 * address:      not specified
 * constant:     False
 * comment:      
 */
slaveConfig_t FAR slaveConfig;

/* variable:     slaveConfigFB_CPU0
 * definition:   /project/Tera_7/Programs/task100_POUs/slaveConfigFB_CPU0
 * type:         slaveConfigFB_CPU0
 * address:      not specified
 * constant:     False
 * comment:      
 */
slaveConfigFB_CPU0_t FAR slaveConfigFB_CPU0;

/* variable:     slaveConfigFB_CPU1
 * definition:   /project/Tera_7/Programs/task100_POUs/slaveConfigFB_CPU1
 * type:         slaveConfigFB_CPU1
 * address:      not specified
 * constant:     False
 * comment:      
 */
slaveConfigFB_CPU1_t FAR slaveConfigFB_CPU1;

/* variable:     vt3_screen
 * definition:   /project/Tera_7
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current screen
 */
UINT FAR vt3_screen;

/* variable:     vt3_language
 * definition:   /project/Tera_7
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current language
 */
UINT FAR vt3_language;

/* variable:     vt3_task_run_time_video_task
 * definition:   /project/Tera_7
 * type:         DWORD
 * address:      not specified
 * constant:     False
 * comment:      video task execution time [ms]
 */
DWORD FAR vt3_task_run_time_video_task;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_bytearray_R_warning
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %R
 */
BOOL FAR vt3_bytearray_R_warning;

/* variable:     vt3_bytearray_R_error
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %R
 */
BOOL FAR vt3_bytearray_R_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/Tera_7
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
WORD FAR vt3_alarm_inhibition_bitmask;

/* variable:     vt3_task_run_time_CAN_bus_task
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      System task execution time [ms]
 */
UDINT FAR vt3_task_run_time_CAN_bus_task;

/* variable:     vt3_task_run_time_PLC_PRG
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      PLC PRG execution time [ms]
 */
UDINT FAR vt3_task_run_time_PLC_PRG;

/* variable:     vt3_task_run_time_task100
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      task task100 execution time [ms]
 */
UDINT FAR vt3_task_run_time_task100;

/* variable:     vt3_CPU_load
 * definition:   /project/Tera_7
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      System CPU load
 */
USINT FAR vt3_CPU_load;

/* variable:     vt3_on_error_counter_conversion_out_of_range
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_CONVERSION_OUT_OF_RANGE counter
 */
UDINT FAR vt3_on_error_counter_conversion_out_of_range;

/* variable:     vt3_on_error_counter_number_overflow
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_NUMBER_OVERFLOW counter
 */
UDINT FAR vt3_on_error_counter_number_overflow;

/* variable:     vt3_on_error_counter_operation_out_of_range
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_OPERATION_OUT_OF_RANGE counter
 */
UDINT FAR vt3_on_error_counter_operation_out_of_range;

/* variable:     vt3_on_error_counter_zero_division
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_ZERO_DIVISION counter
 */
UDINT FAR vt3_on_error_counter_zero_division;

/* variable:     vt3_on_error_counter_string_corrupt
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_STRING_CORRUPT counter
 */
UDINT FAR vt3_on_error_counter_string_corrupt;

/* variable:     vt3_on_error_counter_string_overflow
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_STRING_OVERFLOW counter
 */
UDINT FAR vt3_on_error_counter_string_overflow;

/* variable:     vt3_on_error_counter_out_of_memory
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_OUT_OF_MEMORY counter
 */
UDINT FAR vt3_on_error_counter_out_of_memory;

/* variable:     vt3_on_error_counter_string_size
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_STRING_SIZE counter
 */
UDINT FAR vt3_on_error_counter_string_size;

/* variable:     vt3_on_error_counter_parameter
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_PARAMETER counter
 */
UDINT FAR vt3_on_error_counter_parameter;

/* variable:     vt3_on_error_counter_array_overflow
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_ARRAY_OVERFLOW counter
 */
UDINT FAR vt3_on_error_counter_array_overflow;

/* variable:     vt3_on_error_counter_subrange
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_SUBRANGE counter
 */
UDINT FAR vt3_on_error_counter_subrange;

/* variable:     vt3_on_error_counter_watchdog
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_WATCHDOG counter
 */
UDINT FAR vt3_on_error_counter_watchdog;

/* variable:     vt3_app_CPU_load
 * definition:   /project/Tera_7
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      VT3 application CPU load
 */
USINT FAR vt3_app_CPU_load;

/* variable:     vt3_configure_slave_IO_CORE_CPU0
 * definition:   /project/IO_CORE/CPU0
 * type:         VT3_CONFIGURE_SLAVE
 * address:      not specified
 * constant:     False
 * comment:      Initializes the I/O slave "IO_CORE/CPU0"
 */
VT3_CONFIGURE_SLAVE FAR vt3_configure_slave_IO_CORE_CPU0;

/* variable:     IO_kennel1Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI0a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel1Temp;

/* variable:     IO_kennel2Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI1a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel2Temp;

/* variable:     IO_kennel3Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI2a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel3Temp;

/* variable:     IO_kennel4Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI3a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel4Temp;

/* variable:     IO_kennel5Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO3" resource "AI4a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel5Temp;

/* variable:     IO_kennel6Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO3" resource "AI5a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel6Temp;

/* variable:     IO_kennel7Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO3" resource "AI6a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel7Temp;

/* variable:     IO_kennel8Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO3" resource "AI7a" configured as "PIN_5V_ANALOGIN"
 */
UINT FAR IO_kennel8Temp;

/* variable:     vt3_configure_slave_IO_CORE_CPU1
 * definition:   /project/IO_CORE/CPU1
 * type:         VT3_CONFIGURE_SLAVE
 * address:      not specified
 * constant:     False
 * comment:      Initializes the I/O slave "IO_CORE/CPU1"
 */
VT3_CONFIGURE_SLAVE FAR vt3_configure_slave_IO_CORE_CPU1;

/* variable:     IO_ReverseGear
 * definition:   /project/IO_CORE/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU1" message "TPDO1" resource "AI0b_digital" configured as "PIN_AIN_DIGITAL"
 */
BOOL FAR IO_ReverseGear;

/* variable:     IO_VBPlus
 * definition:   /project/IO_CORE/CPU1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU1" message "TPDO5" resource "VBplus" configured as "PIN_24V"
 */
UINT FAR IO_VBPlus;

/**************************************************************************/

/* definition of ordinary variables from library: TERA_Lib */

/* variable:     GET_POWER_FAIL
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/GET_POWER_FAIL
 * type:         GET_POWER_FAIL
 * address:      not specified
 * constant:     False
 * comment:      
 */
GET_POWER_FAIL_t FAR GET_POWER_FAIL;

/* variable:     SET_POWER_FAIL_SHUTDOWN
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/SET_POWER_FAIL_SHUTDOWN
 * type:         SET_POWER_FAIL_SHUTDOWN
 * address:      not specified
 * constant:     False
 * comment:      
 */
SET_POWER_FAIL_SHUTDOWN_t FAR SET_POWER_FAIL_SHUTDOWN;

/* variable:     SHUTDOWN
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/SHUTDOWN
 * type:         SHUTDOWN
 * address:      not specified
 * constant:     False
 * comment:      
 */
SHUTDOWN_t FAR SHUTDOWN;

/* variable:     REBOOT
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/REBOOT
 * type:         REBOOT
 * address:      not specified
 * constant:     False
 * comment:      
 */
REBOOT_t FAR REBOOT;

/* variable:     INIT_SD_USB
 * definition:   /project/TERA_Lib/EVENTLOG/INIT_SD_USB
 * type:         INIT_SD_USB
 * address:      not specified
 * constant:     False
 * comment:      
 */
INIT_SD_USB_t FAR INIT_SD_USB;

/* variable:     WRITE_EL_TO_SD
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_TO_SD
 * type:         WRITE_EL_TO_SD
 * address:      not specified
 * constant:     False
 * comment:      
 */
WRITE_EL_TO_SD_t FAR WRITE_EL_TO_SD;

/* variable:     WRITE_EL_TO_USB
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_TO_USB
 * type:         WRITE_EL_TO_USB
 * address:      not specified
 * constant:     False
 * comment:      
 */
WRITE_EL_TO_USB_t FAR WRITE_EL_TO_USB;

/* variable:     WELSD_OK
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR WELSD_OK = 0;

/* variable:     WELSD_EL_READ_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR WELSD_EL_READ_ERR = 1;

/* variable:     WELSD_EL_EMPTY
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR WELSD_EL_EMPTY = 2;

/* variable:     WELSD_EL_FILEOPEN_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR WELSD_EL_FILEOPEN_ERR = 3;

/* variable:     WELSD_EL_FILEWRITE_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR WELSD_EL_FILEWRITE_ERR = 4;

/* variable:     WELSD_EL_FILEWRITEBUFFER_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR WELSD_EL_FILEWRITEBUFFER_ERR = 5;

/* variable:     WELSD_EL_MALLOC_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR WELSD_EL_MALLOC_ERR = 6;

/* variable:     MOUNT_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR MOUNT_ERR = 7;

/* variable:     UMOUNT_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UMOUNT_ERR = 8;

/* variable:     INIT_BYTEARRAY_P
 * definition:   /project/TERA_Lib/MEMORY/INIT_BYTEARRAY_P
 * type:         INIT_BYTEARRAY_P
 * address:      not specified
 * constant:     False
 * comment:      
 */
INIT_BYTEARRAY_P_t FAR INIT_BYTEARRAY_P;

/* variable:     INIT_BYTEARRAY_R
 * definition:   /project/TERA_Lib/MEMORY/INIT_BYTEARRAY_R
 * type:         INIT_BYTEARRAY_R
 * address:      not specified
 * constant:     False
 * comment:      
 */
INIT_BYTEARRAY_R_t FAR INIT_BYTEARRAY_R;

/* variable:     lcdSetBlank
 * definition:   /project/TERA_Lib/SCREEN/lcdSetBlank
 * type:         lcdSetBlank
 * address:      not specified
 * constant:     False
 * comment:      
 */
lcdSetBlank_t FAR lcdSetBlank;

/**************************************************************************/

/* definition of ordinary variables from library: UTILITY_Lib */

/* variable:     get_prj_version
 * definition:   /project/UTILITY_Lib/VERSION/VERSION_STRING/get_prj_version
 * type:         get_prj_version
 * address:      not specified
 * constant:     False
 * comment:      
 */
get_prj_version_t FAR get_prj_version;

/* variable:     get_prj_version_byte
 * definition:   /project/UTILITY_Lib/VERSION/VERSION_BYTE/get_prj_version_byte
 * type:         get_prj_version_byte
 * address:      not specified
 * constant:     False
 * comment:      
 */
get_prj_version_byte_t FAR get_prj_version_byte;

/* variable:     BYTE_TO_ASCII
 * definition:   /project/UTILITY_Lib/CONVERSION/BYTE_and_ASCII/BYTE_TO_ASCII
 * type:         BYTE_TO_ASCII
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE_TO_ASCII_t FAR BYTE_TO_ASCII;

/**************************************************************************/

/* definition of memory const size */
const unsigned int BYTEM_SIZE_EXTERN = BYTEM_SIZE;
const unsigned int BYTEP_SIZE_EXTERN = BYTEP_SIZE;
const unsigned int BYTER_SIZE_EXTERN = BYTER_SIZE;
const unsigned int BYTEI_SIZE_EXTERN = BYTEI_SIZE;
const unsigned int BYTEQ_SIZE_EXTERN = BYTEQ_SIZE;
const unsigned int BYTES_SIZE_EXTERN = BYTES_SIZE;
const unsigned int BYTEF_SIZE_EXTERN = BYTEF_SIZE;
const unsigned int BYTEE_SIZE_EXTERN = BYTEE_SIZE;
const unsigned int BYTEK_SIZE_EXTERN = BYTEK_SIZE;
const unsigned int VT3_IO_COUNT_EXTERN = VT3_IO_COUNT;


/* definition of memory arrays */
BYTE FAR BYTEM[BYTEM_SIZE] attribute_aligned_4;
BYTE FAR BYTEP[BYTEP_SIZE] attribute_aligned_4;
BYTE FAR BYTER[BYTER_SIZE] attribute_aligned_4;
BYTE FAR BYTEI[BYTEI_SIZE] attribute_aligned_4;
BYTE FAR BYTEQ[BYTEQ_SIZE] attribute_aligned_4;
BYTE FAR BYTES[BYTES_SIZE] attribute_aligned_4;
BYTE FAR BYTEF[BYTEF_SIZE] attribute_aligned_4;
BYTE FAR BYTEE[BYTEE_SIZE] attribute_aligned_4;
BYTE FAR BYTEK[BYTEK_SIZE] attribute_aligned_4;

/**************************************************************************/

/* table of string size initializers */
const vt3_string_size_initializer_t vt3_string_sizes[] = {
	{ &get_prj_version.out_vt3_prj_version.size, 20 },
	{ &BYTE_TO_ASCII.char_out.size, 1 },
	{ (UINT FARPTR) NULL, 0 } /* sentinel */
}; /* vt3_string_sizes */


#endif /* INCLUDE__VT3_VARS_C */

/* end of file */
