/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SETUP_C
#define INCLUDE__VT3_DISP__SETUP_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Setup.h"
#include "vt3_Event__Setup.h"


/* ROM configuration of indicator setup */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_setup = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_setup,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 },
}; /* __ROM_value__ind_setup */

/* initialization of the runtime status of indicator setup */
static const vt3_indicator_ScreenModel FAR __init_value__ind_setup = {
	/* ROM parameters   */ &__ROM_value__ind_setup,
}; /* __init_value__ind_setup */

/* link the components of group */
static const vt3_group_BBEC0481_type FAR vt3_screen_ind_setup_group_ind_setup_Logo_childs = {
	&vt3_screen_union.setup.Logo_simple_rect,
	&vt3_screen_union.setup.Logo_multibitmap,
}; /* vt3_screen_ind_setup_group_ind_setup_Logo_childs */

/* ROM configuration of indicator Logo */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_setup_Logo = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_setup_group_ind_setup_Logo_childs
}; /* __ROM_value__ind_setup_Logo */

/* initialization of the runtime status of indicator Logo */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_setup_Logo = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Logo,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_setup_Logo */

/* ROM configuration of indicator simple_rect */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_setup_Logo_simple_rect = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 800,
	/* height           */ 55,
	/* thick            */ 2,
	/* layer            */ 0,
}; /* __ROM_value__ind_setup_Logo_simple_rect */

/* initialization of the runtime status of indicator simple_rect */
static const vt3_indicator_SimpleRect FAR __init_value__ind_setup_Logo_simple_rect = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Logo_simple_rect,
	/* x                */ 0,
	/* y                */ 0,
	/* border           */ { 255, 255, 255, 255 },
	/* old_border       */ { 255, 0, 0, 0 },
	/* fill             */ { 255, 255, 255, 255 },
	/* old_fill         */ { 255, 16, 16, 16 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Logo_simple_rect */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_setup_Logo_multibitmap_bitmap[1] = {
	{ VT3IMG_BITMAP, vt3_BMP__HartstraLogo2_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			162, 55 }, 
}; /* ind_setup_Logo_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_Logo_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_Logo_multibitmap,
	/* width            */ 162,
	/* height           */ 55,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_setup_Logo_multibitmap_bitmap,
}; /* __ROM_value__ind_setup_Logo_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_Logo_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Logo_multibitmap,
	/* x                */ 0,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Logo_multibitmap */

/* link the components of group */
static const vt3_group_E051795A_type FAR vt3_screen_ind_setup_group_ind_setup_AC_childs = {
	&vt3_screen_union.setup.AC_BG_1,
	&vt3_screen_union.setup.AC_BG_1_1,
	&vt3_screen_union.setup.AC_BG_2,
	&vt3_screen_union.setup.AC_BG_2_2,
	&vt3_screen_union.setup.AC_ac_setpoint_text,
	&vt3_screen_union.setup.AC_ac_setpoint_number,
	&vt3_screen_union.setup.AC_ac_sp_unit_text,
	&vt3_screen_union.setup.AC_ac_sp_degree_text,
	&vt3_screen_union.setup.AC_ac_deadband_text,
	&vt3_screen_union.setup.AC_ac_deadband_number,
	&vt3_screen_union.setup.AC_ac_db_unit_text,
	&vt3_screen_union.setup.AC_ac_db_degree_text,
}; /* vt3_screen_ind_setup_group_ind_setup_AC_childs */

/* ROM configuration of indicator AC */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_setup_AC = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_setup_group_ind_setup_AC_childs
}; /* __ROM_value__ind_setup_AC */

/* initialization of the runtime status of indicator AC */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_setup_AC = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_setup_AC */

/* status of indicator BG_1: array bitmap */
static const vt3_image FAR ind_setup_AC_BG_1_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_AC_BG_1_bitmap[] */

/* ROM configuration of indicator BG_1 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_AC_BG_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_AC_BG_1,
	/* width            */ 310,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_AC_BG_1_bitmap,
}; /* __ROM_value__ind_setup_AC_BG_1 */

/* initialization of the runtime status of indicator BG_1 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_AC_BG_1 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_BG_1,
	/* x                */ 10,
	/* y                */ 72,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_BG_1 */

/* status of indicator BG_1_1: array bitmap */
static const vt3_image FAR ind_setup_AC_BG_1_1_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_AC_BG_1_1_bitmap[] */

/* ROM configuration of indicator BG_1_1 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_AC_BG_1_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_AC_BG_1_1,
	/* width            */ 110,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_AC_BG_1_1_bitmap,
}; /* __ROM_value__ind_setup_AC_BG_1_1 */

/* initialization of the runtime status of indicator BG_1_1 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_AC_BG_1_1 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_BG_1_1,
	/* x                */ 330,
	/* y                */ 72,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_BG_1_1 */

/* status of indicator BG_2: array bitmap */
static const vt3_image FAR ind_setup_AC_BG_2_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_AC_BG_2_bitmap[] */

/* ROM configuration of indicator BG_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_AC_BG_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_AC_BG_2,
	/* width            */ 310,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_AC_BG_2_bitmap,
}; /* __ROM_value__ind_setup_AC_BG_2 */

