/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREENFRAME_H
#define INCLUDE__VT3_EVENT__SCREENFRAME_H

#include "vt3_base.h"

/* timer event handler for screen frame: /project/Tera_7/screen_frame */
void vt3_event_ind_screen_frame(BYTE event)
;

/* timer event handler for physical indicator: /project/Tera_7/screen_frame/screen_backlight */
void vt3_event_ind_screen_frame_screen_backlight(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
;

/* timer event handler for physical indicator: /project/Tera_7/screen_frame/buzzer */
void vt3_event_ind_screen_frame_buzzer(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
;

/* timer event handler for physical indicator: /project/Tera_7/screen_frame/keys_backlight */
void vt3_event_ind_screen_frame_keys_backlight(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__SCREENFRAME_H */

/* end of file */
