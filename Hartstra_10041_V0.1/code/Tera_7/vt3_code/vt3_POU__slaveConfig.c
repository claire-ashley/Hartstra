/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__SLAVECONFIG_C
#define INCLUDE__VT3_POU__SLAVECONFIG_C

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



/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__slaveConfig[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__slaveConfig[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const slaveConfig_t FAR __const__slaveConfig__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* nodeid               */ ((USINT)0U),
}; /* end of __const__slaveConfig__param_init */

/* initialization of PROGRAM status */
void slaveConfig__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__slaveConfig; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&slaveConfig, &__const__slaveConfig__param_init, sizeof __const__slaveConfig__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void slaveConfig__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	slaveConfig.ENO = slaveConfig.EN;
	if ( ! slaveConfig.EN )
	{
		return;
	}


	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/Tera_7/Programs/task100_POUs/slaveConfig
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	    
	    slaveConfigFB_CPU0__call();
	    if (vt3_configure_slave_IO_CORE_CPU0.progress == 100)
	    {
	        if (IO1_state != 0x05)
	        {
	            CO_cmd = 0x01;
	            CO_nodeid = 0x01;
	            vt3_can_send_sync_CO_NMT();
	        }
	    }
	
	    slaveConfigFB_CPU1__call();
	    if (vt3_configure_slave_IO_CORE_CPU1.progress == 100)
	    {
	        if (IO2_state != 0x05)
	        {
	            CO_cmd = 0x01;
	            CO_nodeid = 0x02;
	            vt3_can_send_sync_CO_NMT();
	        }
	    }
	    
	}

	/* end of PROGRAM body */
}



#endif /* INCLUDE__VT3_POU__SLAVECONFIG_C */

/* end of file */