/* initialization of the runtime status of indicator BG_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_AC_BG_2 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_BG_2,
	/* x                */ 10,
	/* y                */ 103,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_BG_2 */

/* status of indicator BG_2_2: array bitmap */
static const vt3_image FAR ind_setup_AC_BG_2_2_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_AC_BG_2_2_bitmap[] */

/* ROM configuration of indicator BG_2_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_AC_BG_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_AC_BG_2_2,
	/* width            */ 110,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_AC_BG_2_2_bitmap,
}; /* __ROM_value__ind_setup_AC_BG_2_2 */

/* initialization of the runtime status of indicator BG_2_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_AC_BG_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_BG_2_2,
	/* x                */ 330,
	/* y                */ 103,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_BG_2_2 */

/* ROM configuration of indicator ac_setpoint_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_AC_ac_setpoint_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_AC_ac_setpoint_text,
	/* width            */ 175,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_AC_ac_setpoint_text */

/* initialization of the runtime status of indicator ac_setpoint_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_AC_ac_setpoint_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_setpoint_text,
	/* x                */ 25,
	/* y                */ 74,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_ac_setpoint_text */

/* ROM configuration of indicator ac_setpoint_number */
static const char FAR ind_setup_AC_ac_setpoint_number__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_setup_AC_ac_setpoint_number = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_setup_AC_ac_setpoint_number,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_setup_AC_ac_setpoint_number__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* start_edit_index */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ { 255, 255, 255, 255 },
}; /* __ROM_value__ind_setup_AC_ac_setpoint_number */

/* initialization of the runtime status of indicator ac_setpoint_number */
static const vt3_indicator_NumberEditable FAR __init_value__ind_setup_AC_ac_setpoint_number = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_setpoint_number,
	/* x                */ 359,
	/* y                */ 74,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 350,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_setup_AC_ac_setpoint_number */

/* status of indicator ac_sp_unit_text: array text */
static const UINT16 FAR ind_setup_AC_ac_sp_unit_text_text[2] = {
	F,
	C,
}; /* ind_setup_AC_ac_sp_unit_text_text[] */

/* status of indicator ac_sp_unit_text: array font */
static const vt3_font FARPTR const ind_setup_AC_ac_sp_unit_text_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_setup_AC_ac_sp_unit_text_font[] */

/* status of indicator ac_sp_unit_text: array color */
static const vt3_color FAR ind_setup_AC_ac_sp_unit_text_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_setup_AC_ac_sp_unit_text_color[] */

/* ROM configuration of indicator ac_sp_unit_text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_setup_AC_ac_sp_unit_text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_setup_AC_ac_sp_unit_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_setup_AC_ac_sp_unit_text_text,
	/* font             */ ind_setup_AC_ac_sp_unit_text_font,
	/* color            */ ind_setup_AC_ac_sp_unit_text_color,
}; /* __ROM_value__ind_setup_AC_ac_sp_unit_text */

/* initialization of the runtime status of indicator ac_sp_unit_text */
static const vt3_indicator_MultiText FAR __init_value__ind_setup_AC_ac_sp_unit_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_sp_unit_text,
	/* x                */ 414,
	/* y                */ 74,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_ac_sp_unit_text */

/* ROM configuration of indicator ac_sp_degree_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_AC_ac_sp_degree_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_AC_ac_sp_degree_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_AC_ac_sp_degree_text */

/* initialization of the runtime status of indicator ac_sp_degree_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_AC_ac_sp_degree_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_sp_degree_text,
	/* x                */ 400,
	/* y                */ 66,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_ac_sp_degree_text */

/* ROM configuration of indicator ac_deadband_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_AC_ac_deadband_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_AC_ac_deadband_text,
	/* width            */ 175,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_AC_ac_deadband_text */

/* initialization of the runtime status of indicator ac_deadband_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_AC_ac_deadband_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_deadband_text,
	/* x                */ 25,
	/* y                */ 105,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_ac_deadband_text */

/* ROM configuration of indicator ac_deadband_number */
static const char FAR ind_setup_AC_ac_deadband_number__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_setup_AC_ac_deadband_number = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_setup_AC_ac_deadband_number,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_setup_AC_ac_deadband_number__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* start_edit_index */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ { 255, 255, 255, 255 },
}; /* __ROM_value__ind_setup_AC_ac_deadband_number */

/* initialization of the runtime status of indicator ac_deadband_number */
static const vt3_indicator_NumberEditable FAR __init_value__ind_setup_AC_ac_deadband_number = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_deadband_number,
	/* x                */ 359,
	/* y                */ 105,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 10,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 350,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_setup_AC_ac_deadband_number */

/* status of indicator ac_db_unit_text: array text */
static const UINT16 FAR ind_setup_AC_ac_db_unit_text_text[2] = {
	F,
	C,
}; /* ind_setup_AC_ac_db_unit_text_text[] */

/* status of indicator ac_db_unit_text: array font */
static const vt3_font FARPTR const ind_setup_AC_ac_db_unit_text_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_setup_AC_ac_db_unit_text_font[] */

