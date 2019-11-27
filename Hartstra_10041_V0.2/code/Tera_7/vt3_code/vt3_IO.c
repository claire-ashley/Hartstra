/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_IO_C
#define INCLUDE__VT3_IO_C

#include "vt3_runtime.h"
#include "vt3_IO.h"
#include "vt3_POU_common.h"



/* I/O force flags and values (used by the debugger) */
BYTE FAR vt3_force_flags   [VT3_IO_COUNT];
UINT FAR vt3_force_values  [VT3_IO_COUNT];

/* This function is called by the runtime system at the beginning.
 * In initializes all local I/O resources */
void vt3_IO_init(void)
{
	/* at the beginning no I/O forced */
	FarMemSet(vt3_force_flags, 0, sizeof vt3_force_flags);
	FarMemSet(vt3_force_values, 0, sizeof vt3_force_values);

} /* vt3_IO_init() */

/* This function is called by the runtime system at time intervals = VT3_TASK_PERIOD_IO
 * In read and writes all local I/O resources */
void vt3_IO_cycle(void)
{
} /* vt3_IO_cycle() */


#endif /* INCLUDE__VT3_IO_C */

/* end of file */
