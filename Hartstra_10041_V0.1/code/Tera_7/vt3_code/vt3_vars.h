/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_H
#define INCLUDE__VT3_VARS_H

#include "vt3_base.h"
#include "vt3_extra.h"
#include "vt3_POU_string_typedef.h"



/**************************************************************************/

/* declaration of constants */

extern const char FAR vt3_const_prj_version[21];
extern const char FAR vt3_version[17];

/* variable:     vt3_screen_count
 * definition:   /project/Tera_7
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      index of current screen
 */
extern const UINT FAR vt3_screen_count;

/**************************************************************************/

/* declaration of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_interface
 * definition:   /project/Tera_7/CAN_interface
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/Tera_7/CAN_interface
 */
extern BOOL FAR vt3_can_alarm_busoff_CAN_interface;

/* variable:     CO_cmd
 * definition:   /project/Tera_7/CAN_interface/CO_NMT
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR CO_cmd;

/* variable:     CO_nodeid
 * definition:   /project/Tera_7/CAN_interface/CO_NMT
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR CO_nodeid;

/* variable:     IO_Fan
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL0a" configured as "PIN_LO_DIGOUT"
 */
extern BOOL FAR IO_Fan;

/* variable:     IO_AC
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL1a" configured as "PIN_LO_DIGOUT"
 */
extern BOOL FAR IO_AC;

/* variable:     IO_InteriorLight
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL2a" configured as "PIN_LO_DIGOUT"
 */
extern BOOL FAR IO_InteriorLight;

/* variable:     IO_StrobeLight
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL5a" configured as "PIN_LO_DIGOUT"
 */
extern BOOL FAR IO_StrobeLight;

/* variable:     IO_StrobePattern
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL6a" configured as "PIN_LO_DIGOUT"
 */
extern BOOL FAR IO_StrobePattern;

/* variable:     IO_Heat
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "RPDO1" resource "DOL7a" configured as "PIN_LO_DIGOUT"
 */
extern BOOL FAR IO_Heat;

/* variable:     vt3_can_period_IO_CORE_CPU0_RPDO1
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 */
extern UINT FAR vt3_can_period_IO_CORE_CPU0_RPDO1;

/* variable:     vt3_can_trigger_IO_CORE_CPU0_RPDO1
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO1
 */
extern BOOL FAR vt3_can_trigger_IO_CORE_CPU0_RPDO1;

/* variable:     vt3_can_period_IO_CORE_CPU0_RPDO5
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 */
extern UINT FAR vt3_can_period_IO_CORE_CPU0_RPDO5;

/* variable:     vt3_can_trigger_IO_CORE_CPU0_RPDO5
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/IO_CORE/CPU0/IO_CORE_CPU0_RPDO5
 */
extern BOOL FAR vt3_can_trigger_IO_CORE_CPU0_RPDO5;

/* variable:     vt3_can_alarm_CAN_Heartbeat_CPU01
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU01
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU01
 */
extern BOOL FAR vt3_can_alarm_CAN_Heartbeat_CPU01;

/* variable:     IO1_state
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU01
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR IO1_state;

/* variable:     vt3_can_alarm_CAN_Heartbeat_CPU02
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU02
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU02
 */
extern BOOL FAR vt3_can_alarm_CAN_Heartbeat_CPU02;

/* variable:     IO2_state
 * definition:   /project/IOCORE_msg/CAN_interface/CAN_Heartbeat_CPU02
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR IO2_state;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO1
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO1
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO1;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO2
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO2
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO2;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO3
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO3
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO3;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO4
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO4
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO4;

/* variable:     vt3_can_alarm_IO_CORE_CPU0_TPDO5
 * definition:   /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO5
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU0/IO_CORE_CPU0_TPDO5
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU0_TPDO5;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO1
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO1
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO1;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO2
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO2
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO2;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO3
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO3
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO3;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO4
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO4
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO4;

/* variable:     vt3_can_alarm_IO_CORE_CPU1_TPDO5
 * definition:   /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO5
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_CORE/CPU1/IO_CORE_CPU1_TPDO5
 */
extern BOOL FAR vt3_can_alarm_IO_CORE_CPU1_TPDO5;

/* variable:     PLC_PRG
 * definition:   /project/Tera_7/Programs/PLC_PRG
 * type:         PLC_PRG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern PLC_PRG_t FAR PLC_PRG;

/* variable:     assignIO
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/assignIO
 * type:         assignIO
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern assignIO_t FAR assignIO;

/* variable:     doBrightness
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/doBrightness
 * type:         doBrightness
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern doBrightness_t FAR doBrightness;

/* variable:     usbUpdate
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/usbUpdate
 * type:         usbUpdate
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern usbUpdate_t FAR usbUpdate;

/* variable:     outputs
 * definition:   /project/Tera_7/Programs/PLC_PRG_POUs/outputs
 * type:         outputs
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern outputs_t FAR outputs;

/* variable:     task100
 * definition:   /project/Tera_7/Programs/task100
 * type:         task100
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern task100_t FAR task100;

/* variable:     slaveConfig
 * definition:   /project/Tera_7/Programs/task100_POUs/slaveConfig
 * type:         slaveConfig
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern slaveConfig_t FAR slaveConfig;

/* variable:     slaveConfigFB_CPU0
 * definition:   /project/Tera_7/Programs/task100_POUs/slaveConfigFB_CPU0
 * type:         slaveConfigFB_CPU0
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern slaveConfigFB_CPU0_t FAR slaveConfigFB_CPU0;

/* variable:     slaveConfigFB_CPU1
 * definition:   /project/Tera_7/Programs/task100_POUs/slaveConfigFB_CPU1
 * type:         slaveConfigFB_CPU1
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern slaveConfigFB_CPU1_t FAR slaveConfigFB_CPU1;

/* variable:     vt3_screen
 * definition:   /project/Tera_7
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current screen
 */
