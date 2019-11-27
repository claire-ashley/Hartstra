/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_H
#define INCLUDE__VT3_DISP__SCREENFRAME_H

#include "vt3_base.h"


extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F1;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F2;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F3;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F4;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F5;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F6;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F7;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F8;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F9;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F10;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F11;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F12;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F13;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F14;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F15;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_keys_backlight;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_keys_buzzer;

/* the screen initialization function */
void vt3_init_ind_screen_frame(void);

/* the screen drawing function */
void vt3_draw_ind_screen_frame(BYTE event);

/* timer event handler for screen frame: /project/Tera_7/screen_frame */
void vt3_event_ind_screen_frame(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__SCREENFRAME_H */

/* end of file */
