/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__CAMERA_C
#define INCLUDE__VT3_DISP__CAMERA_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Camera.h"
#include "vt3_Event__Camera.h"


/* ROM configuration of indicator camera */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_camera = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_camera,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 },
}; /* __ROM_value__ind_camera */

/* initialization of the runtime status of indicator camera */
static const vt3_indicator_ScreenModel FAR __init_value__ind_camera = {
	/* ROM parameters   */ &__ROM_value__ind_camera,
}; /* __init_value__ind_camera */

/* ROM configuration of indicator camera */
static const vt3_indicator_ROM_PAL_Camera FAR __ROM_value__ind_camera_camera = {
	/* virtual method table */ &vt3_indicator_VMT_PAL_Camera,
	/* width            */ 500,
	/* height           */ 480,
}; /* __ROM_value__ind_camera_camera */

/* initialization of the runtime status of indicator camera */
static const vt3_indicator_PAL_Camera FAR __init_value__ind_camera_camera = {
	/* ROM parameters   */ &__ROM_value__ind_camera_camera,
	/* x                */ 150,
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
}; /* __init_value__ind_camera_camera */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_camera[] = {
	{ &vt3_screen_union.camera._background, &__init_value__ind_camera, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.camera.camera, &__init_value__ind_camera_camera, sizeof(vt3_indicator_PAL_Camera) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_camera(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_camera; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_camera(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_camera(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.camera._background);

	/* indicator "camera" of type "PAL_Camera" */

	/* draw the indicator: camera */
	vt3_draw_indicator_PAL_Camera(event, &vt3_screen_union.camera.camera);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_camera() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_camera[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_camera[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_camera[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_camera[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_camera[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_camera[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_camera[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_camera[] */


#endif /* INCLUDE__VT3_DISP__CAMERA_C */

/* end of file */