extern UINT FAR vt3_screen;

/* variable:     vt3_language
 * definition:   /project/Tera_7
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current language
 */
extern UINT FAR vt3_language;

/* variable:     vt3_task_run_time_video_task
 * definition:   /project/Tera_7
 * type:         DWORD
 * address:      not specified
 * constant:     False
 * comment:      video task execution time [ms]
 */
extern DWORD FAR vt3_task_run_time_video_task;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_bytearray_R_warning
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_warning;

/* variable:     vt3_bytearray_R_error
 * definition:   /project/Tera_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/Tera_7
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
extern WORD FAR vt3_alarm_inhibition_bitmask;

/* variable:     vt3_task_run_time_CAN_bus_task
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      System task execution time [ms]
 */
extern UDINT FAR vt3_task_run_time_CAN_bus_task;

/* variable:     vt3_task_run_time_PLC_PRG
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      PLC PRG execution time [ms]
 */
extern UDINT FAR vt3_task_run_time_PLC_PRG;

/* variable:     vt3_task_run_time_task100
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      task task100 execution time [ms]
 */
extern UDINT FAR vt3_task_run_time_task100;

/* variable:     vt3_CPU_load
 * definition:   /project/Tera_7
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      System CPU load
 */
extern USINT FAR vt3_CPU_load;

/* variable:     vt3_on_error_counter_conversion_out_of_range
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_CONVERSION_OUT_OF_RANGE counter
 */
extern UDINT FAR vt3_on_error_counter_conversion_out_of_range;

/* variable:     vt3_on_error_counter_number_overflow
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_NUMBER_OVERFLOW counter
 */
extern UDINT FAR vt3_on_error_counter_number_overflow;

/* variable:     vt3_on_error_counter_operation_out_of_range
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_OPERATION_OUT_OF_RANGE counter
 */
extern UDINT FAR vt3_on_error_counter_operation_out_of_range;

/* variable:     vt3_on_error_counter_zero_division
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_ZERO_DIVISION counter
 */
extern UDINT FAR vt3_on_error_counter_zero_division;

/* variable:     vt3_on_error_counter_string_corrupt
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_STRING_CORRUPT counter
 */
extern UDINT FAR vt3_on_error_counter_string_corrupt;

/* variable:     vt3_on_error_counter_string_overflow
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_STRING_OVERFLOW counter
 */
extern UDINT FAR vt3_on_error_counter_string_overflow;

/* variable:     vt3_on_error_counter_out_of_memory
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_OUT_OF_MEMORY counter
 */
extern UDINT FAR vt3_on_error_counter_out_of_memory;

/* variable:     vt3_on_error_counter_string_size
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_STRING_SIZE counter
 */
extern UDINT FAR vt3_on_error_counter_string_size;

/* variable:     vt3_on_error_counter_parameter
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_PARAMETER counter
 */
extern UDINT FAR vt3_on_error_counter_parameter;

/* variable:     vt3_on_error_counter_array_overflow
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_ARRAY_OVERFLOW counter
 */
extern UDINT FAR vt3_on_error_counter_array_overflow;

/* variable:     vt3_on_error_counter_subrange
 * definition:   /project/Tera_7
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      run time error E_COUNTER_SUBRANGE counter
 */
extern UDINT FAR vt3_on_error_counter_subrange;

/* variable:     vt3_app_CPU_load
 * definition:   /project/Tera_7
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      VT3 application CPU load
 */
extern USINT FAR vt3_app_CPU_load;

/* variable:     vt3_configure_slave_IO_CORE_CPU0
 * definition:   /project/IO_CORE/CPU0
 * type:         VT3_CONFIGURE_SLAVE
 * address:      not specified
 * constant:     False
 * comment:      Initializes the I/O slave "IO_CORE/CPU0"
 */
extern VT3_CONFIGURE_SLAVE FAR vt3_configure_slave_IO_CORE_CPU0;

/* variable:     IO_kennel1Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI0a" configured as "PIN_5V_ANALOGIN"
 */
extern UINT FAR IO_kennel1Temp;

/* variable:     IO_kennel2Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI1a" configured as "PIN_5V_ANALOGIN"
 */
extern UINT FAR IO_kennel2Temp;

/* variable:     IO_kennel3Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI2a" configured as "PIN_5V_ANALOGIN"
 */
extern UINT FAR IO_kennel3Temp;

/* variable:     IO_kennel4Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO2" resource "AI3a" configured as "PIN_5V_ANALOGIN"
 */