/* status of indicator ac_db_unit_text: array color */
static const vt3_color FAR ind_setup_AC_ac_db_unit_text_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_setup_AC_ac_db_unit_text_color[] */

/* ROM configuration of indicator ac_db_unit_text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_setup_AC_ac_db_unit_text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_setup_AC_ac_db_unit_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_setup_AC_ac_db_unit_text_text,
	/* font             */ ind_setup_AC_ac_db_unit_text_font,
	/* color            */ ind_setup_AC_ac_db_unit_text_color,
}; /* __ROM_value__ind_setup_AC_ac_db_unit_text */

/* initialization of the runtime status of indicator ac_db_unit_text */
static const vt3_indicator_MultiText FAR __init_value__ind_setup_AC_ac_db_unit_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_db_unit_text,
	/* x                */ 414,
	/* y                */ 105,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_ac_db_unit_text */

/* ROM configuration of indicator ac_db_degree_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_AC_ac_db_degree_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_AC_ac_db_degree_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_AC_ac_db_degree_text */

/* initialization of the runtime status of indicator ac_db_degree_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_AC_ac_db_degree_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_AC_ac_db_degree_text,
	/* x                */ 400,
	/* y                */ 97,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_AC_ac_db_degree_text */

/* link the components of group */
static const vt3_group_E5974F0F_type FAR vt3_screen_ind_setup_group_ind_setup_Heat_childs = {
	&vt3_screen_union.setup.Heat_BG_3,
	&vt3_screen_union.setup.Heat_BG_3_1,
	&vt3_screen_union.setup.Heat_BG_4,
	&vt3_screen_union.setup.Heat_BG_4_1,
	&vt3_screen_union.setup.Heat_heat_setpoint_text,
	&vt3_screen_union.setup.Heat_heat_setpoint_number,
	&vt3_screen_union.setup.Heat_heat_sp_unit_text,
	&vt3_screen_union.setup.Heat_heat_sp_degree_text,
	&vt3_screen_union.setup.Heat_heat_deadband_text,
	&vt3_screen_union.setup.Heat_heat_deadband_number,
	&vt3_screen_union.setup.Heat_heat_db_unit_text,
	&vt3_screen_union.setup.Heat_heat_db_degree_text,
}; /* vt3_screen_ind_setup_group_ind_setup_Heat_childs */

/* ROM configuration of indicator Heat */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_setup_Heat = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_setup_group_ind_setup_Heat_childs
}; /* __ROM_value__ind_setup_Heat */

/* initialization of the runtime status of indicator Heat */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_setup_Heat = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_setup_Heat */

/* status of indicator BG_3: array bitmap */
static const vt3_image FAR ind_setup_Heat_BG_3_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_Heat_BG_3_bitmap[] */

/* ROM configuration of indicator BG_3 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_Heat_BG_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_Heat_BG_3,
	/* width            */ 310,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_Heat_BG_3_bitmap,
}; /* __ROM_value__ind_setup_Heat_BG_3 */

/* initialization of the runtime status of indicator BG_3 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_Heat_BG_3 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_BG_3,
	/* x                */ 10,
	/* y                */ 134,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_BG_3 */

/* status of indicator BG_3_1: array bitmap */
static const vt3_image FAR ind_setup_Heat_BG_3_1_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_Heat_BG_3_1_bitmap[] */

/* ROM configuration of indicator BG_3_1 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_Heat_BG_3_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_Heat_BG_3_1,
	/* width            */ 110,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_Heat_BG_3_1_bitmap,
}; /* __ROM_value__ind_setup_Heat_BG_3_1 */

/* initialization of the runtime status of indicator BG_3_1 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_Heat_BG_3_1 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_BG_3_1,
	/* x                */ 330,
	/* y                */ 134,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_BG_3_1 */

/* status of indicator BG_4: array bitmap */
static const vt3_image FAR ind_setup_Heat_BG_4_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_Heat_BG_4_bitmap[] */

/* ROM configuration of indicator BG_4 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_Heat_BG_4 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_Heat_BG_4,
	/* width            */ 310,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_Heat_BG_4_bitmap,
}; /* __ROM_value__ind_setup_Heat_BG_4 */

/* initialization of the runtime status of indicator BG_4 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_Heat_BG_4 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_BG_4,
	/* x                */ 10,
	/* y                */ 165,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_BG_4 */

/* status of indicator BG_4_1: array bitmap */
static const vt3_image FAR ind_setup_Heat_BG_4_1_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_Heat_BG_4_1_bitmap[] */

/* ROM configuration of indicator BG_4_1 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_Heat_BG_4_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_Heat_BG_4_1,
	/* width            */ 110,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_Heat_BG_4_1_bitmap,
}; /* __ROM_value__ind_setup_Heat_BG_4_1 */

/* initialization of the runtime status of indicator BG_4_1 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_Heat_BG_4_1 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_BG_4_1,
	/* x                */ 330,
	/* y                */ 165,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_BG_4_1 */

/* ROM configuration of indicator heat_setpoint_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_Heat_heat_setpoint_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_Heat_heat_setpoint_text,
	/* width            */ 200,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_Heat_heat_setpoint_text */

