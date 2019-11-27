/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_SLAVES_C
#define INCLUDE__VT3_SLAVES_C

#include "vt3_base.h"


/* slave: IO_CORE/CPU0 */
extern VT3_CONFIGURE_SLAVE FAR vt3_configure_slave_IO_CORE_CPU0;
static vt3_CANopen_sdo_table_t const FAR sdo_table_vt3_configure_slave_IO_CORE_CPU0[] = 
{
	{ 0x1017,  0, 2,        500 }, /* Heart beat */
	{ 0x1400,  1, 4,        513 }, /* RPDO 1 COBID */
	{ 0x1400,  5, 2,        500 }, /* RPDO 1 timer */
	{ 0x1404,  1, 4,       1025 }, /* RPDO 5 COBID */
	{ 0x1404,  5, 2,        500 }, /* RPDO 5 timer */
	{ 0x1800,  1, 4,        385 }, /* TPDO1 COBID */
	{ 0x1800,  5, 2,        500 }, /* TPDO1 timer */
	{ 0x1801,  1, 4,        641 }, /* TPDO2 COBID */
	{ 0x1801,  5, 2,        100 }, /* TPDO 2 timer */
	{ 0x1802,  1, 4,        897 }, /* TPDO3 COBID */
	{ 0x1802,  5, 2,        100 }, /* TPDO3 timer */
	{ 0x1803,  1, 4,       1153 }, /* TPDO4 COBID */
	{ 0x1803,  5, 2,        100 }, /* TPDO4 timer */
	{ 0x1804,  1, 4,       1281 }, /* TPDO5 COBID */
	{ 0x1804,  5, 2,        100 }, /* TPDO5 timer */
	{ 0x2001,  0, 1,          1 }, /* Node ID */
	{ 0x2002,  0, 1,          5 }, /* Baudrate */
	{ 0x2003,  0, 2,          1 }, /* MDS unit */
	{ 0x5200,  0, 2,        100 }, /* PWM Output Frequency */
	{ 0x5220,  1, 1,          0 }, /* PWM outputs Congruency Check */
	{ 0x5220,  2, 1,          0 }, /* Digital low-side outputs check */
	{ 0x5FF5,  1, 1,          0 }, /* Analog input 0 mode */
	{ 0x5FF5,  2, 1,          0 }, /* Analog input 1 mode */
	{ 0x5FF5,  3, 1,          0 }, /* Analog input 2 mode */
	{ 0x5FF5,  4, 1,          0 }, /* Analog input 3 mode */
	{ 0x5FF5,  5, 1,          0 }, /* Analog input 4 mode */
	{ 0x5FF5,  6, 1,          0 }, /* Analog input 5 mode */
	{ 0x5FF5,  7, 1,          0 }, /* Analog input 6 mode */
	{ 0x5FF5,  8, 1,          0 }, /* Analog input 7 mode */
	{ 0x5FF5,  9, 1,          0 }, /* Analog input 8 mode */
	{ 0x5FF5, 10, 1,          0 }, /* Analog input 9 mode */
	{ 0x5FF5, 11, 1,          0 }, /* Analog input 10 mode */
	{ 0x5FF5, 12, 1,          0 }, /* Analog input 11 mode */
	{ 0x5FF5, 13, 1,          0 }, /* Analog input 12 mode */
	{ 0x5FF5, 14, 1,          0 }, /* Analog input 13 mode */
	{ 0x1010,  1, 4, 1702257011 }, /* Save Parameters */

	{ 0x0000,  0, 0,          0 }  /* Sentinel: end of table */

}; /* sdo_table_t sdo_table_vt3_configure_slave_IO_CORE_CPU0[] */