extern UINT FAR IO_kennel4Temp;

/* variable:     IO_kennel5Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO3" resource "AI4a" configured as "PIN_5V_ANALOGIN"
 */
extern UINT FAR IO_kennel5Temp;

/* variable:     IO_kennel6Temp
 * definition:   /project/IO_CORE/CPU0
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU0" message "TPDO3" resource "AI5a" configured as "PIN_5V_ANALOGIN"
 */
extern UINT FAR IO_kennel6Temp;

/* variable:     vt3_configure_slave_IO_CORE_CPU1
 * definition:   /project/IO_CORE/CPU1
 * type:         VT3_CONFIGURE_SLAVE
 * address:      not specified
 * constant:     False
 * comment:      Initializes the I/O slave "IO_CORE/CPU1"
 */
extern VT3_CONFIGURE_SLAVE FAR vt3_configure_slave_IO_CORE_CPU1;

/* variable:     IO_ReverseGear
 * definition:   /project/IO_CORE/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU1" message "TPDO1" resource "AI0b_digital" configured as "PIN_AIN_DIGITAL"
 */
extern BOOL FAR IO_ReverseGear;

/* variable:     IO_VBPlus
 * definition:   /project/IO_CORE/CPU1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      I/O slave "IO_CORE/CPU1" message "TPDO5" resource "VBplus" configured as "PIN_24V"
 */
extern UINT FAR IO_VBPlus;

/**************************************************************************/

/* declaration of ordinary variables from imported library: TERA_Lib */

/* variable:     GET_POWER_FAIL
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/GET_POWER_FAIL
 * type:         GET_POWER_FAIL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern GET_POWER_FAIL_t FAR GET_POWER_FAIL;

/* variable:     SET_POWER_FAIL_SHUTDOWN
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/SET_POWER_FAIL_SHUTDOWN
 * type:         SET_POWER_FAIL_SHUTDOWN
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SET_POWER_FAIL_SHUTDOWN_t FAR SET_POWER_FAIL_SHUTDOWN;

/* variable:     SHUTDOWN
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/SHUTDOWN
 * type:         SHUTDOWN
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SHUTDOWN_t FAR SHUTDOWN;

/* variable:     REBOOT
 * definition:   /project/TERA_Lib/POWERMANAGEMENT/REBOOT
 * type:         REBOOT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern REBOOT_t FAR REBOOT;

/* variable:     INIT_SD_USB
 * definition:   /project/TERA_Lib/EVENTLOG/INIT_SD_USB
 * type:         INIT_SD_USB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INIT_SD_USB_t FAR INIT_SD_USB;

/* variable:     WRITE_EL_TO_SD
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_TO_SD
 * type:         WRITE_EL_TO_SD
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern WRITE_EL_TO_SD_t FAR WRITE_EL_TO_SD;

/* variable:     WRITE_EL_TO_USB
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_TO_USB
 * type:         WRITE_EL_TO_USB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern WRITE_EL_TO_USB_t FAR WRITE_EL_TO_USB;

/* variable:     WELSD_OK
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR WELSD_OK;

/* variable:     WELSD_EL_READ_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR WELSD_EL_READ_ERR;

/* variable:     WELSD_EL_EMPTY
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR WELSD_EL_EMPTY;

/* variable:     WELSD_EL_FILEOPEN_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR WELSD_EL_FILEOPEN_ERR;

/* variable:     WELSD_EL_FILEWRITE_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR WELSD_EL_FILEWRITE_ERR;

/* variable:     WELSD_EL_FILEWRITEBUFFER_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR WELSD_EL_FILEWRITEBUFFER_ERR;

/* variable:     WELSD_EL_MALLOC_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR WELSD_EL_MALLOC_ERR;

/* variable:     MOUNT_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR MOUNT_ERR;

/* variable:     UMOUNT_ERR
 * definition:   /project/TERA_Lib/EVENTLOG/WRITE_EL_ENUM
 * type:         (WELSD_OK:=0,WELSD_EL_READ_ERR:=1,WELSD_EL_EMPTY:=2,WELSD_EL_FILEOPEN_ERR:=3,WELSD_EL_FILEWRITE_ERR:=4,WELSD_EL_FILEWRITEBUFFER_ERR:=5,WELSD_EL_MALLOC_ERR:=6,MOUNT_ERR:=7,UMOUNT_ERR:=8)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UMOUNT_ERR;

/* variable:     INIT_BYTEARRAY_P
 * definition:   /project/TERA_Lib/MEMORY/INIT_BYTEARRAY_P
 * type:         INIT_BYTEARRAY_P
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INIT_BYTEARRAY_P_t FAR INIT_BYTEARRAY_P;

/* variable:     INIT_BYTEARRAY_R
 * definition:   /project/TERA_Lib/MEMORY/INIT_BYTEARRAY_R
 * type:         INIT_BYTEARRAY_R
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INIT_BYTEARRAY_R_t FAR INIT_BYTEARRAY_R;

/* variable:     lcdSetBlank
 * definition:   /project/TERA_Lib/SCREEN/lcdSetBlank
 * type:         lcdSetBlank
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern lcdSetBlank_t FAR lcdSetBlank;

/**************************************************************************/