/* initialization of the runtime status of indicator heat_setpoint_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_Heat_heat_setpoint_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_setpoint_text,
	/* x                */ 24,
	/* y                */ 136,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_heat_setpoint_text */

/* ROM configuration of indicator heat_setpoint_number */
static const char FAR ind_setup_Heat_heat_setpoint_number__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_setup_Heat_heat_setpoint_number = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_setup_Heat_heat_setpoint_number,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_setup_Heat_heat_setpoint_number__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* start_edit_index */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ { 255, 255, 255, 255 },
}; /* __ROM_value__ind_setup_Heat_heat_setpoint_number */

/* initialization of the runtime status of indicator heat_setpoint_number */
static const vt3_indicator_NumberEditable FAR __init_value__ind_setup_Heat_heat_setpoint_number = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_setpoint_number,
	/* x                */ 359,
	/* y                */ 136,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 350,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_setup_Heat_heat_setpoint_number */

/* status of indicator heat_sp_unit_text: array text */
static const UINT16 FAR ind_setup_Heat_heat_sp_unit_text_text[2] = {
	F,
	C,
}; /* ind_setup_Heat_heat_sp_unit_text_text[] */

/* status of indicator heat_sp_unit_text: array font */
static const vt3_font FARPTR const ind_setup_Heat_heat_sp_unit_text_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_setup_Heat_heat_sp_unit_text_font[] */

/* status of indicator heat_sp_unit_text: array color */
static const vt3_color FAR ind_setup_Heat_heat_sp_unit_text_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_setup_Heat_heat_sp_unit_text_color[] */

/* ROM configuration of indicator heat_sp_unit_text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_setup_Heat_heat_sp_unit_text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_setup_Heat_heat_sp_unit_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_setup_Heat_heat_sp_unit_text_text,
	/* font             */ ind_setup_Heat_heat_sp_unit_text_font,
	/* color            */ ind_setup_Heat_heat_sp_unit_text_color,
}; /* __ROM_value__ind_setup_Heat_heat_sp_unit_text */

/* initialization of the runtime status of indicator heat_sp_unit_text */
static const vt3_indicator_MultiText FAR __init_value__ind_setup_Heat_heat_sp_unit_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_sp_unit_text,
	/* x                */ 414,
	/* y                */ 136,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_heat_sp_unit_text */

/* ROM configuration of indicator heat_sp_degree_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_Heat_heat_sp_degree_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_Heat_heat_sp_degree_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_Heat_heat_sp_degree_text */

/* initialization of the runtime status of indicator heat_sp_degree_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_Heat_heat_sp_degree_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_sp_degree_text,
	/* x                */ 400,
	/* y                */ 128,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_heat_sp_degree_text */

/* ROM configuration of indicator heat_deadband_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_Heat_heat_deadband_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_Heat_heat_deadband_text,
	/* width            */ 200,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_Heat_heat_deadband_text */

/* initialization of the runtime status of indicator heat_deadband_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_Heat_heat_deadband_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_deadband_text,
	/* x                */ 24,
	/* y                */ 167,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_heat_deadband_text */

/* ROM configuration of indicator heat_deadband_number */
static const char FAR ind_setup_Heat_heat_deadband_number__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_setup_Heat_heat_deadband_number = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_setup_Heat_heat_deadband_number,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_setup_Heat_heat_deadband_number__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* start_edit_index */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ { 255, 255, 255, 255 },
}; /* __ROM_value__ind_setup_Heat_heat_deadband_number */

/* initialization of the runtime status of indicator heat_deadband_number */
static const vt3_indicator_NumberEditable FAR __init_value__ind_setup_Heat_heat_deadband_number = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_deadband_number,
	/* x                */ 359,
	/* y                */ 167,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 10,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 350,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_setup_Heat_heat_deadband_number */

/* status of indicator heat_db_unit_text: array text */
static const UINT16 FAR ind_setup_Heat_heat_db_unit_text_text[2] = {
	F,
	C,
}; /* ind_setup_Heat_heat_db_unit_text_text[] */

/* status of indicator heat_db_unit_text: array font */
static const vt3_font FARPTR const ind_setup_Heat_heat_db_unit_text_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_setup_Heat_heat_db_unit_text_font[] */

/* status of indicator heat_db_unit_text: array color */
static const vt3_color FAR ind_setup_Heat_heat_db_unit_text_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_setup_Heat_heat_db_unit_text_color[] */

/* ROM configuration of indicator heat_db_unit_text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_setup_Heat_heat_db_unit_text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_setup_Heat_heat_db_unit_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_setup_Heat_heat_db_unit_text_text,
	/* font             */ ind_setup_Heat_heat_db_unit_text_font,
	/* color            */ ind_setup_Heat_heat_db_unit_text_color,
}; /* __ROM_value__ind_setup_Heat_heat_db_unit_text */

/* initialization of the runtime status of indicator heat_db_unit_text */
static const vt3_indicator_MultiText FAR __init_value__ind_setup_Heat_heat_db_unit_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_db_unit_text,
	/* x                */ 414,
	/* y                */ 167,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_heat_db_unit_text */

/* ROM configuration of indicator heat_db_degree_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_Heat_heat_db_degree_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_Heat_heat_db_degree_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_Heat_heat_db_degree_text */

