/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__INIT_BYTEARRAY_R_H
#define INCLUDE__VT3_POU__INIT_BYTEARRAY_R_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

} INIT_BYTEARRAY_R_t;

/* prototype for the function that initializes the POU */
void INIT_BYTEARRAY_R__init(void);

/* prototype for the function that contains the POU body */
void INIT_BYTEARRAY_R__call(void);




#endif /* INCLUDE__VT3_POU__INIT_BYTEARRAY_R_H */

/* end of file */
