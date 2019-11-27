/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GET_POWER_FAIL_H
#define INCLUDE__VT3_POU__GET_POWER_FAIL_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	BOOL             power_fail;          /* TRUE if +VB is disconnected; FALSE otherwise */
} GET_POWER_FAIL_t;

/* prototype for the function that initializes the POU */
void GET_POWER_FAIL__init(void);

/* prototype for the function that contains the POU body */
void GET_POWER_FAIL__call(void);




#endif /* INCLUDE__VT3_POU__GET_POWER_FAIL_H */

/* end of file */
