/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_INIT_PERSISTENT_P_ARRAY_C
#define INCLUDE__VT3_INIT_PERSISTENT_P_ARRAY_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_vars.h"


/* initializers of %P array */
static const UINT FAR __init_p_array_value__p_ACDeadband = ((UINT)3U);
static const UINT FAR __init_p_array_value__p_ACSetPoint = ((UINT)76U);
static const INT FAR __init_p_array_value__p_Brightness = ((INT)1000);
static const UINT FAR __init_p_array_value__p_CO2AlarmSetPoint = ((UINT)2200U);
static const UINT FAR __init_p_array_value__p_HeatDeadband = ((UINT)3U);
static const UINT FAR __init_p_array_value__p_HeatSetPoint = ((UINT)65U);
static const UINT FAR __init_p_array_value__p_LowerAlarmSetPoint = ((UINT)40U);
static const UINT FAR __init_p_array_value__p_UpperAlarmSetPoint = ((UINT)80U);
static const UINT FAR __init_p_array_value__parametersCode = ((UINT)1234U);

/* table of initializators of %P array */
static const vt3_screen_initializer FAR __init_p_array_table[] = 
{
	{ &p_ACDeadband, &__init_p_array_value__p_ACDeadband, 2 },
	{ &p_ACSetPoint, &__init_p_array_value__p_ACSetPoint, 2 },
	{ &p_Brightness, &__init_p_array_value__p_Brightness, 2 },
	{ &p_CO2AlarmSetPoint, &__init_p_array_value__p_CO2AlarmSetPoint, 2 },
	{ &p_HeatDeadband, &__init_p_array_value__p_HeatDeadband, 2 },
	{ &p_HeatSetPoint, &__init_p_array_value__p_HeatSetPoint, 2 },
	{ &p_LowerAlarmSetPoint, &__init_p_array_value__p_LowerAlarmSetPoint, 2 },
	{ &p_UpperAlarmSetPoint, &__init_p_array_value__p_UpperAlarmSetPoint, 2 },
	{ &parametersCode, &__init_p_array_value__parametersCode, 2 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_p_array_table[] */

/* initialization of %P array */
void initialize_bytearray_P(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize %P array with zeros */
	FarMemSet(BYTEP, 0, BYTEP_SIZE);

	/* initialize nonzero variables of %P array */
	for ( p = __init_p_array_table; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}
}

#endif /* INCLUDE__VT3_INIT_PERSISTENT_P_ARRAY_C */

/* end of file */
