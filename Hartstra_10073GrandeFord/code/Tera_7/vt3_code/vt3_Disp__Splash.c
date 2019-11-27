/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SPLASH_C
#define INCLUDE__VT3_DISP__SPLASH_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Splash.h"
#include "vt3_Event__Splash.h"


/* ROM configuration of indicator splash */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_splash = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_splash,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 },
}; /* __ROM_value__ind_splash */

/* initialization of the runtime status of indicator splash */
static const vt3_indicator_ScreenModel FAR __init_value__ind_splash = {
	/* ROM parameters   */ &__ROM_value__ind_splash,
}; /* __init_value__ind_splash */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_splash_multibitmap_bitmap[1] = {
	{ VT3IMG_BITMAP, vt3_BMP__HartstraLogo1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			800, 271 }, 
}; /* ind_splash_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_splash_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_splash_multibitmap,
	/* width            */ 800,
	/* height           */ 271,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_splash_multibitmap_bitmap,
}; /* __ROM_value__ind_splash_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_splash_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_splash_multibitmap,
	/* x                */ 0,
	/* y                */ 104,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_splash_multibitmap */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_splash[] = {
	{ &vt3_screen_union.splash._background, &__init_value__ind_splash, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.splash.multibitmap, &__init_value__ind_splash_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_splash(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_splash; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_splash(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_splash(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.splash._background);

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.splash.multibitmap);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_splash() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_splash[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_splash[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_splash[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_splash[] */


#endif /* INCLUDE__VT3_DISP__SPLASH_C */

/* end of file */
