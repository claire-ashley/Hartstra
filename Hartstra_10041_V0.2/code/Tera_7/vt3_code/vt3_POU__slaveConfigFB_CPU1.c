/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__SLAVECONFIGFB_CPU1_C
#define INCLUDE__VT3_POU__SLAVECONFIGFB_CPU1_C

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
static const vt3_screen_initializer FAR __init_table__slaveConfigFB_CPU1[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__slaveConfigFB_CPU1[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const slaveConfigFB_CPU1_t FAR __const__slaveConfigFB_CPU1__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* nodeid               */ ((USINT)0U),
}; /* end of __const__slaveConfigFB_CPU1__param_init */

/* initialization of PROGRAM status */
void slaveConfigFB_CPU1__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__slaveConfigFB_CPU1; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&slaveConfigFB_CPU1, &__const__slaveConfigFB_CPU1__param_init, sizeof __const__slaveConfigFB_CPU1__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void slaveConfigFB_CPU1__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	slaveConfigFB_CPU1.ENO = slaveConfigFB_CPU1.EN;
	if ( ! slaveConfigFB_CPU1.EN )
	{
		return;
	}


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		
		VT3_CONFIGURE_SLAVE__call(&vt3_configure_slave_IO_CORE_CPU1);

		if ( EQ_BOOL_2((vt3_configure_slave_IO_CORE_CPU1.is_busy),
			FALSE) ) {
			if ( EQ_BYTE_2((vt3_configure_slave_IO_CORE_CPU1.progress),
				((SINT)0)) ) {
				vt3_configure_slave_IO_CORE_CPU1.start = TRUE;
			} else if  ( NE_BYTE((vt3_configure_slave_IO_CORE_CPU1.progress),
				((SINT)100)) ) {
				
			} else if  ( TRUE ) {
				vt3_configure_slave_IO_CORE_CPU1.start = FALSE;
			}
		} else if  ( TRUE ) {
			
		}

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


	/* end of PROGRAM body */
}



#endif /* INCLUDE__VT3_POU__SLAVECONFIGFB_CPU1_C */

/* end of file */