/* declaration of ordinary variables from imported library: UTILITY_Lib */

/* variable:     get_prj_version
 * definition:   /project/UTILITY_Lib/VERSION/VERSION_STRING/get_prj_version
 * type:         get_prj_version
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern get_prj_version_t FAR get_prj_version;

/* variable:     get_prj_version_byte
 * definition:   /project/UTILITY_Lib/VERSION/VERSION_BYTE/get_prj_version_byte
 * type:         get_prj_version_byte
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern get_prj_version_byte_t FAR get_prj_version_byte;

/* variable:     BYTE_TO_ASCII
 * definition:   /project/UTILITY_Lib/CONVERSION/BYTE_and_ASCII/BYTE_TO_ASCII
 * type:         BYTE_TO_ASCII
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE_TO_ASCII_t FAR BYTE_TO_ASCII;

/**************************************************************************/

/* declaration of variables with address in %M */

/* variable:     SaveP
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX0
 * constant:     False
 * comment:      
 */
#define SaveP (*(BOOL FARPTR)(&BYTEM[0]))

/* variable:     SaveR
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX1
 * constant:     False
 * comment:      
 */
#define SaveR (*(BOOL FARPTR)(&BYTEM[1]))

/* variable:     kennel1Alarm
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX2
 * constant:     False
 * comment:      
 */
#define kennel1Alarm (*(BOOL FARPTR)(&BYTEM[2]))

/* variable:     ignoreMaintenanceAlarm
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX3
 * constant:     False
 * comment:      
 */
#define ignoreMaintenanceAlarm (*(BOOL FARPTR)(&BYTEM[3]))

/* variable:     updateRequested
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX4
 * constant:     False
 * comment:      
 */
#define updateRequested (*(BOOL FARPTR)(&BYTEM[4]))

/* variable:     updateEnable
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX5
 * constant:     False
 * comment:      
 */
#define updateEnable (*(BOOL FARPTR)(&BYTEM[5]))

/* variable:     rearCameraEnabledForReverse
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX6
 * constant:     False
 * comment:      
 */
#define rearCameraEnabledForReverse (*(BOOL FARPTR)(&BYTEM[6]))

/* variable:     rearCameraWaitToRelease
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX7
 * constant:     False
 * comment:      
 */
#define rearCameraWaitToRelease (*(BOOL FARPTR)(&BYTEM[7]))

/* variable:     rearCameraTimer
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX8
 * constant:     False
 * comment:      
 */
#define rearCameraTimer (*(BOOL FARPTR)(&BYTEM[8]))

/* variable:     BacklightTera
 * definition:   /project/Tera_7/Data/global_data
 * type:         UINT
 * address:      %MW10
 * constant:     False
 * comment:      
 */
#define BacklightTera (*(UINT FARPTR)(&BYTEM[10]))

/* variable:     reqScreen
 * definition:   /project/Tera_7/Data/global_data
 * type:         UINT
 * address:      %MW12
 * constant:     False
 * comment:      
 */
#define reqScreen (*(UINT FARPTR)(&BYTEM[12]))

/* variable:     Parameter_Index
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW18
 * constant:     False
 * comment:      
 */
#define Parameter_Index (*(UINT FARPTR)(&BYTEM[18]))

/* variable:     AlarmMessage
 * definition:   /project/Tera_7/Data/global_data
 * type:         USINT
 * address:      %MB20
 * constant:     False
 * comment:      
 */
#define AlarmMessage (*(USINT FARPTR)(&BYTEM[20]))

/* variable:     SilenceBuzzer
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %MX21
 * constant:     False
 * comment:      
 */
#define SilenceBuzzer (*(BOOL FARPTR)(&BYTEM[21]))

/* variable:     SilenceBuzzerReset
 * definition:   /project/Tera_7/Data/global_data
 * type:         UINT
 * address:      %MW22
 * constant:     False
 * comment:      
 */
#define SilenceBuzzerReset (*(UINT FARPTR)(&BYTEM[22]))

/* variable:     StartUpTimer
 * definition:   /project/Tera_7/Data/global_data
 * type:         UINT
 * address:      %MW24
 * constant:     False
 * comment:      
 */
#define StartUpTimer (*(UINT FARPTR)(&BYTEM[24]))

/* variable:     buttonF1_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB30
 * constant:     False
 * comment:      
 */
#define buttonF1_bitmap (*(USINT FARPTR)(&BYTEM[30]))

/* variable:     buttonF2_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB31
 * constant:     False
 * comment:      
 */
#define buttonF2_bitmap (*(USINT FARPTR)(&BYTEM[31]))

/* variable:     buttonF3_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB32
 * constant:     False
 * comment:      
 */
#define buttonF3_bitmap (*(USINT FARPTR)(&BYTEM[32]))

/* variable:     buttonF4_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB33
 * constant:     False
 * comment:      
 */
#define buttonF4_bitmap (*(USINT FARPTR)(&BYTEM[33]))

/* variable:     buttonF5_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB34
 * constant:     False
 * comment:      
 */
