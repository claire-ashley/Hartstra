/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__SET_POWER_FAIL_SHUTDOWN_H
#define INCLUDE__VT3_POU__SET_POWER_FAIL_SHUTDOWN_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	BOOL             enable;              /* TRUE to enable automatic shutdown; FALSE otherwise */
} SET_POWER_FAIL_SHUTDOWN_t;

/* prototype for the function that initializes the POU */
void SET_POWER_FAIL_SHUTDOWN__init(void);

/* prototype for the function that contains the POU body */
void SET_POWER_FAIL_SHUTDOWN__call(void);




#endif /* INCLUDE__VT3_POU__SET_POWER_FAIL_SHUTDOWN_H */

/* end of file */
