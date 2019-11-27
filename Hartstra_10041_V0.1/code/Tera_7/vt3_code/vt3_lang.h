/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_LANG_H
#define INCLUDE__VT3_LANG_H

#include "vt3_base.h"


/* the languages */
#define LANGUAGE_ENGLISH                  (0)
#define VT3_LANGUAGE_COUNT                (1)

/* the string indexes */
#define C                                 (0)
#define F                                 (1)
#define IDS_CO2_LEVELS_NOT_OK             (2)
#define IDS_CO2_LEVELS_OK                 (3)
#define AUTO                              (4)
#define MANUAL                            (5)
#define IDS_SILENCE_ALARM                 (6)
#define IDS_ALARM_SILENCED                (7)
#define VT3_TRANSLATION_STRINGS           (8)

/* translation function */
const FAR char FARPTR const vt3_translate(
	unsigned int ids, 
	unsigned int lang);



#endif /* INCLUDE__VT3_LANG_H */

/* end of file */
