/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__SLAVECONFIGFB_CPU0_H
#define INCLUDE__VT3_POU__SLAVECONFIGFB_CPU0_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"
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



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	USINT            nodeid;              /*                                          */
} slaveConfigFB_CPU0_t;

/* prototype for the function that initializes the POU */
void slaveConfigFB_CPU0__init(void);

/* prototype for the function that contains the POU body */
void slaveConfigFB_CPU0__call(void);




#endif /* INCLUDE__VT3_POU__SLAVECONFIGFB_CPU0_H */

/* end of file */