#define buttonF5_bitmap (*(USINT FARPTR)(&BYTEM[34]))

/* variable:     buttonF6_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB35
 * constant:     False
 * comment:      
 */
#define buttonF6_bitmap (*(USINT FARPTR)(&BYTEM[35]))

/* variable:     buttonF7_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB36
 * constant:     False
 * comment:      
 */
#define buttonF7_bitmap (*(USINT FARPTR)(&BYTEM[36]))

/* variable:     buttonF8_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB37
 * constant:     False
 * comment:      
 */
#define buttonF8_bitmap (*(USINT FARPTR)(&BYTEM[37]))

/* variable:     buttonF9_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB38
 * constant:     False
 * comment:      
 */
#define buttonF9_bitmap (*(USINT FARPTR)(&BYTEM[38]))

/* variable:     buttonF10_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB39
 * constant:     False
 * comment:      
 */
#define buttonF10_bitmap (*(USINT FARPTR)(&BYTEM[39]))

/* variable:     buttonF2_text
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB40
 * constant:     False
 * comment:      
 */
#define buttonF2_text (*(USINT FARPTR)(&BYTEM[40]))

/* variable:     kennelZone1_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB41
 * constant:     False
 * comment:      
 */
#define kennelZone1_bitmap (*(USINT FARPTR)(&BYTEM[41]))

/* variable:     kennelZone2_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB42
 * constant:     False
 * comment:      
 */
#define kennelZone2_bitmap (*(USINT FARPTR)(&BYTEM[42]))

/* variable:     kennelZone3_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB43
 * constant:     False
 * comment:      
 */
#define kennelZone3_bitmap (*(USINT FARPTR)(&BYTEM[43]))

/* variable:     kennelZone4_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB44
 * constant:     False
 * comment:      
 */
#define kennelZone4_bitmap (*(USINT FARPTR)(&BYTEM[44]))

/* variable:     kennelZone5_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB45
 * constant:     False
 * comment:      
 */
#define kennelZone5_bitmap (*(USINT FARPTR)(&BYTEM[45]))

/* variable:     kennelZone6_bitmap
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB46
 * constant:     False
 * comment:      
 */
#define kennelZone6_bitmap (*(USINT FARPTR)(&BYTEM[46]))

/* variable:     kennelZone1_Unit
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB48
 * constant:     False
 * comment:      
 */
#define kennelZone1_Unit (*(USINT FARPTR)(&BYTEM[48]))

/* variable:     kennelZone2_Unit
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB49
 * constant:     False
 * comment:      
 */
#define kennelZone2_Unit (*(USINT FARPTR)(&BYTEM[49]))

/* variable:     kennelZone3_Unit
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB50
 * constant:     False
 * comment:      
 */
#define kennelZone3_Unit (*(USINT FARPTR)(&BYTEM[50]))

/* variable:     kennelZone4_Unit
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB51
 * constant:     False
 * comment:      
 */
#define kennelZone4_Unit (*(USINT FARPTR)(&BYTEM[51]))

/* variable:     kennelZone5_Unit
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB52
 * constant:     False
 * comment:      
 */
#define kennelZone5_Unit (*(USINT FARPTR)(&BYTEM[52]))

/* variable:     kennelZone6_Unit
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB53
 * constant:     False
 * comment:      
 */
#define kennelZone6_Unit (*(USINT FARPTR)(&BYTEM[53]))

/* variable:     kennelZone1_Temp
 * definition:   /project/Tera_7/Data/home_data
 * type:         INT
 * address:      %MW60
 * constant:     False
 * comment:      
 */
#define kennelZone1_Temp (*(INT FARPTR)(&BYTEM[60]))

/* variable:     kennelZone2_Temp
 * definition:   /project/Tera_7/Data/home_data
 * type:         INT
 * address:      %MW62
 * constant:     False
 * comment:      
 */
#define kennelZone2_Temp (*(INT FARPTR)(&BYTEM[62]))

/* variable:     kennelZone3_Temp
 * definition:   /project/Tera_7/Data/home_data
 * type:         INT
 * address:      %MW64
 * constant:     False
 * comment:      
 */
#define kennelZone3_Temp (*(INT FARPTR)(&BYTEM[64]))

/* variable:     kennelZone4_Temp
 * definition:   /project/Tera_7/Data/home_data
 * type:         INT
 * address:      %MW66
 * constant:     False
 * comment:      
 */
#define kennelZone4_Temp (*(INT FARPTR)(&BYTEM[66]))

/* variable:     kennelZone5_Temp
 * definition:   /project/Tera_7/Data/home_data
 * type:         INT
 * address:      %MW68
 * constant:     False
 * comment:      
 */
#define kennelZone5_Temp (*(INT FARPTR)(&BYTEM[68]))

/* variable:     kennelZone6_Temp
 * definition:   /project/Tera_7/Data/home_data
 * type:         INT
 * address:      %MW70
 * constant:     False
 * comment:      
 */
#define kennelZone6_Temp (*(INT FARPTR)(&BYTEM[70]))

/* variable:     SystemOn
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX80
 * constant:     False
 * comment:      
 */
#define SystemOn (*(BOOL FARPTR)(&BYTEM[80]))