/* initialization of the runtime status of indicator heat_db_degree_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_Heat_heat_db_degree_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_Heat_heat_db_degree_text,
	/* x                */ 400,
	/* y                */ 159,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_Heat_heat_db_degree_text */

/* link the components of group */
static const vt3_group_DAC0DEF3_type FAR vt3_screen_ind_setup_group_ind_setup_HVAC_Alarms_childs = {
	&vt3_screen_union.setup.HVAC_Alarms_BG_5,
	&vt3_screen_union.setup.HVAC_Alarms_BG_5_1,
	&vt3_screen_union.setup.HVAC_Alarms_BG_6,
	&vt3_screen_union.setup.HVAC_Alarms_BG_6_1,
	&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_text,
	&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number,
	&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_sp_unit_text,
	&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_sp_degree_text,
	&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_text,
	&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number,
	&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_unit_text,
	&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_degree_text,
}; /* vt3_screen_ind_setup_group_ind_setup_HVAC_Alarms_childs */

/* ROM configuration of indicator HVAC_Alarms */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_setup_HVAC_Alarms = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_setup_group_ind_setup_HVAC_Alarms_childs
}; /* __ROM_value__ind_setup_HVAC_Alarms */

/* initialization of the runtime status of indicator HVAC_Alarms */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_setup_HVAC_Alarms = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms */

/* status of indicator BG_5: array bitmap */
static const vt3_image FAR ind_setup_HVAC_Alarms_BG_5_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_HVAC_Alarms_BG_5_bitmap[] */

/* ROM configuration of indicator BG_5 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_HVAC_Alarms_BG_5 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_BG_5,
	/* width            */ 310,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_HVAC_Alarms_BG_5_bitmap,
}; /* __ROM_value__ind_setup_HVAC_Alarms_BG_5 */

/* initialization of the runtime status of indicator BG_5 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_HVAC_Alarms_BG_5 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_BG_5,
	/* x                */ 10,
	/* y                */ 196,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_BG_5 */

/* status of indicator BG_5_1: array bitmap */
static const vt3_image FAR ind_setup_HVAC_Alarms_BG_5_1_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_HVAC_Alarms_BG_5_1_bitmap[] */

/* ROM configuration of indicator BG_5_1 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_HVAC_Alarms_BG_5_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_BG_5_1,
	/* width            */ 110,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_HVAC_Alarms_BG_5_1_bitmap,
}; /* __ROM_value__ind_setup_HVAC_Alarms_BG_5_1 */

/* initialization of the runtime status of indicator BG_5_1 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_HVAC_Alarms_BG_5_1 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_BG_5_1,
	/* x                */ 330,
	/* y                */ 196,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_BG_5_1 */

/* status of indicator BG_6: array bitmap */
static const vt3_image FAR ind_setup_HVAC_Alarms_BG_6_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_HVAC_Alarms_BG_6_bitmap[] */

/* ROM configuration of indicator BG_6 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_HVAC_Alarms_BG_6 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_BG_6,
	/* width            */ 310,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_HVAC_Alarms_BG_6_bitmap,
}; /* __ROM_value__ind_setup_HVAC_Alarms_BG_6 */

/* initialization of the runtime status of indicator BG_6 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_HVAC_Alarms_BG_6 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_BG_6,
	/* x                */ 10,
	/* y                */ 227,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_BG_6 */

/* status of indicator BG_6_1: array bitmap */
static const vt3_image FAR ind_setup_HVAC_Alarms_BG_6_1_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_setup_HVAC_Alarms_BG_6_1_bitmap[] */

/* ROM configuration of indicator BG_6_1 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_HVAC_Alarms_BG_6_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_BG_6_1,
	/* width            */ 110,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_setup_HVAC_Alarms_BG_6_1_bitmap,
}; /* __ROM_value__ind_setup_HVAC_Alarms_BG_6_1 */

/* initialization of the runtime status of indicator BG_6_1 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_HVAC_Alarms_BG_6_1 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_BG_6_1,
	/* x                */ 330,
	/* y                */ 227,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_BG_6_1 */

/* ROM configuration of indicator lower_alarm_setpoint_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_lower_alarm_setpoint_text,
	/* width            */ 300,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_text */

/* initialization of the runtime status of indicator lower_alarm_setpoint_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_text,
	/* x                */ 25,
	/* y                */ 198,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_text */

/* ROM configuration of indicator lower_alarm_setpoint_number */
static const char FAR ind_setup_HVAC_Alarms_lower_alarm_setpoint_number__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_number = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_lower_alarm_setpoint_number,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_setup_HVAC_Alarms_lower_alarm_setpoint_number__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* start_edit_index */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ { 255, 255, 255, 255 },
}; /* __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_number */

/* initialization of the runtime status of indicator lower_alarm_setpoint_number */
static const vt3_indicator_NumberEditable FAR __init_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_number = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_number,
	/* x                */ 359,
	/* y                */ 198,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 50,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 350,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_number */

/* status of indicator lower_alarm_sp_unit_text: array text */
static const UINT16 FAR ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_text[2] = {
	F,
	C,
}; /* ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_text[] */

