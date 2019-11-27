/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__CAMERA2_H
#define INCLUDE__VT3_EVENT__CAMERA2_H

#include "vt3_base.h"

/* timer event handler for screen: /project/Tera_7/Screens/camera_2 */
void vt3_event_ind_camera_2(BYTE event)
;

/* timer event handler for indicator: /project/Tera_7/Screens/camera_2/F10/Button 
 * runs every 100ms
 */
void vt3_event_ind_camera_2_F10_Button(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/Tera_7/Screens/camera_2/F10/Text_1 
 * runs every 100ms
 */
void vt3_event_ind_camera_2_F10_Text_1(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__CAMERA2_H */

/* end of file */
