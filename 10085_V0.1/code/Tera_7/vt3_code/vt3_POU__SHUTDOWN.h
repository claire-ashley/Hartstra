/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__SHUTDOWN_H
#define INCLUDE__VT3_POU__SHUTDOWN_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

} SHUTDOWN_t;

/* prototype for the function that initializes the POU */
void SHUTDOWN__init(void);

/* prototype for the function that contains the POU body */
void SHUTDOWN__call(void);




#endif /* INCLUDE__VT3_POU__SHUTDOWN_H */

/* end of file */
