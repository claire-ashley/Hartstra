/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_C
#define INCLUDE__VT3_DISP__SCREENFRAME_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"


/* ROM configuration of indicator screen_frame */
static const vt3_indicator_ROM_ScreenFrameModel FAR __ROM_value__ind_screen_frame = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenFrameModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
}; /* __ROM_value__ind_screen_frame */

/* initialization of the runtime status of indicator screen_frame */
static const vt3_indicator_ScreenFrameModel FAR __init_value__ind_screen_frame = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame,
}; /* __init_value__ind_screen_frame */

/* ROM configuration of indicator key_F1 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F1 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 0,
}; /* __ROM_value__ind_screen_frame_key_F1 */

/* initialization of the runtime status of indicator key_F1 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F1,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F1 */

/* ROM configuration of indicator key_F2 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F2 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 1,
}; /* __ROM_value__ind_screen_frame_key_F2 */

/* initialization of the runtime status of indicator key_F2 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F2,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F2 */

/* ROM configuration of indicator key_F3 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F3 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 2,
}; /* __ROM_value__ind_screen_frame_key_F3 */

/* initialization of the runtime status of indicator key_F3 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F3,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F3 */

/* ROM configuration of indicator key_F4 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F4 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 3,
}; /* __ROM_value__ind_screen_frame_key_F4 */

/* initialization of the runtime status of indicator key_F4 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F4,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F4 */

/* ROM configuration of indicator key_F5 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F5 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 4,
}; /* __ROM_value__ind_screen_frame_key_F5 */

/* initialization of the runtime status of indicator key_F5 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F5,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F5 */

/* ROM configuration of indicator key_F6 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F6 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 10,
}; /* __ROM_value__ind_screen_frame_key_F6 */

/* initialization of the runtime status of indicator key_F6 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F6 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F6,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F6 */

/* ROM configuration of indicator key_F7 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F7 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 11,
}; /* __ROM_value__ind_screen_frame_key_F7 */

/* initialization of the runtime status of indicator key_F7 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F7 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F7,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F7 */

/* ROM configuration of indicator key_F8 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F8 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 12,
}; /* __ROM_value__ind_screen_frame_key_F8 */

/* initialization of the runtime status of indicator key_F8 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F8 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F8,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F8 */

/* ROM configuration of indicator key_F9 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F9 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 13,
}; /* __ROM_value__ind_screen_frame_key_F9 */

/* initialization of the runtime status of indicator key_F9 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F9 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F9,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F9 */

/* ROM configuration of indicator key_F10 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F10 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 14,
}; /* __ROM_value__ind_screen_frame_key_F10 */

/* initialization of the runtime status of indicator key_F10 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F10 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F10,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F10 */

/* ROM configuration of indicator key_F11 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F11 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 5,
}; /* __ROM_value__ind_screen_frame_key_F11 */

/* initialization of the runtime status of indicator key_F11 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F11 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F11,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F11 */

/* ROM configuration of indicator key_F12 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F12 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 6,
}; /* __ROM_value__ind_screen_frame_key_F12 */

/* initialization of the runtime status of indicator key_F12 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F12 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F12,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F12 */

/* ROM configuration of indicator key_F13 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F13 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 7,
}; /* __ROM_value__ind_screen_frame_key_F13 */

/* initialization of the runtime status of indicator key_F13 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F13 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F13,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F13 */

/* ROM configuration of indicator key_F14 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F14 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 8,
}; /* __ROM_value__ind_screen_frame_key_F14 */

/* initialization of the runtime status of indicator key_F14 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F14 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F14,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F14 */

/* ROM configuration of indicator key_F15 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F15 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 9,
}; /* __ROM_value__ind_screen_frame_key_F15 */

/* initialization of the runtime status of indicator key_F15 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F15 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F15,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F15 */

/* ROM configuration of indicator screen_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_screen_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_screen_backlight,
	/* hwNumber         */ 1200,
}; /* __ROM_value__ind_screen_frame_screen_backlight */

/* initialization of the runtime status of indicator screen_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_screen_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_screen_backlight,
	/* currentValue     */ 200,
}; /* __init_value__ind_screen_frame_screen_backlight */

/* ROM configuration of indicator buzzer */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_buzzer = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_buzzer,
	/* hwNumber         */ 1202,
}; /* __ROM_value__ind_screen_frame_buzzer */

/* initialization of the runtime status of indicator buzzer */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_buzzer = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_buzzer,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_buzzer */

