/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_LANG_C
#define INCLUDE__VT3_LANG_C

#include "vt3_runtime.h"
#include "ieclib.h"
#include "vt3_POU_string_typedef.h"
#include "vt3_lang.h"


/* translation table - individual strings */

/* C = 0x0000 */
static const STRING1    FAR s_0000_00 = { 1, 1, "C" };

/* F = 0x0001 */
static const STRING1    FAR s_0001_00 = { 1, 1, "F" };

/* IDS_CO2_LEVELS_NOT_OK = 0x0002 */
static const STRING17   FAR s_0002_00 = { 17, 17, "CO2 LEVELS NOT OK" };

/* IDS_CO2_LEVELS_OK = 0x0003 */
static const STRING13   FAR s_0003_00 = { 13, 13, "CO2 LEVELS OK" };

/* AUTO = 0x0004 */
static const STRING4    FAR s_0004_00 = { 4, 4, "AUTO" };

/* MANUAL = 0x0005 */
static const STRING6    FAR s_0005_00 = { 6, 6, "MANUAL" };

/* IDS_SILENCE_ALARM = 0x0006 */
static const STRING26   FAR s_0006_00 = { 26, 26, "PRESS ESC TO SILENCE ALARM" };

/* IDS_ALARM_SILENCED = 0x0007 */
static const STRING11   FAR s_0007_00 = { 11, 11, "ALARM MUTED" };


/* DUMMY STRING */
static const STRING0 FAR DUMMY_0000_00 = {0, 0, ""};

/* language 0: ENGLISH */
static const PSTRING vt3_translation_table_0[VT3_TRANSLATION_STRINGS] = {
	(PSTRING)&s_0000_00,
	(PSTRING)&s_0001_00,
	(PSTRING)&s_0002_00,
	(PSTRING)&s_0003_00,
	(PSTRING)&s_0004_00,
	(PSTRING)&s_0005_00,
	(PSTRING)&s_0006_00,
	(PSTRING)&s_0007_00,
}; /* vt3_translation_table_0 */

/* translation table pointers */
static const PSTRING FARPTR const vt3_translation_table[VT3_LANGUAGE_COUNT] = {
	vt3_translation_table_0, /* ENGLISH */
}; /* vt3_translation_table */

/* translation function */
const PSTRING TRANSLATE(UINT ids, UINT lang)
{
	if ( ids >= VT3_TRANSLATION_STRINGS )
		return (const PSTRING) NULL;
	if ( lang >= VT3_LANGUAGE_COUNT )
		return (const PSTRING) NULL;
	return vt3_translation_table[lang][ids];
}



#endif /* INCLUDE__VT3_LANG_C */

/* end of file */
