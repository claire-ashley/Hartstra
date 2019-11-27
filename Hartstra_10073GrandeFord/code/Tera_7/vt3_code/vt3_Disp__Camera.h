/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__CAMERA_H
#define INCLUDE__VT3_DISP__CAMERA_H

#include "vt3_base.h"


/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_camera_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_PAL_Camera                     camera;
} vt3_screen_struct_camera_t;


/* the screen initialization function */
void vt3_init_ind_camera(void);

/* the screen drawing function */
void vt3_draw_ind_camera(BYTE event);

/* timer event handler for screen: /project/Tera_7/Screens/camera */
void vt3_event_ind_camera(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__CAMERA_H */

/* end of file */
