/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SPLASH_H
#define INCLUDE__VT3_EVENT__SPLASH_H

#include "vt3_base.h"

/* timer event handler for screen: /project/Tera_7/Sreens/splash */
void vt3_event_ind_splash(BYTE event)
;

/* timer event handler for indicator: /project/Tera_7/Sreens/splash/multibitmap 
 * runs every 100ms
 */
void vt3_event_ind_splash_multibitmap(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__SPLASH_H */

/* end of file */
