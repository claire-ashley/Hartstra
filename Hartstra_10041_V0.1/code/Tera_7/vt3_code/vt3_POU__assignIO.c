/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__ASSIGNIO_C
#define INCLUDE__VT3_POU__ASSIGNIO_C

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
static const vt3_screen_initializer FAR __init_table__assignIO[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__assignIO[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const assignIO_t FAR __const__assignIO__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__assignIO__param_init */

/* initialization of PROGRAM status */
void assignIO__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__assignIO; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&assignIO, &__const__assignIO__param_init, sizeof __const__assignIO__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void assignIO__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	assignIO.ENO = assignIO.EN;
	if ( ! assignIO.EN )
	{
		return;
	}


	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/Tera_7/Programs/PLC_PRG_POUs/assignIO
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	/*Kennel 1 Temp in Celcius*/
		if (IO_kennel1Temp < 250)
	    {
	        kennel1Temp_C = -50;
	    }
	    else if (IO_kennel1Temp > 4750)
	    {
	        kennel1Temp_C = 150;
	    }
	    else
	    {
	        kennel1Temp_C = (int)interpol(IO_kennel1Temp, 250.0, 4750.0, -50.0, 150.0);
	    }
	/*Kennel 1 Temp in Farenheit*/    
	    kennel1Temp_F =        (int)(((float)(kennel1Temp_C) * 1.8) + 32.0);
	 
	/*Assign Kennel 1 Temp to Varaible for Evaluation*/   
	    if (p_Units == 0)
	    {
	      kennel1Temp = kennel1Temp_F;  
	    }
	    else
	    {
	      kennel1Temp = kennel1Temp_C;   
	    }
	    
	/*Kennel 2 Temp in Celius*/
		if (IO_kennel2Temp < 250) 
	    {
	        kennel2Temp_C = -50;
	    }
	    else if (IO_kennel2Temp > 4750)
	    {
	        kennel2Temp_C = 150;
	    }
	    else
	    {
	        kennel2Temp_C = (int)interpol(IO_kennel2Temp, 250.0, 4750.0, -50.0, 150.0);
	    }
	    
	/*Kennel 2 Temp in Farenheit*/    
	    kennel2Temp_F =        (int)(((float)(kennel2Temp_C) * 1.8) + 32.0);
	 
	/*Assign Kennel 1 Temp to Varaible for Evaluation*/   
	    if (p_Units == 0)
	    {
	      kennel2Temp = kennel2Temp_F;  
	    }
	    else
	    {
	      kennel2Temp = kennel2Temp_C;   
	    }
	
	/*Kennel 3 Temp in Celcius*/
		if (IO_kennel3Temp < 250)
	    {
	        kennel3Temp_C = -50;
	    }
	    else if (IO_kennel3Temp > 4750)
	    {
	        kennel3Temp_C = 150;
	    }
	    else
	    {
	        kennel3Temp_C = (int)interpol(IO_kennel3Temp, 250.0, 4750.0, -50.0, 150.0);
	    }
	 
	/*Kennel 3 Temp in Farenheit*/    
	    kennel3Temp_F =        (int)(((float)(kennel3Temp_C) * 1.8) + 32.0);
	 
	/*Assign Kennel 3 Temp to Varaible for Evaluation*/   
	    if (p_Units == 0)
	    {
	      kennel3Temp = kennel3Temp_F;  
	    }
	    else
	    {
	      kennel3Temp = kennel3Temp_C;   
	    }   
	/*Kennel 4 Temp in Celcius*/
		if (IO_kennel4Temp < 250)
	    {
	        kennel4Temp_C = -50;
	    }
	    else if (IO_kennel4Temp > 4750)
	    {
	        kennel4Temp_C = 150;
	    }
	    else
	    {
	        kennel4Temp_C = (int)interpol(IO_kennel4Temp, 250.0, 4750.0, -50.0, 150.0);
	    }
	
	/*Kennel 4 Temp in Farenheit*/    
	    kennel4Temp_F =        (int)(((float)(kennel4Temp_C) * 1.8) + 32.0);
	 
	/*Assign Kennel 4 Temp to Varaible for Evaluation*/   
	    if (p_Units == 0)
	    {
	      kennel4Temp = kennel4Temp_F;  
	    }
	    else
	    {
	      kennel4Temp = kennel4Temp_C;   
	    }    
	
	/*Kennel 5 Temp in Celcius*/
		if (IO_kennel5Temp < 250)
	    {
	        kennel5Temp_C = -50;
	    }
	    else if (IO_kennel5Temp > 4750)
	    {
	        kennel5Temp_C = 150;
	    }
	    else
	    {
	        kennel5Temp_C = (int)interpol(IO_kennel5Temp, 250.0, 4750.0, -50.0, 150.0);
	    }
	
	/*Kennel 5 Temp in Farenheit*/    
	    kennel5Temp_F =        (int)(((float)(kennel5Temp_C) * 1.8) + 32.0);
	 
	/*Assign Kennel 5 Temp to Varaible for Evaluation*/   
	    if (p_Units == 0)
	    {
	      kennel5Temp = kennel5Temp_F;  
	    }
	    else
	    {
	      kennel5Temp = kennel5Temp_C;   
	    }  
	  
	/*Kennel 6 Temp in Celcius*/
		if (IO_kennel6Temp < 250)
	    {
	        kennel6Temp_C = -50;
	    }
	    else if (IO_kennel6Temp > 4750)
	    {
	        kennel6Temp_C = 150;
	    }
	    else
	    {
	        kennel6Temp_C = (int)interpol(IO_kennel6Temp, 250.0, 4750.0, -50.0, 150.0);
	    }
	
	/*Kennel 6 Temp in Farenheit*/    
	    kennel6Temp_F =        (int)(((float)(kennel6Temp_C) * 1.8) + 32.0);
	 
	/*Assign Kennel 6 Temp to Varaible for Evaluation*/   
	    if (p_Units == 0)
	    {
	      kennel6Temp = kennel6Temp_F;  
	    }
	    else
	    {
	      kennel6Temp = kennel6Temp_C;   
	    }
	
	
	}

	/* end of PROGRAM body */
}



#endif /* INCLUDE__VT3_POU__ASSIGNIO_C */

/* end of file */