/* status of indicator lower_alarm_sp_unit_text: array font */
static const vt3_font FARPTR const ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_font[] */

/* status of indicator lower_alarm_sp_unit_text: array color */
static const vt3_color FAR ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_color[] */

/* ROM configuration of indicator lower_alarm_sp_unit_text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_text,
	/* font             */ ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_font,
	/* color            */ ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text_color,
}; /* __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text */

/* initialization of the runtime status of indicator lower_alarm_sp_unit_text */
static const vt3_indicator_MultiText FAR __init_value__ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text,
	/* x                */ 414,
	/* y                */ 198,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text */

/* ROM configuration of indicator lower_alarm_sp_degree_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_sp_degree_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_lower_alarm_sp_degree_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_HVAC_Alarms_lower_alarm_sp_degree_text */

/* initialization of the runtime status of indicator lower_alarm_sp_degree_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_HVAC_Alarms_lower_alarm_sp_degree_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_lower_alarm_sp_degree_text,
	/* x                */ 400,
	/* y                */ 190,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_lower_alarm_sp_degree_text */

/* ROM configuration of indicator upper_alarm_setpoint_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_upper_alarm_setpoint_text,
	/* width            */ 300,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_text */

/* initialization of the runtime status of indicator upper_alarm_setpoint_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_text,
	/* x                */ 25,
	/* y                */ 229,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_text */

/* ROM configuration of indicator upper_alarm_setpoint_number */
static const char FAR ind_setup_HVAC_Alarms_upper_alarm_setpoint_number__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_number = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_upper_alarm_setpoint_number,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_setup_HVAC_Alarms_upper_alarm_setpoint_number__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* start_edit_index */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ { 255, 255, 255, 255 },
}; /* __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_number */

/* initialization of the runtime status of indicator upper_alarm_setpoint_number */
static const vt3_indicator_NumberEditable FAR __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_number = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_number,
	/* x                */ 359,
	/* y                */ 229,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 80,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 350,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_number */

/* status of indicator upper_alarm_setpoint_unit_text: array text */
static const UINT16 FAR ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_text[2] = {
	F,
	C,
}; /* ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_text[] */

/* status of indicator upper_alarm_setpoint_unit_text: array font */
static const vt3_font FARPTR const ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_font[] */

/* status of indicator upper_alarm_setpoint_unit_text: array color */
static const vt3_color FAR ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_color[] */

/* ROM configuration of indicator upper_alarm_setpoint_unit_text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_text,
	/* font             */ ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_font,
	/* color            */ ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text_color,
}; /* __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text */

/* initialization of the runtime status of indicator upper_alarm_setpoint_unit_text */
static const vt3_indicator_MultiText FAR __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text,
	/* x                */ 414,
	/* y                */ 229,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text */

/* ROM configuration of indicator upper_alarm_setpoint_degree_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_degree_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_HVAC_Alarms_upper_alarm_setpoint_degree_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_degree_text */

/* initialization of the runtime status of indicator upper_alarm_setpoint_degree_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_degree_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_degree_text,
	/* x                */ 400,
	/* y                */ 221,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_degree_text */

/* link the components of group */
static const vt3_group_20B2EF5A_type FAR vt3_screen_ind_setup_group_ind_setup_F10_childs = {
	&vt3_screen_union.setup.F10_Button,
	&vt3_screen_union.setup.F10_Text_1,
}; /* vt3_screen_ind_setup_group_ind_setup_F10_childs */

/* ROM configuration of indicator F10 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_setup_F10 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_setup_group_ind_setup_F10_childs
}; /* __ROM_value__ind_setup_F10 */