/* variable:     FanOnMan
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX82
 * constant:     False
 * comment:      
 */
#define FanOnMan (*(BOOL FARPTR)(&BYTEM[82]))

/* variable:     AcOnMan
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX83
 * constant:     False
 * comment:      
 */
#define AcOnMan (*(BOOL FARPTR)(&BYTEM[83]))

/* variable:     HeatOnMan
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX84
 * constant:     False
 * comment:      
 */
#define HeatOnMan (*(BOOL FARPTR)(&BYTEM[84]))

/* variable:     InteriorLightsOn
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX85
 * constant:     False
 * comment:      
 */
#define InteriorLightsOn (*(BOOL FARPTR)(&BYTEM[85]))

/* variable:     StrobeLightsOn
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX88
 * constant:     False
 * comment:      
 */
#define StrobeLightsOn (*(BOOL FARPTR)(&BYTEM[88]))

/* variable:     StrobePatternPulse
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX89
 * constant:     False
 * comment:      
 */
#define StrobePatternPulse (*(BOOL FARPTR)(&BYTEM[89]))

/* variable:     FanOnAuto
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX90
 * constant:     False
 * comment:      
 */
#define FanOnAuto (*(BOOL FARPTR)(&BYTEM[90]))

/* variable:     AcOnAuto
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX91
 * constant:     False
 * comment:      
 */
#define AcOnAuto (*(BOOL FARPTR)(&BYTEM[91]))

/* variable:     HeatOnAuto
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %MX92
 * constant:     False
 * comment:      
 */
#define HeatOnAuto (*(BOOL FARPTR)(&BYTEM[92]))

/* variable:     StrobePatternPulseTime
 * definition:   /project/Tera_7/Data/home_data
 * type:         USINT
 * address:      %MB93
 * constant:     False
 * comment:      
 */
#define StrobePatternPulseTime (*(USINT FARPTR)(&BYTEM[93]))

/* variable:     kennel1Temp
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW100
 * constant:     False
 * comment:      
 */
#define kennel1Temp (*(INT FARPTR)(&BYTEM[100]))

/* variable:     kennel1Temp_C
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW102
 * constant:     False
 * comment:      
 */
#define kennel1Temp_C (*(INT FARPTR)(&BYTEM[102]))

/* variable:     kennel1Temp_F
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW104
 * constant:     False
 * comment:      
 */
#define kennel1Temp_F (*(INT FARPTR)(&BYTEM[104]))

/* variable:     kennel2Temp
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW106
 * constant:     False
 * comment:      
 */
#define kennel2Temp (*(INT FARPTR)(&BYTEM[106]))

/* variable:     kennel2Temp_C
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW108
 * constant:     False
 * comment:      
 */
#define kennel2Temp_C (*(INT FARPTR)(&BYTEM[108]))

/* variable:     kennel2Temp_F
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW110
 * constant:     False
 * comment:      
 */
#define kennel2Temp_F (*(INT FARPTR)(&BYTEM[110]))

/* variable:     kennel3Temp
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW112
 * constant:     False
 * comment:      
 */
#define kennel3Temp (*(INT FARPTR)(&BYTEM[112]))

/* variable:     kennel3Temp_C
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW114
 * constant:     False
 * comment:      
 */
#define kennel3Temp_C (*(INT FARPTR)(&BYTEM[114]))

/* variable:     kennel3Temp_F
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW116
 * constant:     False
 * comment:      
 */
#define kennel3Temp_F (*(INT FARPTR)(&BYTEM[116]))

/* variable:     kennel4Temp
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW118
 * constant:     False
 * comment:      
 */
#define kennel4Temp (*(INT FARPTR)(&BYTEM[118]))

/* variable:     kennel4Temp_C
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW120
 * constant:     False
 * comment:      
 */
#define kennel4Temp_C (*(INT FARPTR)(&BYTEM[120]))

/* variable:     kennel4Temp_F
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW122
 * constant:     False
 * comment:      
 */
#define kennel4Temp_F (*(INT FARPTR)(&BYTEM[122]))

/* variable:     kennel5Temp
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW124
 * constant:     False
 * comment:      
 */
#define kennel5Temp (*(INT FARPTR)(&BYTEM[124]))

/* variable:     kennel5Temp_C
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW126
 * constant:     False
 * comment:      
 */
#define kennel5Temp_C (*(INT FARPTR)(&BYTEM[126]))

/* variable:     kennel5Temp_F
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW128
 * constant:     False
 * comment:      
 */
#define kennel5Temp_F (*(INT FARPTR)(&BYTEM[128]))

/* variable:     kennel6Temp
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW130
 * constant:     False
 * comment:      
 */
#define kennel6Temp (*(INT FARPTR)(&BYTEM[130]))

/* variable:     kennel6Temp_C
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW132
 * constant:     False
 * comment:      
 */
#define kennel6Temp_C (*(INT FARPTR)(&BYTEM[132]))

/* variable:     kennel6Temp_F
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         INT
 * address:      %MW134
 * constant:     False
 * comment:      
 */
#define kennel6Temp_F (*(INT FARPTR)(&BYTEM[134]))

/* variable:     kennel2Alarm
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX139
 * constant:     False
 * comment:      
 */
