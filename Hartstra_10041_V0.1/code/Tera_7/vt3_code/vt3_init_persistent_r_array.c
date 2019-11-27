/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_INIT_PERSISTENT_R_ARRAY_C
#define INCLUDE__VT3_INIT_PERSISTENT_R_ARRAY_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_vars.h"


/* initializers of %R array */

/* table of initializators of %R array */
static const vt3_screen_initializer FAR __init_r_array_table[] = 
{
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_r_array_table[] */

/* initialization of %R array */
void initialize_bytearray_R(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize %R array with zeros */
	FarMemSet(BYTER, 0, BYTER_SIZE);

	/* initialize nonzero variables of %R array */
	for ( p = __init_r_array_table; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}
}

#endif /* INCLUDE__VT3_INIT_PERSISTENT_R_ARRAY_C */

/* end of file */
