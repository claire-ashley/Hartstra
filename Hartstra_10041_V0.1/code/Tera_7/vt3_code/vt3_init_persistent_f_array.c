/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_INIT_PERSISTENT_F_ARRAY_C
#define INCLUDE__VT3_INIT_PERSISTENT_F_ARRAY_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_vars.h"


/* initializers of %F array */

/* table of initializators of %F array */
static const vt3_screen_initializer FAR __init_f_array_table[] = 
{
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_f_array_table[] */

/* initialization of %F array */
void initialize_bytearray_F(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize %F array with zeros */
	FarMemSet(BYTEF, 0, BYTEF_SIZE);

	/* initialize nonzero variables of %F array */
	for ( p = __init_f_array_table; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}
}

#endif /* INCLUDE__VT3_INIT_PERSISTENT_F_ARRAY_C */

/* end of file */
