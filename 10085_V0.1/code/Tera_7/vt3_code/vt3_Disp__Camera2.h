/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__CAMERA2_H
#define INCLUDE__VT3_DISP__CAMERA2_H

#include "vt3_base.h"


/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_camera_2_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_PAL_Camera                     camera;
	vt3_indicator_IndicatorGroup                 F10;
	vt3_indicator_MultiBitmap                    F10_Button;
	vt3_indicator_SimpleText                     F10_Text_1;
} vt3_screen_struct_camera_2_t;

/* this structure is used to link the components of the group /project/Tera_7/Screens/camera_2/F10 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */


/* the screen initialization function */
void vt3_init_ind_camera_2(void);

/* the screen drawing function */
void vt3_draw_ind_camera_2(BYTE event);

/* timer event handler for screen: /project/Tera_7/Screens/camera_2 */
void vt3_event_ind_camera_2(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__CAMERA2_H */

/* end of file */