#define kennel2Alarm (*(BOOL FARPTR)(&BYTEM[139]))

/* variable:     kennel3Alarm
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX140
 * constant:     False
 * comment:      
 */
#define kennel3Alarm (*(BOOL FARPTR)(&BYTEM[140]))

/* variable:     kennel4Alarm
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX141
 * constant:     False
 * comment:      
 */
#define kennel4Alarm (*(BOOL FARPTR)(&BYTEM[141]))

/* variable:     kennel5Alarm
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX142
 * constant:     False
 * comment:      
 */
#define kennel5Alarm (*(BOOL FARPTR)(&BYTEM[142]))

/* variable:     kennel6Alarm
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX143
 * constant:     False
 * comment:      
 */
#define kennel6Alarm (*(BOOL FARPTR)(&BYTEM[143]))

/* variable:     kennel1Alarm_Silence
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX146
 * constant:     False
 * comment:      
 */
#define kennel1Alarm_Silence (*(BOOL FARPTR)(&BYTEM[146]))

/* variable:     kennel2AlarmBuzzer_Silence
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX147
 * constant:     False
 * comment:      
 */
#define kennel2AlarmBuzzer_Silence (*(BOOL FARPTR)(&BYTEM[147]))

/* variable:     kennel3AlarmBuzzer_Silence
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX148
 * constant:     False
 * comment:      
 */
#define kennel3AlarmBuzzer_Silence (*(BOOL FARPTR)(&BYTEM[148]))

/* variable:     kennel4AlarmBuzzer_Silence
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX149
 * constant:     False
 * comment:      
 */
#define kennel4AlarmBuzzer_Silence (*(BOOL FARPTR)(&BYTEM[149]))

/* variable:     kennel5AlarmBuzzer_Silence
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX150
 * constant:     False
 * comment:      
 */
#define kennel5AlarmBuzzer_Silence (*(BOOL FARPTR)(&BYTEM[150]))

/* variable:     kennel6AlarmBuzzer_Silence
 * definition:   /project/Tera_7/Data/iocore_data
 * type:         BOOL
 * address:      %MX151
 * constant:     False
 * comment:      
 */
#define kennel6AlarmBuzzer_Silence (*(BOOL FARPTR)(&BYTEM[151]))

/* variable:     splashCounter
 * definition:   /project/Tera_7/Data/splash_data
 * type:         USINT
 * address:      %MB160
 * constant:     False
 * comment:      x0.1 sec
 */
#define splashCounter (*(USINT FARPTR)(&BYTEM[160]))

/* variable:     BG_Color_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW200
 * constant:     False
 * comment:      
 */
#define BG_Color_1 (*(UINT FARPTR)(&BYTEM[200]))

/* variable:     BG_Color_1_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW202
 * constant:     False
 * comment:      
 */
#define BG_Color_1_1 (*(UINT FARPTR)(&BYTEM[202]))

/* variable:     BG_Color_2
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW204
 * constant:     False
 * comment:      
 */
#define BG_Color_2 (*(UINT FARPTR)(&BYTEM[204]))

/* variable:     BG_Color_2_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW206
 * constant:     False
 * comment:      
 */
#define BG_Color_2_1 (*(UINT FARPTR)(&BYTEM[206]))

/* variable:     BG_Color_3
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW208
 * constant:     False
 * comment:      
 */
#define BG_Color_3 (*(UINT FARPTR)(&BYTEM[208]))

/* variable:     BG_Color_3_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW210
 * constant:     False
 * comment:      
 */
#define BG_Color_3_1 (*(UINT FARPTR)(&BYTEM[210]))

/* variable:     BG_Color_4
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW212
 * constant:     False
 * comment:      
 */
#define BG_Color_4 (*(UINT FARPTR)(&BYTEM[212]))

/* variable:     BG_Color_4_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW214
 * constant:     False
 * comment:      
 */
#define BG_Color_4_1 (*(UINT FARPTR)(&BYTEM[214]))

/* variable:     BG_Color_5
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW216
 * constant:     False
 * comment:      
 */
#define BG_Color_5 (*(UINT FARPTR)(&BYTEM[216]))

/* variable:     BG_Color_5_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW218
 * constant:     False
 * comment:      
 */
#define BG_Color_5_1 (*(UINT FARPTR)(&BYTEM[218]))

/* variable:     BG_Color_6
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW220
 * constant:     False
 * comment:      
 */
#define BG_Color_6 (*(UINT FARPTR)(&BYTEM[220]))

/* variable:     BG_Color_6_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW222
 * constant:     False
 * comment:      
 */
#define BG_Color_6_1 (*(UINT FARPTR)(&BYTEM[222]))

/* variable:     BG_Color_7
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW224
 * constant:     False
 * comment:      
 */
#define BG_Color_7 (*(UINT FARPTR)(&BYTEM[224]))

/* variable:     BG_Color_7_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW226
 * constant:     False
 * comment:      
 */
#define BG_Color_7_1 (*(UINT FARPTR)(&BYTEM[226]))

/* variable:     BG_Color_8
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW228
 * constant:     False
 * comment:      
 */
