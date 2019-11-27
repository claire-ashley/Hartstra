/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GET_PRJ_VERSION_BYTE_H
#define INCLUDE__VT3_POU__GET_PRJ_VERSION_BYTE_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	ARR_BYTE_version out_vt3_prj_version; /* VT3 project version                      */
} get_prj_version_byte_t;

/* prototype for the function that initializes the POU */
void get_prj_version_byte__init(void);

/* prototype for the function that contains the POU body */
void get_prj_version_byte__call(void);




#endif /* INCLUDE__VT3_POU__GET_PRJ_VERSION_BYTE_H */

/* end of file */
