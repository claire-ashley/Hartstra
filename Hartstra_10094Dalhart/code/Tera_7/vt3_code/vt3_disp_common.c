/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP_COMMON_C
#define INCLUDE__VT3_DISP_COMMON_C

#include "vt3_runtime.h"
#include "vt3_disp_common.h"


/* all screens share the same memory */
vt3_screen_union_t FAR vt3_screen_union;

/* screen size */
const unsigned int vt3_screen_width  =   800;
const unsigned int vt3_screen_height =   480;

/* force redraw screen background in case of change of subscreen */
BOOL vt3_force_redraw_screen_background = FALSE;

/* focus navigation tables, forward direction */
const vt3_focus_sequence_t FARPTR const vt3_focus_sequence_forward[] = {
	vt3_focus_sequence_forward_ind_splash,
	vt3_focus_sequence_forward_ind_home,
	vt3_focus_sequence_forward_ind_setup,
	vt3_focus_sequence_forward_ind_camera,
	vt3_focus_sequence_forward_ind_camera_2,
	 (const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_focus_sequence_forward[] */

/* focus navigation tables, backward direction */
const vt3_focus_sequence_t FARPTR const vt3_focus_sequence_backward[] = {
	vt3_focus_sequence_backward_ind_splash,
	vt3_focus_sequence_backward_ind_home,
	vt3_focus_sequence_backward_ind_setup,
	vt3_focus_sequence_backward_ind_camera,
	vt3_focus_sequence_backward_ind_camera_2,
	(const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_focus_sequence_backward[] */

/* knob_sel navigation tables, forward direction */
const vt3_focus_sequence_t FARPTR const vt3_knob_sel_sequence_forward[] = {
	vt3_knob_sel_sequence_forward_ind_splash,
	vt3_knob_sel_sequence_forward_ind_home,
	vt3_knob_sel_sequence_forward_ind_setup,
	vt3_knob_sel_sequence_forward_ind_camera,
	vt3_knob_sel_sequence_forward_ind_camera_2,
	 (const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_knob_sel_sequence_forward[] */

/* knob_sel navigation tables, backward direction */
const vt3_focus_sequence_t FARPTR const vt3_knob_sel_sequence_backward[] = {
	vt3_knob_sel_sequence_backward_ind_splash,
	vt3_knob_sel_sequence_backward_ind_home,
	vt3_knob_sel_sequence_backward_ind_setup,
	vt3_knob_sel_sequence_backward_ind_camera,
	vt3_knob_sel_sequence_backward_ind_camera_2,
	(const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_knob_sel_sequence_backward[] */


/* index to previous screen */
UINT FAR vt3_current_screen = 0xFFFF;


/* screen initialization */
static void init_screen_switch(void)
{
	switch ( vt3_current_screen )
	{
	case SCREEN_SPLASH:
		vt3_init_ind_splash();
		break;
	case SCREEN_HOME:
		vt3_init_ind_home();
		break;
	case SCREEN_SETUP:
		vt3_init_ind_setup();
		break;
	case SCREEN_CAMERA:
		vt3_init_ind_camera();
		break;
	case SCREEN_CAMERA_2:
		vt3_init_ind_camera_2();
		break;
	} /* switch ( vt3_current_screen ) */
} /* init_screen_switch */


/* screen drawing */
static void draw_screen_switch(BYTE event)
{
	switch ( vt3_current_screen )
	{
	case SCREEN_SPLASH:
		vt3_draw_ind_splash(event);
		break;
	case SCREEN_HOME:
		vt3_draw_ind_home(event);
		break;
	case SCREEN_SETUP:
		vt3_draw_ind_setup(event);
		break;
	case SCREEN_CAMERA:
		vt3_draw_ind_camera(event);
		break;
	case SCREEN_CAMERA_2:
		vt3_draw_ind_camera_2(event);
		break;
	} /* switch ( vt3_current_screen ) */
} /* init_screen_switch */


/* global display initialization function */
void vt3_disp_init(void)
{
	/* initializations */
	vt3_screen         = 0;
	vt3_current_screen = 0xFFFF;
	vt3_language       = 0;

	/* initialize screen frame */
	vt3_init_ind_screen_frame();

	/* process the physical elements */
	vt3_draw_ind_screen_frame(VT3_DISP_EVENT_OPEN);

	/* initialize sampler of variables for trend indicators */
	vt3_trend_sampling_init();
} /* vt3_disp_init */


/* global display drawing function */
void vt3_disp_draw(void)
{
	/* process the physical elements */
	vt3_draw_ind_screen_frame(VT3_DISP_EVENT_REFRESH);

	/* initialize first screen */
	if ( vt3_current_screen == 0xFFFF )
	{
		vt3_current_screen = vt3_screen;
		init_screen_switch();
		draw_screen_switch(VT3_DISP_EVENT_OPEN);
	}
	/* no screen change */
	else if ( vt3_screen == vt3_current_screen )
	{
		draw_screen_switch(VT3_DISP_EVENT_REFRESH);
	}
	/* screen change */
	else
	{
		/* release focus */
		(void) vt3_set_focus_null();
		
		/* tear down previous screen */
		draw_screen_switch(VT3_DISP_EVENT_CLOSE);
		
		/* bring up new screen */
		vt3_current_screen = vt3_screen;
		(void)FarMemSet(&vt3_screen_union, 0, sizeof vt3_screen_union);
		init_screen_switch();
		draw_screen_switch(VT3_DISP_EVENT_OPEN);
	}
	
	/* transfer image from memory to frame buffer */
	LcdRefresh();

	/* sampling function for trend indicators */
	vt3_trend_sampling();
} /* vt3_disp_draw */


/* knob selector properties array init*/
const vt3_knob_sel_prop_t vt3_screen_ks_ptr[] = {
	{ 7, { 255, 255, 255, 255 } }, /* splash */
	{ 7, { 255, 255, 255, 255 } }, /* home */
	{ 7, { 255, 255, 255, 255 } }, /* setup */
	{ 7, { 255, 0, 0, 0 } }, /* camera */
	{ 7, { 255, 0, 0, 0 } }, /* camera_2 */
};


#endif /* INCLUDE__VT3_DISP_COMMON_C */

/* end of file */