#define BG_Color_8 (*(UINT FARPTR)(&BYTEM[228]))

/* variable:     BG_Color_8_1
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW230
 * constant:     False
 * comment:      
 */
#define BG_Color_8_1 (*(UINT FARPTR)(&BYTEM[230]))

/* variable:     SetupSaveFlag
 * definition:   /project/Tera_7/Data/setup_data
 * type:         BOOL
 * address:      %MX232
 * constant:     False
 * comment:      
 */
#define SetupSaveFlag (*(BOOL FARPTR)(&BYTEM[232]))

/* variable:     ACMinSetting
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW234
 * constant:     False
 * comment:      
 */
#define ACMinSetting (*(UINT FARPTR)(&BYTEM[234]))

/* variable:     HeatMaxSetting
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %MW236
 * constant:     False
 * comment:      
 */
#define HeatMaxSetting (*(UINT FARPTR)(&BYTEM[236]))

/* size of array BYTEM */
#define BYTEM_SIZE (238)

/**************************************************************************/

/* declaration of variables with address in %P */

/* variable:     p_ACSetPoint
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW0
 * constant:     False
 * comment:      
 */
#define p_ACSetPoint (*(UINT FARPTR)(&BYTEP[0]))

/* variable:     p_ACDeadband
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW2
 * constant:     False
 * comment:      
 */
#define p_ACDeadband (*(UINT FARPTR)(&BYTEP[2]))

/* variable:     p_HeatSetPoint
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW4
 * constant:     False
 * comment:      
 */
#define p_HeatSetPoint (*(UINT FARPTR)(&BYTEP[4]))

/* variable:     p_HeatDeadband
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW6
 * constant:     False
 * comment:      
 */
#define p_HeatDeadband (*(UINT FARPTR)(&BYTEP[6]))

/* variable:     p_LowerAlarmSetPoint
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW8
 * constant:     False
 * comment:      
 */
#define p_LowerAlarmSetPoint (*(UINT FARPTR)(&BYTEP[8]))

/* variable:     p_UpperAlarmSetPoint
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW10
 * constant:     False
 * comment:      
 */
#define p_UpperAlarmSetPoint (*(UINT FARPTR)(&BYTEP[10]))

/* variable:     p_CO2AlarmSetPoint
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW12
 * constant:     False
 * comment:      
 */
#define p_CO2AlarmSetPoint (*(UINT FARPTR)(&BYTEP[12]))

/* variable:     p_Brightness
 * definition:   /project/Tera_7/Data/setup_data
 * type:         INT
 * address:      %PW14
 * constant:     False
 * comment:      
 */
#define p_Brightness (*(INT FARPTR)(&BYTEP[14]))

/* variable:     p_Units
 * definition:   /project/Tera_7/Data/setup_data
 * type:         UINT
 * address:      %PW16
 * constant:     False
 * comment:      
 */
#define p_Units (*(UINT FARPTR)(&BYTEP[16]))

/* variable:     BuzzerTera
 * definition:   /project/Tera_7/Data/global_data
 * type:         BOOL
 * address:      %PX18
 * constant:     False
 * comment:      
 */
#define BuzzerTera (*(BOOL FARPTR)(&BYTEP[18]))

/* variable:     parametersCode
 * definition:   /project/Tera_7/Data/global_data
 * type:         UINT
 * address:      %PW20
 * constant:     False
 * comment:      
 */
#define parametersCode (*(UINT FARPTR)(&BYTEP[20]))

/* variable:     AutoMan
 * definition:   /project/Tera_7/Data/home_data
 * type:         BOOL
 * address:      %PX81
 * constant:     False
 * comment:      
 */
#define AutoMan (*(BOOL FARPTR)(&BYTEP[81]))

/* variable:     rebootThenUpdate
 * definition:   /project/Tera_7/Data/global_data
 * type:         USINT
 * address:      %PB100
 * constant:     False
 * comment:      
 */
#define rebootThenUpdate (*(USINT FARPTR)(&BYTEP[100]))

/* size of array BYTEP */
#define BYTEP_SIZE (65000)

/**************************************************************************/

/* declaration of variables with address in %R */

/* size of array BYTER */
#define BYTER_SIZE (16000)

/**************************************************************************/

/* declaration of variables with address in %I */


/**************************************************************************/

/* declaration of variables with address in %Q */


/**************************************************************************/

/* declaration of variables with address in %S */


/**************************************************************************/

/* declaration of variables with address in %F */

/* size of array BYTEF */
#define BYTEF_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %E */

/* size of array BYTEE */
#define BYTEE_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %K */

/* size of array BYTEK */
#define BYTEK_SIZE (1)

/**************************************************************************/

/* declaration of memory arrays */

extern BYTE FAR BYTEM[];
extern BYTE FAR BYTEP[];
extern BYTE FAR BYTER[];
extern BYTE FAR BYTEI[];
extern BYTE FAR BYTEQ[];
extern BYTE FAR BYTES[];
extern BYTE FAR BYTEF[];
extern BYTE FAR BYTEE[];
extern BYTE FAR BYTEK[];

/**************************************************************************/

#endif /* INCLUDE__VT3_VARS_H */

/* end of file */
