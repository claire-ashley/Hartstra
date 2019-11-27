/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_IO_H
#define INCLUDE__VT3_IO_H

#include "vt3_base.h"



/* index for I/O local points */

/* total number of local I/O resources */
#define VT3_IO_COUNT                      (   2)

/* size of memory arrays for %I %Q %S */
#define BYTEI_SIZE                        (VT3_IO_COUNT * 4)
#define BYTEQ_SIZE                        (VT3_IO_COUNT * 2)
#define BYTES_SIZE                        (VT3_IO_COUNT * 1)

/* I/O force flags and values (used by the debugger) */
extern BYTE FAR vt3_force_flags           [VT3_IO_COUNT];
extern UINT FAR vt3_force_values          [VT3_IO_COUNT];

/* This function is called by the runtime system at the beginning.
 * In initializes all local and remote I/O resources */
void vt3_IO_init(void);

/* This function is called by the runtime system at time intervals = VT3_TASK_PERIOD_IO
 * In read and writes all local and remote I/O resources */
void vt3_IO_cycle(void);



#endif /* INCLUDE__VT3_IO_H */

/* end of file */
