/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_ALARMS_C
#define INCLUDE__VT3_ALARMS_C

#include "vt3_runtime.h"
#include "vt3_alarms.h"
#include "vt3_lang.h"
#include "vt3_POU_common.h"
#include "vt3_vars.h"



/* priority levels: array of (number, ids) */
const WORD FAR vt3_alarm_priority_count = VT3_COUNTOF_ALARM_PRIORITY;
const WORD FAR vt3_alarm_priority[VT3_COUNTOF_ALARM_PRIORITY+1][2] = {
	{ 0xFFFF, 0xFFFF } /* end of table */
}; /* vt3_alarm_priority[] */

/* spn numbers: array of (number, ids) */
const WORD FAR vt3_alarm_spn_count = VT3_COUNTOF_ALARM_SPN;
const vt3_alarm_spn_t FAR vt3_alarm_spn[VT3_COUNTOF_ALARM_SPN+1] = {
	{ 0xFFFFFFFF, 0xFFFF } /* end of table */
}; /* vt3_alarm_spn[] */

/* fmi numbers: array of (number, ids) */
const WORD FAR vt3_alarm_fmi_count = VT3_COUNTOF_ALARM_FMI;
const WORD FAR vt3_alarm_fmi[VT3_COUNTOF_ALARM_FMI+1][2] = {
	{ 0xFFFF, 0xFFFF } /* end of table */
}; /* vt3_alarm_fmi[] */

/* group numbers: array of (number, ids) */
const WORD FAR vt3_alarm_group_count = VT3_COUNTOF_ALARM_GROUP;
const WORD FAR vt3_alarm_group[VT3_COUNTOF_ALARM_GROUP+1][2] = {
	{ 0xFFFF, 0xFFFF } /* end of table */
}; /* vt3_alarm_group[] */

/* local structures and functions used to evaluate expressions */




