/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_COMMON_C
#define INCLUDE__VT3_POU_COMMON_C

#include "vt3_runtime.h"
#include "vt3_POU_common.h"
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



/* table of ENDIANNESS */
const vt3_endianness_table_t FAR vt3_endianness_table[] = {
	/* SA    endianness*/
	{ 18, 0 }, 
	{  0, 0 } /* sentinel */
}; /* end of vt3_endianness_table[] */


/* task trampoline for task100 */
static void __task__task100__(void)
{
	task100__call();
	vt3_free_temporary_strings();
}

/* table of TASKS */
const vt3_task_table_t FAR vt3_task_table[] = {
	/* priority   period    delay   watchdog   program */
	{         1,     100,       0,         0,  __task__task100__ },
	{ 0, 0, 0, 0, (void (*)(void)) NULL } /* sentinel */
}; /* end of vt3_task_table[] */


/* Watchdog period */
UINT const vt3_watchdog_monitor_period_ms = 10;

/* CAN task watchdog period */
UINT const vt3_can_watchdog_monitor_period_ms = 0;

/* VIDEO task watchdog period */
UINT const vt3_video_watchdog_monitor_period_ms = 0;

/* PLC_PRG task watchdog period */
UINT const vt3_plc_prg_watchdog_monitor_period_ms = 0;

/* idle TASK */
void vt3_idle_task(void)
{
	PLC_PRG__call();
	vt3_free_temporary_strings();
}


/* this function is called at the beginning to initialize all POUs */
void vt3_init_all_pous(void)
{
	initialize_bytearray_P();
	initialize_bytearray_R();
	initialize_bytearray_F();

	iocore_data__init();
	global_data__init();
	setup_data__init();
	splash_data__init();
	home_data__init();
	PLC_PRG__init();
	assignIO__init();
	doBrightness__init();
	usbUpdate__init();
	outputs__init();
	task100__init();
	slaveConfig__init();
	slaveConfigFB_CPU0__init();
	slaveConfigFB_CPU1__init();

	/* initialize library POUs */
	GET_POWER_FAIL__init();
	SET_POWER_FAIL_SHUTDOWN__init();
	SHUTDOWN__init();
	REBOOT__init();
	INIT_SD_USB__init();
	WRITE_EL_TO_SD__init();
	WRITE_EL_TO_USB__init();
	INIT_BYTEARRAY_P__init();
	INIT_BYTEARRAY_R__init();
	lcdSetBlank__init();
	get_prj_version__init();
	get_prj_version_byte__init();
	BYTE_TO_ASCII__init();

	/* I/O slave configuration */
	vt3_initialize_io_slave_function_blocks();

}



#endif /* INCLUDE__VT3_POU_COMMON_C */

/* end of file */
