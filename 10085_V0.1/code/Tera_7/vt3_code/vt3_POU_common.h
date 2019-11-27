/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_COMMON_H
#define INCLUDE__VT3_POU_COMMON_H

#include "vt3_base.h"
#include "vt3_POU__iocore_data.h"
#include "vt3_POU__global_data.h"
#include "vt3_POU__setup_data.h"
#include "vt3_POU__splash_data.h"
#include "vt3_POU__home_data.h"
#include "vt3_POU__PLC_PRG.h"
#include "vt3_POU__assignIO.h"
#include "vt3_POU__doBrightness.h"
#include "vt3_POU__usbUpdate.h"
#include "vt3_POU__outputs.h"
#include "vt3_POU__task100.h"
#include "vt3_POU__slaveConfig.h"
#include "vt3_POU__slaveConfigFB_CPU0.h"
#include "vt3_POU__slaveConfigFB_CPU1.h"
#include "vt3_POU__interpol.h"
#include "vt3_POU__GET_POWER_FAIL.h"
#include "vt3_POU__SET_POWER_FAIL_SHUTDOWN.h"
#include "vt3_POU__SHUTDOWN.h"
#include "vt3_POU__REBOOT.h"
#include "vt3_POU__INIT_SD_USB.h"
#include "vt3_POU__WRITE_EL_ENUM.h"
#include "vt3_POU__WRITE_EL_TO_SD.h"
#include "vt3_POU__WRITE_EL_TO_USB.h"
#include "vt3_POU__WRITE_EL.h"
#include "vt3_POU__WRITE_EL_PRIVATE.h"
#include "vt3_POU__INIT_BYTEARRAY_P.h"
#include "vt3_POU__INIT_BYTEARRAY_R.h"
#include "vt3_POU__check_touchcalibration.h"
#include "vt3_POU__req_touchcalibration.h"
#include "vt3_POU__mountUSB.h"
#include "vt3_POU__mountSD.h"
#include "vt3_POU__umountUSB.h"
#include "vt3_POU__umountSD.h"
#include "vt3_POU__lcdSetBlank.h"
#include "vt3_POU__get_prj_version.h"
#include "vt3_POU__ARR_BYTE_version.h"
#include "vt3_POU__get_prj_version_byte.h"
#include "vt3_POU__BYTE_TO_ASCII.h"
#include "vt3_POU__ST_TRANSLATE.h"
#include "vt3_CAN.h"
#include "vt3_disp_common.h"
#include "vt3_alarms.h"
#include "vt3_vars.h"
#include "vt3_lang.h"
#include "vt3_init_persistent_p_array.h"
#include "vt3_init_persistent_r_array.h"
#include "vt3_init_persistent_f_array.h"


/* send message immediately */
BOOL vt3_can_send_sync_CO_NMT(void);


/* I/O slave configuration */
void vt3_initialize_io_slave_function_blocks(void);

#endif /* INCLUDE__VT3_POU_COMMON_H */

/* end of file */