/* arrays of local functions used to evaluate event log values */
static const vt3_alarm_pfn_t FAR __afun__0000__[10] = { (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL };

/* arrays of global structures used to evaluate event log values */
const static vt3_alarm_word_t FARPTR __astruct__0000__[10] = { (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL, (vt3_alarm_word_t FARPTR)NULL };

/* declaration of the arrays of global alarms */
/* the alarms are ordered by aguid to allow for binary search */
const WORD FAR vt3_global_alarm_count = VT3_COUNTOF_GLOBAL_ALARMS;
const vt3_alarm_definition_global_t FAR vt3_alarm_definition_global[] = {
	{ 0xFFFFFFFF, __astruct__0000__ } /* end of table */
}; /* vt3_alarm_definition_global[] */

/* declaration of the arrays of local alarms */
/* only the alarms generated locally to this device are listed here! */
/* the alarms are ordered by aguid to allow for binary search */
const WORD FAR vt3_local_alarm_count = VT3_COUNTOF_LOCAL_ALARMS;
vt3_alarm_status_t FAR vt3_alarm_status[VT3_COUNTOF_LOCAL_ALARMS+1];
const vt3_alarm_definition_t FAR vt3_alarm_definition[] = {
	{ 0xFFFFFFFF, 0xFF, 0xFFFF, 0xFF, 0xFF, (vt3_alarm_pfn_t)NULL, (vt3_alarm_pfn_t)NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __afun__0000__, 0, 0 } /* end of table */
}; /* vt3_alarm_definition[] */

/* index of alarms by spn, fmi */
const UINT FAR vt3_alarm_index_spn_fmi[VT3_COUNTOF_LOCAL_ALARMS+1] = {
/*  index            spn   fmi */
	0xFFFF /* end of table */
}; /* vt3_alarm_index_spn_fmi[] */

/* declaration of the array of inhibitions */
const vt3_alarm_pfn_t FAR vt3_alarm_inhibition_functions[16] = {
	(vt3_alarm_pfn_t)NULL, /*  0:                      */
	(vt3_alarm_pfn_t)NULL, /*  1:                      */
	(vt3_alarm_pfn_t)NULL, /*  2:                      */
	(vt3_alarm_pfn_t)NULL, /*  3:                      */
	(vt3_alarm_pfn_t)NULL, /*  4:                      */
	(vt3_alarm_pfn_t)NULL, /*  5:                      */
	(vt3_alarm_pfn_t)NULL, /*  6:                      */
	(vt3_alarm_pfn_t)NULL, /*  7:                      */
	(vt3_alarm_pfn_t)NULL, /*  8:                      */
	(vt3_alarm_pfn_t)NULL, /*  9:                      */
	(vt3_alarm_pfn_t)NULL, /* 10:                      */
	(vt3_alarm_pfn_t)NULL, /* 11:                      */
	(vt3_alarm_pfn_t)NULL, /* 12:                      */
	(vt3_alarm_pfn_t)NULL, /* 13:                      */
	(vt3_alarm_pfn_t)NULL, /* 14:                      */
	(vt3_alarm_pfn_t)NULL, /* 15:                      */
}; /* vt3_alarm_inhibition_functions */

/* declaration of the table of info repetitions */
BOOL FAR FARPTR const vt3_repetition_info[16] = {
	/*  0: */ (BOOL FAR FARPTR const) NULL,
	/*  1: */ (BOOL FAR FARPTR const) NULL,
	/*  2: */ (BOOL FAR FARPTR const) NULL,
	/*  3: */ (BOOL FAR FARPTR const) NULL,
	/*  4: */ (BOOL FAR FARPTR const) NULL,
	/*  5: */ (BOOL FAR FARPTR const) NULL,
	/*  6: */ (BOOL FAR FARPTR const) NULL,
	/*  7: */ (BOOL FAR FARPTR const) NULL,
	/*  8: */ (BOOL FAR FARPTR const) NULL,
	/*  9: */ (BOOL FAR FARPTR const) NULL,
	/* 10: */ (BOOL FAR FARPTR const) NULL,
	/* 11: */ (BOOL FAR FARPTR const) NULL,
	/* 12: */ (BOOL FAR FARPTR const) NULL,
	/* 13: */ (BOOL FAR FARPTR const) NULL,
	/* 14: */ (BOOL FAR FARPTR const) NULL,
	/* 15: */ (BOOL FAR FARPTR const) NULL,
}; /* vt3_repetition_info[] */

/* declaration of the table of safe repetitions */
BOOL FAR FARPTR const vt3_repetition_safe[16] = {
	/*  0: */ (BOOL FAR FARPTR const) NULL,
	/*  1: */ (BOOL FAR FARPTR const) NULL,
	/*  2: */ (BOOL FAR FARPTR const) NULL,
	/*  3: */ (BOOL FAR FARPTR const) NULL,
	/*  4: */ (BOOL FAR FARPTR const) NULL,
	/*  5: */ (BOOL FAR FARPTR const) NULL,
	/*  6: */ (BOOL FAR FARPTR const) NULL,
	/*  7: */ (BOOL FAR FARPTR const) NULL,
	/*  8: */ (BOOL FAR FARPTR const) NULL,
	/*  9: */ (BOOL FAR FARPTR const) NULL,
	/* 10: */ (BOOL FAR FARPTR const) NULL,
	/* 11: */ (BOOL FAR FARPTR const) NULL,
	/* 12: */ (BOOL FAR FARPTR const) NULL,
	/* 13: */ (BOOL FAR FARPTR const) NULL,
	/* 14: */ (BOOL FAR FARPTR const) NULL,
	/* 15: */ (BOOL FAR FARPTR const) NULL,
}; /* vt3_repetition_safe[] */

/* status of alarms for each device */
vt3_device_alarm_status_t FAR vt3_devices_alarm_status[1];

/* table of event logs */
const WORD FAR vt3_elog_count = 0;
const vt3_elog_description_t FAR vt3_elog_description[0 + 1] = {
	{ 0, 0, 0, 0, (INT FARPTR) NULL } /* end of table */
}; /* vt3_elog_description[] */
vt3_elog_communication_status_t FAR vt3_elog_communication_status[0 + 1];

/* string identifiers to translate the alarm indicators */
#ifdef IDS_ALARM_QUICK_SET
WORD _IDS_ALARM_QUICK_SET = IDS_ALARM_QUICK_SET;
#else
WORD _IDS_ALARM_QUICK_SET = 0xFFFF;
#endif

#ifdef IDS_ALARM_QUICK_RTN
WORD _IDS_ALARM_QUICK_RTN = IDS_ALARM_QUICK_RTN;
#else
WORD _IDS_ALARM_QUICK_RTN = 0xFFFF;
#endif

#ifdef IDS_ALARM_QUICK_ACK
WORD _IDS_ALARM_QUICK_ACK = IDS_ALARM_QUICK_ACK;
#else
WORD _IDS_ALARM_QUICK_ACK = 0xFFFF;
#endif

#ifdef IDS_ALARM_LOG_NORMAL
WORD _IDS_ALARM_LOG_NORMAL = IDS_ALARM_LOG_NORMAL;
#else
WORD _IDS_ALARM_LOG_NORMAL = 0xFFFF;
#endif

#ifdef IDS_ALARM_LOG_SET_NACK
WORD _IDS_ALARM_LOG_SET_NACK = IDS_ALARM_LOG_SET_NACK;
#else
WORD _IDS_ALARM_LOG_SET_NACK = 0xFFFF;
#endif

#ifdef IDS_ALARM_LOG_RTN_NACK
WORD _IDS_ALARM_LOG_RTN_NACK = IDS_ALARM_LOG_RTN_NACK;
#else
WORD _IDS_ALARM_LOG_RTN_NACK = 0xFFFF;
#endif

#ifdef IDS_ALARM_LOG_SET_ACK
WORD _IDS_ALARM_LOG_SET_ACK = IDS_ALARM_LOG_SET_ACK;
#else
WORD _IDS_ALARM_LOG_SET_ACK = 0xFFFF;
#endif

#ifdef IDS_ALARM_LOG_CRC_ERROR
WORD _IDS_ALARM_LOG_CRC_ERROR = IDS_ALARM_LOG_CRC_ERROR;
#else
WORD _IDS_ALARM_LOG_CRC_ERROR = 0xFFFF;
#endif



#endif /* INCLUDE__VT3_ALARMS_C */

/* end of file */