/* ROM configuration of indicator keys_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_keys_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_keys_backlight,
	/* hwNumber         */ 1203,
}; /* __ROM_value__ind_screen_frame_keys_backlight */

/* initialization of the runtime status of indicator keys_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_keys_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_keys_backlight,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_keys_backlight */

/* ROM configuration of indicator keys_buzzer */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_keys_buzzer = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalIndicator FARPTR)) NULL,
	/* hwNumber         */ 1204,
}; /* __ROM_value__ind_screen_frame_keys_buzzer */

/* initialization of the runtime status of indicator keys_buzzer */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_keys_buzzer = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_keys_buzzer,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_keys_buzzer */


/* runtime status of physical indicators */
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F1;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F2;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F3;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F4;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F5;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F6;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F7;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F8;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F9;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F10;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F11;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F12;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F13;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F14;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F15;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_keys_backlight;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_keys_buzzer;

/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_frame[] = {
	{ &ind_screen_frame_key_F1, &__init_value__ind_screen_frame_key_F1, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F2, &__init_value__ind_screen_frame_key_F2, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F3, &__init_value__ind_screen_frame_key_F3, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F4, &__init_value__ind_screen_frame_key_F4, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F5, &__init_value__ind_screen_frame_key_F5, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F6, &__init_value__ind_screen_frame_key_F6, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F7, &__init_value__ind_screen_frame_key_F7, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F8, &__init_value__ind_screen_frame_key_F8, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F9, &__init_value__ind_screen_frame_key_F9, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F10, &__init_value__ind_screen_frame_key_F10, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F11, &__init_value__ind_screen_frame_key_F11, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F12, &__init_value__ind_screen_frame_key_F12, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F13, &__init_value__ind_screen_frame_key_F13, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F14, &__init_value__ind_screen_frame_key_F14, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F15, &__init_value__ind_screen_frame_key_F15, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_screen_backlight, &__init_value__ind_screen_frame_screen_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_buzzer, &__init_value__ind_screen_frame_buzzer, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_keys_backlight, &__init_value__ind_screen_frame_keys_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_keys_buzzer, &__init_value__ind_screen_frame_keys_buzzer, sizeof(vt3_indicator_PhysicalIndicator) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_frame(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_frame; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_frame(BYTE event)
{
	/* event procedure for the screen frame */
	vt3_event_ind_screen_frame(event);

	/* indicator "key_F1" of type "PhysicalKey" */

	/* draw the indicator: key_F1 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F1);


	/* indicator "key_F2" of type "PhysicalKey" */

	/* draw the indicator: key_F2 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F2);


	/* indicator "key_F3" of type "PhysicalKey" */

	/* draw the indicator: key_F3 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F3);


	/* indicator "key_F4" of type "PhysicalKey" */

	/* draw the indicator: key_F4 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F4);


	/* indicator "key_F5" of type "PhysicalKey" */

	/* draw the indicator: key_F5 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F5);


	/* indicator "key_F6" of type "PhysicalKey" */

	/* draw the indicator: key_F6 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F6);


	/* indicator "key_F7" of type "PhysicalKey" */

	/* draw the indicator: key_F7 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F7);


	/* indicator "key_F8" of type "PhysicalKey" */

	/* draw the indicator: key_F8 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F8);


	/* indicator "key_F9" of type "PhysicalKey" */

	/* draw the indicator: key_F9 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F9);


	/* indicator "key_F10" of type "PhysicalKey" */

	/* draw the indicator: key_F10 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F10);


	/* indicator "key_F11" of type "PhysicalKey" */

	/* draw the indicator: key_F11 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F11);


	/* indicator "key_F12" of type "PhysicalKey" */

	/* draw the indicator: key_F12 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F12);


	/* indicator "key_F13" of type "PhysicalKey" */

	/* draw the indicator: key_F13 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F13);


	/* indicator "key_F14" of type "PhysicalKey" */

	/* draw the indicator: key_F14 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F14);


	/* indicator "key_F15" of type "PhysicalKey" */

	/* draw the indicator: key_F15 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F15);


	/* indicator "screen_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: screen_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_screen_backlight);


	/* indicator "buzzer" of type "PhysicalIndicator" */

	/* draw the indicator: buzzer */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_buzzer);


	/* indicator "keys_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: keys_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_keys_backlight);


	/* indicator "keys_buzzer" of type "PhysicalIndicator" */

	/* draw the indicator: keys_buzzer */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_keys_buzzer);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_frame() */


#endif /* INCLUDE__VT3_DISP__SCREENFRAME_C */

/* end of file */
