/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GLOBAL_DATA_C
#define INCLUDE__VT3_POU__GLOBAL_DATA_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"
#include "version_vt3_runtime.h"
#include "version_pdfrender.h"
#include "vt3_POU__GET_POWER_FAIL.h"
#include "vt3_POU__SET_POWER_FAIL_SHUTDOWN.h"
#include "vt3_POU__SHUTDOWN.h"
#include "vt3_POU__REBOOT.h"
#include "vt3_POU__INIT_SD_USB.h"
#include "vt3_POU__WRITE_EL_TO_SD.h"
#include "vt3_POU__WRITE_EL_TO_USB.h"
#include "vt3_POU__WRITE_EL_ENUM.h"
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
#include "vt3_POU__get_prj_version_byte.h"
#include "vt3_POU__ARR_BYTE_version.h"
#include "vt3_POU__BYTE_TO_ASCII.h"
#include "vt3_POU__ST_TRANSLATE.h"



/* initializers of global variables */

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__global_data[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__global_data[] */

/* initialization of global data block */
void global_data__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__global_data; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
}



#endif /* INCLUDE__VT3_POU__GLOBAL_DATA_C */

/* end of file */