/* slave: IO_CORE/CPU1 */
extern VT3_CONFIGURE_SLAVE FAR vt3_configure_slave_IO_CORE_CPU1;
static vt3_CANopen_sdo_table_t const FAR sdo_table_vt3_configure_slave_IO_CORE_CPU1[] = 
{
	{ 0x1017,  0, 2,        500 }, /* Heart beat */
	{ 0x1800,  1, 4,        386 }, /* TPDO1 COBID */
	{ 0x1800,  5, 2,        500 }, /* TPDO1 timer */
	{ 0x1801,  1, 4,        642 }, /* TPDO2 COBID */
	{ 0x1801,  5, 2,        100 }, /* TPDO 2 timer */
	{ 0x1802,  1, 4,        898 }, /* TPDO3 COBID */
	{ 0x1802,  5, 2,        100 }, /* TPDO3 timer */
	{ 0x1803,  1, 4,       1154 }, /* TPDO4 COBID */
	{ 0x1803,  5, 2,        100 }, /* TPDO4 timer */
	{ 0x1804,  1, 4,       1282 }, /* TPDO5 COBID */
	{ 0x1804,  5, 2,        100 }, /* TPDO5 timer */
	{ 0x2001,  0, 1,          2 }, /* Node ID */
	{ 0x2002,  0, 1,          5 }, /* Baudrate */
	{ 0x2003,  0, 2,          2 }, /* MDS unit */
	{ 0x5FF5,  1, 1,          0 }, /* Analog input 0 mode */
	{ 0x5FF5,  2, 1,          0 }, /* Analog input 1 mode */
	{ 0x5FF5,  3, 1,          0 }, /* Analog input 2 mode */
	{ 0x5FF5,  4, 1,          0 }, /* Analog input 3 mode */
	{ 0x5FF5,  5, 1,          0 }, /* Analog input 4 mode */
	{ 0x5FF5,  6, 1,          0 }, /* Analog input 5 mode */
	{ 0x5FF5,  7, 1,          0 }, /* Analog input 6 mode */
	{ 0x5FF5,  8, 1,          0 }, /* Analog input 7 mode */
	{ 0x5FF5,  9, 1,          0 }, /* Analog input 8 mode */
	{ 0x5FF5, 10, 1,          0 }, /* Analog input 9 mode */
	{ 0x5FF5, 11, 1,          0 }, /* Analog input 10 mode */
	{ 0x5FF5, 12, 1,          0 }, /* Analog input 11 mode */
	{ 0x5FF5, 13, 1,          0 }, /* Analog input 12 mode */
	{ 0x5FF5, 14, 1,          0 }, /* Analog input 13 mode */
	{ 0x1010,  1, 4, 1702257011 }, /* Save Parameters */

	{ 0x0000,  0, 0,          0 }  /* Sentinel: end of table */

}; /* sdo_table_t sdo_table_vt3_configure_slave_IO_CORE_CPU1[] */

/* initializes the function block instances */
void vt3_initialize_io_slave_function_blocks(void)
{

	/* slave: IO_CORE/CPU0 */
	FarMemSet(&vt3_configure_slave_IO_CORE_CPU0, 0, sizeof vt3_configure_slave_IO_CORE_CPU0);
	vt3_configure_slave_IO_CORE_CPU0.EN = 1;
	vt3_configure_slave_IO_CORE_CPU0.port = 0;
	vt3_configure_slave_IO_CORE_CPU0.node_id = 1;
	vt3_configure_slave_IO_CORE_CPU0.cobid_sdotx = 1409;
	vt3_configure_slave_IO_CORE_CPU0.cobid_sdorx = 1537;
	vt3_configure_slave_IO_CORE_CPU0.sdo_table_ptr = (DWORD)sdo_table_vt3_configure_slave_IO_CORE_CPU0;

	/* slave: IO_CORE/CPU1 */
	FarMemSet(&vt3_configure_slave_IO_CORE_CPU1, 0, sizeof vt3_configure_slave_IO_CORE_CPU1);
	vt3_configure_slave_IO_CORE_CPU1.EN = 1;
	vt3_configure_slave_IO_CORE_CPU1.port = 0;
	vt3_configure_slave_IO_CORE_CPU1.node_id = 2;
	vt3_configure_slave_IO_CORE_CPU1.cobid_sdotx = 1410;
	vt3_configure_slave_IO_CORE_CPU1.cobid_sdorx = 1538;
	vt3_configure_slave_IO_CORE_CPU1.sdo_table_ptr = (DWORD)sdo_table_vt3_configure_slave_IO_CORE_CPU1;

} /* vt3_initialize_io_slave_function_blocks */



#endif /* INCLUDE__VT3_SLAVES_C */

/* end of file */
