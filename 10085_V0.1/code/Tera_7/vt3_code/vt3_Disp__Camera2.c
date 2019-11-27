/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__CAMERA2_C
#define INCLUDE__VT3_DISP__CAMERA2_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Camera2.h"
#include "vt3_Event__Camera2.h"


/* ROM configuration of indicator camera_2 */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_camera_2 = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_camera_2,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 },
}; /* __ROM_value__ind_camera_2 */

/* initialization of the runtime status of indicator camera_2 */
static const vt3_indicator_ScreenModel FAR __init_value__ind_camera_2 = {
	/* ROM parameters   */ &__ROM_value__ind_camera_2,
}; /* __init_value__ind_camera_2 */

/* ROM configuration of indicator camera */
static const vt3_indicator_ROM_PAL_Camera FAR __ROM_value__ind_camera_2_camera = {
	/* virtual method table */ &vt3_indicator_VMT_PAL_Camera,
	/* width            */ 680,
	/* height           */ 480,
}; /* __ROM_value__ind_camera_2_camera */

/* initialization of the runtime status of indicator camera */
static const vt3_indicator_PAL_Camera FAR __init_value__ind_camera_2_camera = {
	/* ROM parameters   */ &__ROM_value__ind_camera_2_camera,
	/* x                */ 0,
	/* y                */ 0,
	/* src_x            */ 150,
	/* src_y            */ 20,
	/* src_w            */ 840,
	/* src_h            */ 320,
	/* channel          */ 0,
	/* brightness       */ 128,
	/* saturation       */ 128,
	/* rotate           */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* old_channel      */ (BYTE)-1,
	/* old_brightness   */ (BYTE)-1,
	/* old_saturation   */ (BYTE)-1,
}; /* __init_value__ind_camera_2_camera */

/* link the components of group */
static const vt3_group_20B2EF5A_type FAR vt3_screen_ind_camera_2_group_ind_camera_2_F10_childs = {
	&vt3_screen_union.camera_2.F10_Button,
	&vt3_screen_union.camera_2.F10_Text_1,
}; /* vt3_screen_ind_camera_2_group_ind_camera_2_F10_childs */

/* ROM configuration of indicator F10 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_camera_2_F10 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_camera_2_group_ind_camera_2_F10_childs
}; /* __ROM_value__ind_camera_2_F10 */

/* initialization of the runtime status of indicator F10 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_camera_2_F10 = {
	/* ROM parameters   */ &__ROM_value__ind_camera_2_F10,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_camera_2_F10 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_camera_2_F10_Button_bitmap[5] = {
	{ VT3IMG_BITMAP, vt3_BMP__GryButtonStyle1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			122, 88 }, 
	{ VT3IMG_BITMAP, vt3_BMP__GrnButtonStyle1_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			122, 88 }, 
	{ VT3IMG_BITMAP, vt3_BMP__YlwButtonStyle1_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			122, 88 }, 
	{ VT3IMG_BITMAP, vt3_BMP__RedButtonStyle1_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			122, 88 }, 
	{ VT3IMG_BITMAP, vt3_BMP__BluButtonStyle1_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			122, 88 }, 
}; /* ind_camera_2_F10_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_camera_2_F10_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_camera_2_F10_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_camera_2_F10_Button_bitmap,
}; /* __ROM_value__ind_camera_2_F10_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_camera_2_F10_Button = {
	/* ROM parameters   */ &__ROM_value__ind_camera_2_F10_Button,
	/* x                */ 678,
	/* y                */ 389,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_camera_2_F10_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_camera_2_F10_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_camera_2_F10_Text_1,
	/* width            */ 102,
	/* height           */ 56,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold20,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_camera_2_F10_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_camera_2_F10_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_camera_2_F10_Text_1,
	/* x                */ 686,
	/* y                */ 407,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_camera_2_F10_Text_1 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_camera_2[] = {
	{ &vt3_screen_union.camera_2._background, &__init_value__ind_camera_2, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.camera_2.camera, &__init_value__ind_camera_2_camera, sizeof(vt3_indicator_PAL_Camera) },
	{ &vt3_screen_union.camera_2.F10, &__init_value__ind_camera_2_F10, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.camera_2.F10_Button, &__init_value__ind_camera_2_F10_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.camera_2.F10_Text_1, &__init_value__ind_camera_2_F10_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_camera_2(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_camera_2; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_camera_2(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_camera_2(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.camera_2._background);

	/* indicator "camera" of type "PAL_Camera" */

	/* draw the indicator: camera */
	vt3_draw_indicator_PAL_Camera(event, &vt3_screen_union.camera_2.camera);


	/* indicator "F10" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.camera_2.F10_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.camera_2.F10_Text_1);


	/* end of group "F10" */


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_camera_2() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_camera_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_camera_2[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_camera_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_camera_2[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_camera_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_camera_2[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_camera_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_camera_2[] */


#endif /* INCLUDE__VT3_DISP__CAMERA2_C */

/* end of file */