/* initialization of the runtime status of indicator F10 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_setup_F10 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_F10,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_setup_F10 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_setup_F10_Button_bitmap[5] = {
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
}; /* ind_setup_F10_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_setup_F10_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_setup_F10_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_setup_F10_Button_bitmap,
}; /* __ROM_value__ind_setup_F10_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_setup_F10_Button = {
	/* ROM parameters   */ &__ROM_value__ind_setup_F10_Button,
	/* x                */ 674,
	/* y                */ 389,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_F10_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_F10_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_F10_Text_1,
	/* width            */ 102,
	/* height           */ 56,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_F10_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_F10_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_setup_F10_Text_1,
	/* x                */ 682,
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
}; /* __init_value__ind_setup_F10_Text_1 */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_setup_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_setup_simple_text,
	/* width            */ 608,
	/* height           */ 78,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_setup_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_setup_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_setup_simple_text,
	/* x                */ 32,
	/* y                */ 387,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_setup_simple_text */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_setup[] = {
	{ &vt3_screen_union.setup._background, &__init_value__ind_setup, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.setup.Logo, &__init_value__ind_setup_Logo, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.setup.Logo_simple_rect, &__init_value__ind_setup_Logo_simple_rect, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.setup.Logo_multibitmap, &__init_value__ind_setup_Logo_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.AC, &__init_value__ind_setup_AC, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.setup.AC_BG_1, &__init_value__ind_setup_AC_BG_1, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.AC_BG_1_1, &__init_value__ind_setup_AC_BG_1_1, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.AC_BG_2, &__init_value__ind_setup_AC_BG_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.AC_BG_2_2, &__init_value__ind_setup_AC_BG_2_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.AC_ac_setpoint_text, &__init_value__ind_setup_AC_ac_setpoint_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.AC_ac_setpoint_number, &__init_value__ind_setup_AC_ac_setpoint_number, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.setup.AC_ac_sp_unit_text, &__init_value__ind_setup_AC_ac_sp_unit_text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.setup.AC_ac_sp_degree_text, &__init_value__ind_setup_AC_ac_sp_degree_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.AC_ac_deadband_text, &__init_value__ind_setup_AC_ac_deadband_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.AC_ac_deadband_number, &__init_value__ind_setup_AC_ac_deadband_number, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.setup.AC_ac_db_unit_text, &__init_value__ind_setup_AC_ac_db_unit_text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.setup.AC_ac_db_degree_text, &__init_value__ind_setup_AC_ac_db_degree_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.Heat, &__init_value__ind_setup_Heat, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.setup.Heat_BG_3, &__init_value__ind_setup_Heat_BG_3, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.Heat_BG_3_1, &__init_value__ind_setup_Heat_BG_3_1, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.Heat_BG_4, &__init_value__ind_setup_Heat_BG_4, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.Heat_BG_4_1, &__init_value__ind_setup_Heat_BG_4_1, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.Heat_heat_setpoint_text, &__init_value__ind_setup_Heat_heat_setpoint_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.Heat_heat_setpoint_number, &__init_value__ind_setup_Heat_heat_setpoint_number, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.setup.Heat_heat_sp_unit_text, &__init_value__ind_setup_Heat_heat_sp_unit_text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.setup.Heat_heat_sp_degree_text, &__init_value__ind_setup_Heat_heat_sp_degree_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.Heat_heat_deadband_text, &__init_value__ind_setup_Heat_heat_deadband_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.Heat_heat_deadband_number, &__init_value__ind_setup_Heat_heat_deadband_number, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.setup.Heat_heat_db_unit_text, &__init_value__ind_setup_Heat_heat_db_unit_text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.setup.Heat_heat_db_degree_text, &__init_value__ind_setup_Heat_heat_db_degree_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.HVAC_Alarms, &__init_value__ind_setup_HVAC_Alarms, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.setup.HVAC_Alarms_BG_5, &__init_value__ind_setup_HVAC_Alarms_BG_5, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.HVAC_Alarms_BG_5_1, &__init_value__ind_setup_HVAC_Alarms_BG_5_1, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.HVAC_Alarms_BG_6, &__init_value__ind_setup_HVAC_Alarms_BG_6, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.HVAC_Alarms_BG_6_1, &__init_value__ind_setup_HVAC_Alarms_BG_6_1, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_text, &__init_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, &__init_value__ind_setup_HVAC_Alarms_lower_alarm_setpoint_number, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_sp_unit_text, &__init_value__ind_setup_HVAC_Alarms_lower_alarm_sp_unit_text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_sp_degree_text, &__init_value__ind_setup_HVAC_Alarms_lower_alarm_sp_degree_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_text, &__init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, &__init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_number, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_unit_text, &__init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_unit_text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_degree_text, &__init_value__ind_setup_HVAC_Alarms_upper_alarm_setpoint_degree_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.F10, &__init_value__ind_setup_F10, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.setup.F10_Button, &__init_value__ind_setup_F10_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.setup.F10_Text_1, &__init_value__ind_setup_F10_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.setup.simple_text, &__init_value__ind_setup_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_setup(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_setup; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_setup(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_setup(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.setup._background);

	/* indicator "Logo" of type "IndicatorGroup" */

	/* indicator "simple_rect" of type "SimpleRect" */

	/* draw the indicator: simple_rect */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.setup.Logo_simple_rect);


	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.Logo_multibitmap);


	/* end of group "Logo" */


	/* indicator "AC" of type "IndicatorGroup" */

	/* indicator "BG_1" of type "MultiBitmap" */

	/* draw the indicator: BG_1 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.AC_BG_1);


	/* indicator "BG_1_1" of type "MultiBitmap" */

	/* draw the indicator: BG_1_1 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.AC_BG_1_1);


	/* indicator "BG_2" of type "MultiBitmap" */

	/* draw the indicator: BG_2 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.AC_BG_2);


	/* indicator "BG_2_2" of type "MultiBitmap" */

	/* draw the indicator: BG_2_2 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.AC_BG_2_2);


	/* indicator "ac_setpoint_text" of type "SimpleText" */

	/* draw the indicator: ac_setpoint_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.AC_ac_setpoint_text);


	/* indicator "ac_setpoint_number" of type "NumberEditable" */

	/* draw the indicator: ac_setpoint_number */
	vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.setup.AC_ac_setpoint_number);


	/* indicator "ac_sp_unit_text" of type "MultiText" */

	/* draw the indicator: ac_sp_unit_text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.setup.AC_ac_sp_unit_text);


	/* indicator "ac_sp_degree_text" of type "SimpleText" */

	/* draw the indicator: ac_sp_degree_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.AC_ac_sp_degree_text);


	/* indicator "ac_deadband_text" of type "SimpleText" */

	/* draw the indicator: ac_deadband_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.AC_ac_deadband_text);


	/* indicator "ac_deadband_number" of type "NumberEditable" */

	/* draw the indicator: ac_deadband_number */
	vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.setup.AC_ac_deadband_number);


	/* indicator "ac_db_unit_text" of type "MultiText" */

	/* draw the indicator: ac_db_unit_text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.setup.AC_ac_db_unit_text);


	/* indicator "ac_db_degree_text" of type "SimpleText" */

	/* draw the indicator: ac_db_degree_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.AC_ac_db_degree_text);


	/* end of group "AC" */


	/* indicator "Heat" of type "IndicatorGroup" */

	/* indicator "BG_3" of type "MultiBitmap" */

	/* draw the indicator: BG_3 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.Heat_BG_3);


	/* indicator "BG_3_1" of type "MultiBitmap" */

	/* draw the indicator: BG_3_1 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.Heat_BG_3_1);


	/* indicator "BG_4" of type "MultiBitmap" */

	/* draw the indicator: BG_4 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.Heat_BG_4);


	/* indicator "BG_4_1" of type "MultiBitmap" */

	/* draw the indicator: BG_4_1 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.Heat_BG_4_1);


	/* indicator "heat_setpoint_text" of type "SimpleText" */

	/* draw the indicator: heat_setpoint_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.Heat_heat_setpoint_text);


	/* indicator "heat_setpoint_number" of type "NumberEditable" */

	/* draw the indicator: heat_setpoint_number */
	vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.setup.Heat_heat_setpoint_number);


	/* indicator "heat_sp_unit_text" of type "MultiText" */

	/* draw the indicator: heat_sp_unit_text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.setup.Heat_heat_sp_unit_text);


	/* indicator "heat_sp_degree_text" of type "SimpleText" */

	/* draw the indicator: heat_sp_degree_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.Heat_heat_sp_degree_text);


	/* indicator "heat_deadband_text" of type "SimpleText" */

	/* draw the indicator: heat_deadband_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.Heat_heat_deadband_text);


	/* indicator "heat_deadband_number" of type "NumberEditable" */

	/* draw the indicator: heat_deadband_number */
	vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.setup.Heat_heat_deadband_number);


	/* indicator "heat_db_unit_text" of type "MultiText" */

	/* draw the indicator: heat_db_unit_text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.setup.Heat_heat_db_unit_text);


	/* indicator "heat_db_degree_text" of type "SimpleText" */

	/* draw the indicator: heat_db_degree_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.Heat_heat_db_degree_text);


	/* end of group "Heat" */


	/* indicator "HVAC_Alarms" of type "IndicatorGroup" */

	/* indicator "BG_5" of type "MultiBitmap" */

	/* draw the indicator: BG_5 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.HVAC_Alarms_BG_5);


	/* indicator "BG_5_1" of type "MultiBitmap" */

	/* draw the indicator: BG_5_1 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.HVAC_Alarms_BG_5_1);


	/* indicator "BG_6" of type "MultiBitmap" */

	/* draw the indicator: BG_6 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.HVAC_Alarms_BG_6);


	/* indicator "BG_6_1" of type "MultiBitmap" */

	/* draw the indicator: BG_6_1 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.HVAC_Alarms_BG_6_1);


	/* indicator "lower_alarm_setpoint_text" of type "SimpleText" */

	/* draw the indicator: lower_alarm_setpoint_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_text);


	/* indicator "lower_alarm_setpoint_number" of type "NumberEditable" */

	/* draw the indicator: lower_alarm_setpoint_number */
	vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number);


	/* indicator "lower_alarm_sp_unit_text" of type "MultiText" */

	/* draw the indicator: lower_alarm_sp_unit_text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_sp_unit_text);


	/* indicator "lower_alarm_sp_degree_text" of type "SimpleText" */

	/* draw the indicator: lower_alarm_sp_degree_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.HVAC_Alarms_lower_alarm_sp_degree_text);


	/* indicator "upper_alarm_setpoint_text" of type "SimpleText" */

	/* draw the indicator: upper_alarm_setpoint_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_text);


	/* indicator "upper_alarm_setpoint_number" of type "NumberEditable" */

	/* draw the indicator: upper_alarm_setpoint_number */
	vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number);


	/* indicator "upper_alarm_setpoint_unit_text" of type "MultiText" */

	/* draw the indicator: upper_alarm_setpoint_unit_text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_unit_text);


	/* indicator "upper_alarm_setpoint_degree_text" of type "SimpleText" */

	/* draw the indicator: upper_alarm_setpoint_degree_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_degree_text);


	/* end of group "HVAC_Alarms" */


	/* indicator "F10" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.setup.F10_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.F10_Text_1);


	/* end of group "F10" */


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.setup.simple_text);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_setup() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_setup[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_setup[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_setup[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_setup[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_setup[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_setup[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_setup[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_upper_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.HVAC_Alarms_lower_alarm_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.Heat_heat_setpoint_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_deadband_number, (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.setup.AC_ac_setpoint_number, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_setup[] */


#endif /* INCLUDE__VT3_DISP__SETUP_C */

/* end of file */
