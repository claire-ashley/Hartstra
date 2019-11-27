/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__HOME_C
#define INCLUDE__VT3_DISP__HOME_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Home.h"
#include "vt3_Event__Home.h"


/* ROM configuration of indicator home */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_home = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_home,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 },
}; /* __ROM_value__ind_home */

/* initialization of the runtime status of indicator home */
static const vt3_indicator_ScreenModel FAR __init_value__ind_home = {
	/* ROM parameters   */ &__ROM_value__ind_home,
}; /* __init_value__ind_home */

/* link the components of group */
static const vt3_group_BBEC0481_type FAR vt3_screen_ind_home_group_ind_home_Logo_childs = {
	&vt3_screen_union.home.Logo_simple_rect,
	&vt3_screen_union.home.Logo_multibitmap,
}; /* vt3_screen_ind_home_group_ind_home_Logo_childs */

/* ROM configuration of indicator Logo */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_Logo = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_Logo_childs
}; /* __ROM_value__ind_home_Logo */

/* initialization of the runtime status of indicator Logo */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_Logo = {
	/* ROM parameters   */ &__ROM_value__ind_home_Logo,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_Logo */

/* ROM configuration of indicator simple_rect */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_home_Logo_simple_rect = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 540,
	/* height           */ 55,
	/* thick            */ 2,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_Logo_simple_rect */

/* initialization of the runtime status of indicator simple_rect */
static const vt3_indicator_SimpleRect FAR __init_value__ind_home_Logo_simple_rect = {
	/* ROM parameters   */ &__ROM_value__ind_home_Logo_simple_rect,
	/* x                */ 131,
	/* y                */ 1,
	/* border           */ { 255, 255, 255, 255 },
	/* old_border       */ { 255, 0, 0, 0 },
	/* fill             */ { 255, 255, 255, 255 },
	/* old_fill         */ { 255, 16, 16, 16 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Logo_simple_rect */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_home_Logo_multibitmap_bitmap[1] = {
	{ VT3IMG_BITMAP, vt3_BMP__HartstraLogo2_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			162, 55 }, 
}; /* ind_home_Logo_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_Logo_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_Logo_multibitmap,
	/* width            */ 162,
	/* height           */ 55,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_home_Logo_multibitmap_bitmap,
}; /* __ROM_value__ind_home_Logo_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_Logo_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_home_Logo_multibitmap,
	/* x                */ 134,
	/* y                */ 1,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Logo_multibitmap */

/* link the components of group */
static const vt3_group_20B2EF5A_type FAR vt3_screen_ind_home_group_ind_home_F1_childs = {
	&vt3_screen_union.home.F1_Button,
	&vt3_screen_union.home.F1_Text_1,
}; /* vt3_screen_ind_home_group_ind_home_F1_childs */

/* ROM configuration of indicator F1 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_F1 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_F1_childs
}; /* __ROM_value__ind_home_F1 */

/* initialization of the runtime status of indicator F1 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_F1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F1,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_F1 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_home_F1_Button_bitmap[5] = {
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
}; /* ind_home_F1_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_F1_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_F1_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_home_F1_Button_bitmap,
}; /* __ROM_value__ind_home_F1_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_F1_Button = {
	/* ROM parameters   */ &__ROM_value__ind_home_F1_Button,
	/* x                */ 0,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F1_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_F1_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_F1_Text_1,
	/* width            */ 100,
	/* height           */ 28,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_F1_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_F1_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F1_Text_1,
	/* x                */ 12,
	/* y                */ 32,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F1_Text_1 */

/* link the components of group */
static const vt3_group_7DDFD348_type FAR vt3_screen_ind_home_group_ind_home_F2_childs = {
	&vt3_screen_union.home.F2_Button,
	&vt3_screen_union.home.F2_Text_1,
	&vt3_screen_union.home.F2_Auto_Man,
}; /* vt3_screen_ind_home_group_ind_home_F2_childs */

/* ROM configuration of indicator F2 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_F2 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_F2_childs
}; /* __ROM_value__ind_home_F2 */

/* initialization of the runtime status of indicator F2 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_F2 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F2,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_F2 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_home_F2_Button_bitmap[5] = {
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
}; /* ind_home_F2_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_F2_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_F2_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_home_F2_Button_bitmap,
}; /* __ROM_value__ind_home_F2_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_F2_Button = {
	/* ROM parameters   */ &__ROM_value__ind_home_F2_Button,
	/* x                */ 0,
	/* y                */ 98,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F2_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_F2_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_F2_Text_1,
	/* width            */ 100,
	/* height           */ 28,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_F2_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_F2_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F2_Text_1,
	/* x                */ 12,
	/* y                */ 142,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F2_Text_1 */

/* status of indicator Auto_Man: array text */
static const UINT16 FAR ind_home_F2_Auto_Man_text[2] = {
	MANUAL,
	AUTO,
}; /* ind_home_F2_Auto_Man_text[] */

/* status of indicator Auto_Man: array font */
static const vt3_font FARPTR const ind_home_F2_Auto_Man_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_F2_Auto_Man_font[] */

/* status of indicator Auto_Man: array color */
static const vt3_color FAR ind_home_F2_Auto_Man_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_home_F2_Auto_Man_color[] */

/* ROM configuration of indicator Auto_Man */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_F2_Auto_Man = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_F2_Auto_Man,
	/* width            */ 100,
	/* height           */ 28,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_F2_Auto_Man_text,
	/* font             */ ind_home_F2_Auto_Man_font,
	/* color            */ ind_home_F2_Auto_Man_color,
}; /* __ROM_value__ind_home_F2_Auto_Man */

/* initialization of the runtime status of indicator Auto_Man */
static const vt3_indicator_MultiText FAR __init_value__ind_home_F2_Auto_Man = {
	/* ROM parameters   */ &__ROM_value__ind_home_F2_Auto_Man,
	/* x                */ 12,
	/* y                */ 116,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F2_Auto_Man */

/* link the components of group */
static const vt3_group_20B2EF5A_type FAR vt3_screen_ind_home_group_ind_home_F3_childs = {
	&vt3_screen_union.home.F3_Button,
	&vt3_screen_union.home.F3_Text_1,
}; /* vt3_screen_ind_home_group_ind_home_F3_childs */

/* ROM configuration of indicator F3 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_F3 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_F3_childs
}; /* __ROM_value__ind_home_F3 */

/* initialization of the runtime status of indicator F3 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_F3 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F3,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_F3 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_home_F3_Button_bitmap[5] = {
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
}; /* ind_home_F3_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_F3_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_F3_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_home_F3_Button_bitmap,
}; /* __ROM_value__ind_home_F3_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_F3_Button = {
	/* ROM parameters   */ &__ROM_value__ind_home_F3_Button,
	/* x                */ 0,
	/* y                */ 196,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F3_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_F3_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_F3_Text_1,
	/* width            */ 100,
	/* height           */ 28,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_F3_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_F3_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F3_Text_1,
	/* x                */ 12,
	/* y                */ 226,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F3_Text_1 */

/* link the components of group */
static const vt3_group_20B2EF5A_type FAR vt3_screen_ind_home_group_ind_home_F4_childs = {
	&vt3_screen_union.home.F4_Button,
	&vt3_screen_union.home.F4_Text_1,
}; /* vt3_screen_ind_home_group_ind_home_F4_childs */

/* ROM configuration of indicator F4 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_F4 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_F4_childs
}; /* __ROM_value__ind_home_F4 */

/* initialization of the runtime status of indicator F4 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_F4 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F4,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_F4 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_home_F4_Button_bitmap[5] = {
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
}; /* ind_home_F4_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_F4_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_F4_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_home_F4_Button_bitmap,
}; /* __ROM_value__ind_home_F4_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_F4_Button = {
	/* ROM parameters   */ &__ROM_value__ind_home_F4_Button,
	/* x                */ 0,
	/* y                */ 294,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F4_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_F4_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_F4_Text_1,
	/* width            */ 100,
	/* height           */ 28,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_F4_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_F4_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F4_Text_1,
	/* x                */ 12,
	/* y                */ 324,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F4_Text_1 */

/* link the components of group */
static const vt3_group_20B2EF5A_type FAR vt3_screen_ind_home_group_ind_home_F5_childs = {
	&vt3_screen_union.home.F5_Button,
	&vt3_screen_union.home.F5_Text_1,
}; /* vt3_screen_ind_home_group_ind_home_F5_childs */

/* ROM configuration of indicator F5 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_F5 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_F5_childs
}; /* __ROM_value__ind_home_F5 */

/* initialization of the runtime status of indicator F5 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_F5 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F5,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_F5 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_home_F5_Button_bitmap[5] = {
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
}; /* ind_home_F5_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_F5_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_F5_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_home_F5_Button_bitmap,
}; /* __ROM_value__ind_home_F5_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_F5_Button = {
	/* ROM parameters   */ &__ROM_value__ind_home_F5_Button,
	/* x                */ 0,
	/* y                */ 392,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F5_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_F5_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_F5_Text_1,
	/* width            */ 100,
	/* height           */ 28,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_F5_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_F5_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F5_Text_1,
	/* x                */ 12,
	/* y                */ 422,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F5_Text_1 */

/* link the components of group */
static const vt3_group_20B2EF5A_type FAR vt3_screen_ind_home_group_ind_home_F6_childs = {
	&vt3_screen_union.home.F6_Button,
	&vt3_screen_union.home.F6_Text_1,
}; /* vt3_screen_ind_home_group_ind_home_F6_childs */

/* ROM configuration of indicator F6 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_F6 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_F6_childs
}; /* __ROM_value__ind_home_F6 */

/* initialization of the runtime status of indicator F6 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_F6 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F6,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_F6 */

/* status of indicator Button: array bitmap */
static const vt3_image FAR ind_home_F6_Button_bitmap[5] = {
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
}; /* ind_home_F6_Button_bitmap[] */

/* ROM configuration of indicator Button */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_F6_Button = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_F6_Button,
	/* width            */ 122,
	/* height           */ 88,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 5,
	/* bitmap           */ ind_home_F6_Button_bitmap,
}; /* __ROM_value__ind_home_F6_Button */

/* initialization of the runtime status of indicator Button */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_F6_Button = {
	/* ROM parameters   */ &__ROM_value__ind_home_F6_Button,
	/* x                */ 678,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F6_Button */

/* ROM configuration of indicator Text_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_F6_Text_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_F6_Text_1,
	/* width            */ 100,
	/* height           */ 56,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold20,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_F6_Text_1 */

/* initialization of the runtime status of indicator Text_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_F6_Text_1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_F6_Text_1,
	/* x                */ 687,
	/* y                */ 17,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_F6_Text_1 */

/* ROM configuration of indicator simple_rect */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_home_simple_rect = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 541,
	/* height           */ 332,
	/* thick            */ 5,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_rect */

/* initialization of the runtime status of indicator simple_rect */
static const vt3_indicator_SimpleRect FAR __init_value__ind_home_simple_rect = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_rect,
	/* x                */ 130,
	/* y                */ 83,
	/* border           */ { 255, 128, 128, 128 },
	/* old_border       */ { 255, 0, 0, 0 },
	/* fill             */ { 255, 224, 224, 224 },
	/* old_fill         */ { 255, 16, 16, 16 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_rect */

/* link the components of group */
static const vt3_group_DC28E052_type FAR vt3_screen_ind_home_group_ind_home_Temp_1_childs = {
	&vt3_screen_union.home.Temp_1_multibitmap,
	&vt3_screen_union.home.Temp_1_Temp,
	&vt3_screen_union.home.Temp_1_multitext,
	&vt3_screen_union.home.Temp_1_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_Temp_1_childs */

/* ROM configuration of indicator Temp_1 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_Temp_1 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_Temp_1_childs
}; /* __ROM_value__ind_home_Temp_1 */

/* initialization of the runtime status of indicator Temp_1 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_Temp_1 = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_1,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_Temp_1 */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_home_Temp_1_multibitmap_bitmap[3] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_home_Temp_1_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_Temp_1_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_Temp_1_multibitmap,
	/* width            */ 130,
	/* height           */ 163,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 3,
	/* bitmap           */ ind_home_Temp_1_multibitmap_bitmap,
}; /* __ROM_value__ind_home_Temp_1_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_Temp_1_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_1_multibitmap,
	/* x                */ 133,
	/* y                */ 85,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_1_multibitmap */

/* ROM configuration of indicator Temp */
static const char FAR ind_home_Temp_1_Temp__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_home_Temp_1_Temp = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_home_Temp_1_Temp,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_home_Temp_1_Temp__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_home_Temp_1_Temp */

/* initialization of the runtime status of indicator Temp */
static const vt3_indicator_Number FAR __init_value__ind_home_Temp_1_Temp = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_1_Temp,
	/* x                */ 151,
	/* y                */ 157,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 98,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_1_Temp */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_home_Temp_1_multitext_text[2] = {
	F,
	C,
}; /* ind_home_Temp_1_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_home_Temp_1_multitext_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_Temp_1_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_home_Temp_1_multitext_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_home_Temp_1_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_Temp_1_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_Temp_1_multitext,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_Temp_1_multitext_text,
	/* font             */ ind_home_Temp_1_multitext_font,
	/* color            */ ind_home_Temp_1_multitext_color,
}; /* __ROM_value__ind_home_Temp_1_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_home_Temp_1_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_1_multitext,
	/* x                */ 204,
	/* y                */ 157,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_1_multitext */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_Temp_1_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_Temp_1_simple_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_Temp_1_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_Temp_1_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_1_simple_text,
	/* x                */ 191,
	/* y                */ 147,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_1_simple_text */

/* link the components of group */
static const vt3_group_DC28E052_type FAR vt3_screen_ind_home_group_ind_home_Temp_2_childs = {
	&vt3_screen_union.home.Temp_2_multibitmap,
	&vt3_screen_union.home.Temp_2_Temp,
	&vt3_screen_union.home.Temp_2_multitext,
	&vt3_screen_union.home.Temp_2_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_Temp_2_childs */

/* ROM configuration of indicator Temp_2 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_Temp_2 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_Temp_2_childs
}; /* __ROM_value__ind_home_Temp_2 */

/* initialization of the runtime status of indicator Temp_2 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_Temp_2 = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_2,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_Temp_2 */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_home_Temp_2_multibitmap_bitmap[3] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_home_Temp_2_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_Temp_2_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_Temp_2_multibitmap,
	/* width            */ 130,
	/* height           */ 163,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 3,
	/* bitmap           */ ind_home_Temp_2_multibitmap_bitmap,
}; /* __ROM_value__ind_home_Temp_2_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_Temp_2_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_2_multibitmap,
	/* x                */ 133,
	/* y                */ 250,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_2_multibitmap */

/* ROM configuration of indicator Temp */
static const char FAR ind_home_Temp_2_Temp__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_home_Temp_2_Temp = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_home_Temp_2_Temp,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_home_Temp_2_Temp__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_home_Temp_2_Temp */

/* initialization of the runtime status of indicator Temp */
static const vt3_indicator_Number FAR __init_value__ind_home_Temp_2_Temp = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_2_Temp,
	/* x                */ 151,
	/* y                */ 322,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 81,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_2_Temp */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_home_Temp_2_multitext_text[2] = {
	F,
	C,
}; /* ind_home_Temp_2_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_home_Temp_2_multitext_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_Temp_2_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_home_Temp_2_multitext_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_home_Temp_2_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_Temp_2_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_Temp_2_multitext,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_Temp_2_multitext_text,
	/* font             */ ind_home_Temp_2_multitext_font,
	/* color            */ ind_home_Temp_2_multitext_color,
}; /* __ROM_value__ind_home_Temp_2_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_home_Temp_2_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_2_multitext,
	/* x                */ 204,
	/* y                */ 322,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_2_multitext */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_Temp_2_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_Temp_2_simple_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_Temp_2_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_Temp_2_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_2_simple_text,
	/* x                */ 191,
	/* y                */ 312,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_2_simple_text */

/* link the components of group */
static const vt3_group_DC28E052_type FAR vt3_screen_ind_home_group_ind_home_Temp_5_childs = {
	&vt3_screen_union.home.Temp_5_multibitmap,
	&vt3_screen_union.home.Temp_5_Temp,
	&vt3_screen_union.home.Temp_5_multitext,
	&vt3_screen_union.home.Temp_5_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_Temp_5_childs */

/* ROM configuration of indicator Temp_5 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_Temp_5 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_Temp_5_childs
}; /* __ROM_value__ind_home_Temp_5 */

/* initialization of the runtime status of indicator Temp_5 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_Temp_5 = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_5,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_Temp_5 */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_home_Temp_5_multibitmap_bitmap[3] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_home_Temp_5_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_Temp_5_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_Temp_5_multibitmap,
	/* width            */ 130,
	/* height           */ 163,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 3,
	/* bitmap           */ ind_home_Temp_5_multibitmap_bitmap,
}; /* __ROM_value__ind_home_Temp_5_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_Temp_5_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_5_multibitmap,
	/* x                */ 406,
	/* y                */ 84,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_5_multibitmap */

/* ROM configuration of indicator Temp */
static const char FAR ind_home_Temp_5_Temp__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_home_Temp_5_Temp = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_home_Temp_5_Temp,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_home_Temp_5_Temp__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_home_Temp_5_Temp */

/* initialization of the runtime status of indicator Temp */
static const vt3_indicator_Number FAR __init_value__ind_home_Temp_5_Temp = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_5_Temp,
	/* x                */ 421,
	/* y                */ 156,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 81,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_5_Temp */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_home_Temp_5_multitext_text[2] = {
	F,
	C,
}; /* ind_home_Temp_5_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_home_Temp_5_multitext_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_Temp_5_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_home_Temp_5_multitext_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_home_Temp_5_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_Temp_5_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_Temp_5_multitext,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_Temp_5_multitext_text,
	/* font             */ ind_home_Temp_5_multitext_font,
	/* color            */ ind_home_Temp_5_multitext_color,
}; /* __ROM_value__ind_home_Temp_5_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_home_Temp_5_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_5_multitext,
	/* x                */ 476,
	/* y                */ 156,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_5_multitext */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_Temp_5_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_Temp_5_simple_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_Temp_5_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_Temp_5_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_Temp_5_simple_text,
	/* x                */ 463,
	/* y                */ 146,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_Temp_5_simple_text */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_home_multitext_text[2] = {
	IDS_ALARM_SILENCED,
	IDS_SILENCE_ALARM,
}; /* ind_home_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_home_multitext_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_home_multitext_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 255, 255, 255 }, 
}; /* ind_home_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_multitext,
	/* width            */ 400,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_multitext_text,
	/* font             */ ind_home_multitext_font,
	/* color            */ ind_home_multitext_color,
}; /* __ROM_value__ind_home_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_home_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_home_multitext,
	/* x                */ 196,
	/* y                */ 441,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_multitext */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_simple_text,
	/* width            */ 110,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_text,
	/* x                */ 551,
	/* y                */ 238,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_text */

/* ROM configuration of indicator simple_line_3 */
static const vt3_indicator_ROM_SimpleLine FAR __ROM_value__ind_home_simple_line_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleLine,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_line_3 */

/* initialization of the runtime status of indicator simple_line_3 */
static const vt3_indicator_SimpleLine FAR __init_value__ind_home_simple_line_3 = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_line_3,
	/* XA               */ 404,
	/* YA               */ 85,
	/* XB               */ 404,
	/* YB               */ 413,
	/* T                */ 5,
	/* linestyle        */ 0,
	/* color            */ { 255, 128, 128, 128 },
	/* old_color        */ { 255, 0, 0, 0 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_line_3 */

/* ROM configuration of indicator simple_line_7 */
static const vt3_indicator_ROM_SimpleLine FAR __ROM_value__ind_home_simple_line_7 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleLine,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_line_7 */

/* initialization of the runtime status of indicator simple_line_7 */
static const vt3_indicator_SimpleLine FAR __init_value__ind_home_simple_line_7 = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_line_7,
	/* XA               */ 130,
	/* YA               */ 249,
	/* XB               */ 260,
	/* YB               */ 249,
	/* T                */ 5,
	/* linestyle        */ 0,
	/* color            */ { 255, 128, 128, 128 },
	/* old_color        */ { 255, 0, 0, 0 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_line_7 */

/* ROM configuration of indicator simple_line_4 */
static const vt3_indicator_ROM_SimpleLine FAR __ROM_value__ind_home_simple_line_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleLine,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_line_4 */

/* initialization of the runtime status of indicator simple_line_4 */
static const vt3_indicator_SimpleLine FAR __init_value__ind_home_simple_line_4 = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_line_4,
	/* XA               */ 266,
	/* YA               */ 248,
	/* XB               */ 537,
	/* YB               */ 248,
	/* T                */ 5,
	/* linestyle        */ 0,
	/* color            */ { 255, 128, 128, 128 },
	/* old_color        */ { 255, 0, 0, 0 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_line_4 */

/* ROM configuration of indicator simple_line_6 */
static const vt3_indicator_ROM_SimpleLine FAR __ROM_value__ind_home_simple_line_6 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleLine,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_line_6 */

/* initialization of the runtime status of indicator simple_line_6 */
static const vt3_indicator_SimpleLine FAR __init_value__ind_home_simple_line_6 = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_line_6,
	/* XA               */ 538,
	/* YA               */ 84,
	/* XB               */ 538,
	/* YB               */ 414,
	/* T                */ 5,
	/* linestyle        */ 0,
	/* color            */ { 255, 128, 128, 128 },
	/* old_color        */ { 255, 0, 0, 0 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_line_6 */

/* ROM configuration of indicator simple_line_2 */
static const vt3_indicator_ROM_SimpleLine FAR __ROM_value__ind_home_simple_line_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleLine,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_line_2 */

/* initialization of the runtime status of indicator simple_line_2 */
static const vt3_indicator_SimpleLine FAR __init_value__ind_home_simple_line_2 = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_line_2,
	/* XA               */ 262,
	/* YA               */ 85,
	/* XB               */ 262,
	/* YB               */ 413,
	/* T                */ 5,
	/* linestyle        */ 0,
	/* color            */ { 255, 128, 128, 128 },
	/* old_color        */ { 255, 0, 0, 0 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_line_2 */

/* ROM configuration of indicator simple_line8 */
static const vt3_indicator_ROM_SimpleLine FAR __ROM_value__ind_home_simple_line8 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleLine,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_line8 */

/* initialization of the runtime status of indicator simple_line8 */
static const vt3_indicator_SimpleLine FAR __init_value__ind_home_simple_line8 = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_line8,
	/* XA               */ 542,
	/* YA               */ 145,
	/* XB               */ 670,
	/* YB               */ 145,
	/* T                */ 5,
	/* linestyle        */ 0,
	/* color            */ { 255, 128, 128, 128 },
	/* old_color        */ { 255, 0, 0, 0 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_line8 */

/* ROM configuration of indicator simple_line9 */
static const vt3_indicator_ROM_SimpleLine FAR __ROM_value__ind_home_simple_line9 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleLine,
	/* layer            */ 0,
}; /* __ROM_value__ind_home_simple_line9 */

/* initialization of the runtime status of indicator simple_line9 */
static const vt3_indicator_SimpleLine FAR __init_value__ind_home_simple_line9 = {
	/* ROM parameters   */ &__ROM_value__ind_home_simple_line9,
	/* XA               */ 541,
	/* YA               */ 359,
	/* XB               */ 669,
	/* YB               */ 359,
	/* T                */ 5,
	/* linestyle        */ 0,
	/* color            */ { 255, 128, 128, 128 },
	/* old_color        */ { 255, 0, 0, 0 },
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_simple_line9 */

/* link the components of group */
static const vt3_group_B55E47F2_type FAR vt3_screen_ind_home_group_ind_home_group_childs = {
	&vt3_screen_union.home.group_multibitmap,
	&vt3_screen_union.home.group_multitext,
	&vt3_screen_union.home.group_Temp,
	&vt3_screen_union.home.group_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_group_childs */

/* ROM configuration of indicator group */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_group = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_group_childs
}; /* __ROM_value__ind_home_group */

/* initialization of the runtime status of indicator group */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_group = {
	/* ROM parameters   */ &__ROM_value__ind_home_group,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_group */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_home_group_multibitmap_bitmap[3] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_home_group_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_group_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_group_multibitmap,
	/* width            */ 138,
	/* height           */ 163,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 3,
	/* bitmap           */ ind_home_group_multibitmap_bitmap,
}; /* __ROM_value__ind_home_group_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_group_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_multibitmap,
	/* x                */ 264,
	/* y                */ 84,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_multibitmap */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_home_group_multitext_text[2] = {
	F,
	C,
}; /* ind_home_group_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_home_group_multitext_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_group_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_home_group_multitext_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_home_group_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_group_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_group_multitext,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_group_multitext_text,
	/* font             */ ind_home_group_multitext_font,
	/* color            */ ind_home_group_multitext_color,
}; /* __ROM_value__ind_home_group_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_home_group_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_multitext,
	/* x                */ 340,
	/* y                */ 156,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_multitext */

/* ROM configuration of indicator Temp */
static const char FAR ind_home_group_Temp__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_home_group_Temp = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_home_group_Temp,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_home_group_Temp__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_home_group_Temp */

/* initialization of the runtime status of indicator Temp */
static const vt3_indicator_Number FAR __init_value__ind_home_group_Temp = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_Temp,
	/* x                */ 285,
	/* y                */ 156,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 81,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_Temp */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_group_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_group_simple_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_group_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_group_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_simple_text,
	/* x                */ 327,
	/* y                */ 146,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_simple_text */

/* link the components of group */
static const vt3_group_B55E47F2_type FAR vt3_screen_ind_home_group_ind_home_group_2_childs = {
	&vt3_screen_union.home.group_2_multibitmap,
	&vt3_screen_union.home.group_2_multitext,
	&vt3_screen_union.home.group_2_Temp,
	&vt3_screen_union.home.group_2_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_group_2_childs */

/* ROM configuration of indicator group_2 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_group_2 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_group_2_childs
}; /* __ROM_value__ind_home_group_2 */

/* initialization of the runtime status of indicator group_2 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_group_2 = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_2,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_group_2 */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_home_group_2_multibitmap_bitmap[3] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_home_group_2_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_group_2_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_group_2_multibitmap,
	/* width            */ 138,
	/* height           */ 163,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 3,
	/* bitmap           */ ind_home_group_2_multibitmap_bitmap,
}; /* __ROM_value__ind_home_group_2_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_group_2_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_2_multibitmap,
	/* x                */ 265,
	/* y                */ 251,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_2_multibitmap */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_home_group_2_multitext_text[2] = {
	F,
	C,
}; /* ind_home_group_2_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_home_group_2_multitext_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_group_2_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_home_group_2_multitext_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_home_group_2_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_group_2_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_group_2_multitext,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_group_2_multitext_text,
	/* font             */ ind_home_group_2_multitext_font,
	/* color            */ ind_home_group_2_multitext_color,
}; /* __ROM_value__ind_home_group_2_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_home_group_2_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_2_multitext,
	/* x                */ 340,
	/* y                */ 320,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_2_multitext */

/* ROM configuration of indicator Temp */
static const char FAR ind_home_group_2_Temp__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_home_group_2_Temp = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_home_group_2_Temp,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_home_group_2_Temp__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_home_group_2_Temp */

/* initialization of the runtime status of indicator Temp */
static const vt3_indicator_Number FAR __init_value__ind_home_group_2_Temp = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_2_Temp,
	/* x                */ 285,
	/* y                */ 320,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 81,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_2_Temp */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_group_2_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_group_2_simple_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_group_2_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_group_2_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_2_simple_text,
	/* x                */ 327,
	/* y                */ 310,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_2_simple_text */

/* link the components of group */
static const vt3_group_E666674C_type FAR vt3_screen_ind_home_group_ind_home_group_4_childs = {
	&vt3_screen_union.home.group_4_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_group_4_childs */

/* ROM configuration of indicator group_4 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_group_4 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_group_4_childs
}; /* __ROM_value__ind_home_group_4 */

/* initialization of the runtime status of indicator group_4 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_group_4 = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_4,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_group_4 */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_group_4_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_group_4_simple_text,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_group_4_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_group_4_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_4_simple_text,
	/* x                */ 580,
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
}; /* __init_value__ind_home_group_4_simple_text */

/* link the components of group */
static const vt3_group_E666674C_type FAR vt3_screen_ind_home_group_ind_home_group_5_childs = {
	&vt3_screen_union.home.group_5_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_group_5_childs */

/* ROM configuration of indicator group_5 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_group_5 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_group_5_childs
}; /* __ROM_value__ind_home_group_5 */

/* initialization of the runtime status of indicator group_5 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_group_5 = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_5,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_group_5 */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_group_5_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_group_5_simple_text,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_group_5_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_group_5_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_5_simple_text,
	/* x                */ 580,
	/* y                */ 375,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_5_simple_text */

/* link the components of group */
static const vt3_group_B55E47F2_type FAR vt3_screen_ind_home_group_ind_home_group_3_childs = {
	&vt3_screen_union.home.group_3_multibitmap,
	&vt3_screen_union.home.group_3_multitext,
	&vt3_screen_union.home.group_3_Temp,
	&vt3_screen_union.home.group_3_simple_text,
}; /* vt3_screen_ind_home_group_ind_home_group_3_childs */

/* ROM configuration of indicator group_3 */
static const vt3_indicator_ROM_IndicatorGroup FAR __ROM_value__ind_home_group_3 = {
	/* virtual method table */ &vt3_indicator_VMT_IndicatorGroup,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_IndicatorGroup FARPTR)) NULL,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* childs           */ &vt3_screen_ind_home_group_ind_home_group_3_childs
}; /* __ROM_value__ind_home_group_3 */

/* initialization of the runtime status of indicator group_3 */
static const vt3_indicator_IndicatorGroup FAR __init_value__ind_home_group_3 = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_3,
	/* timeout          */ 0,
	/* invalid          */ 0,
}; /* __init_value__ind_home_group_3 */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_home_group_3_multibitmap_bitmap[3] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 0, 255, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 0, 0 }, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_home_group_3_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_home_group_3_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_home_group_3_multibitmap,
	/* width            */ 130,
	/* height           */ 163,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 3,
	/* bitmap           */ ind_home_group_3_multibitmap_bitmap,
}; /* __ROM_value__ind_home_group_3_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_home_group_3_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_3_multibitmap,
	/* x                */ 406,
	/* y                */ 251,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_3_multibitmap */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_home_group_3_multitext_text[2] = {
	F,
	C,
}; /* ind_home_group_3_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_home_group_3_multitext_font[2] = {
	vt3_font_ArialBold22, 
	vt3_font_ArialBold22, 
}; /* ind_home_group_3_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_home_group_3_multitext_color[2] = {
	{ 255, 0, 0, 0 }, 
	{ 255, 0, 0, 0 }, 
}; /* ind_home_group_3_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_home_group_3_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_home_group_3_multitext,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_home_group_3_multitext_text,
	/* font             */ ind_home_group_3_multitext_font,
	/* color            */ ind_home_group_3_multitext_color,
}; /* __ROM_value__ind_home_group_3_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_home_group_3_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_3_multitext,
	/* x                */ 477,
	/* y                */ 323,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_3_multitext */

/* ROM configuration of indicator Temp */
static const char FAR ind_home_group_3_Temp__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_home_group_3_Temp = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_home_group_3_Temp,
	/* width            */ 50,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold22,
	/* separator        */ ind_home_group_3_Temp__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_home_group_3_Temp */

/* initialization of the runtime status of indicator Temp */
static const vt3_indicator_Number FAR __init_value__ind_home_group_3_Temp = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_3_Temp,
	/* x                */ 421,
	/* y                */ 323,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 81,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_3_Temp */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_home_group_3_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_home_group_3_simple_text,
	/* width            */ 20,
	/* height           */ 25,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_home_group_3_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_home_group_3_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_home_group_3_simple_text,
	/* x                */ 464,
	/* y                */ 312,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_home_group_3_simple_text */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_home[] = {
	{ &vt3_screen_union.home._background, &__init_value__ind_home, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.home.Logo, &__init_value__ind_home_Logo, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.Logo_simple_rect, &__init_value__ind_home_Logo_simple_rect, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.home.Logo_multibitmap, &__init_value__ind_home_Logo_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.F1, &__init_value__ind_home_F1, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.F1_Button, &__init_value__ind_home_F1_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.F1_Text_1, &__init_value__ind_home_F1_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.F2, &__init_value__ind_home_F2, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.F2_Button, &__init_value__ind_home_F2_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.F2_Text_1, &__init_value__ind_home_F2_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.F2_Auto_Man, &__init_value__ind_home_F2_Auto_Man, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.F3, &__init_value__ind_home_F3, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.F3_Button, &__init_value__ind_home_F3_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.F3_Text_1, &__init_value__ind_home_F3_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.F4, &__init_value__ind_home_F4, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.F4_Button, &__init_value__ind_home_F4_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.F4_Text_1, &__init_value__ind_home_F4_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.F5, &__init_value__ind_home_F5, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.F5_Button, &__init_value__ind_home_F5_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.F5_Text_1, &__init_value__ind_home_F5_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.F6, &__init_value__ind_home_F6, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.F6_Button, &__init_value__ind_home_F6_Button, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.F6_Text_1, &__init_value__ind_home_F6_Text_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.simple_rect, &__init_value__ind_home_simple_rect, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.home.Temp_1, &__init_value__ind_home_Temp_1, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.Temp_1_multibitmap, &__init_value__ind_home_Temp_1_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.Temp_1_Temp, &__init_value__ind_home_Temp_1_Temp, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.home.Temp_1_multitext, &__init_value__ind_home_Temp_1_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.Temp_1_simple_text, &__init_value__ind_home_Temp_1_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.Temp_2, &__init_value__ind_home_Temp_2, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.Temp_2_multibitmap, &__init_value__ind_home_Temp_2_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.Temp_2_Temp, &__init_value__ind_home_Temp_2_Temp, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.home.Temp_2_multitext, &__init_value__ind_home_Temp_2_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.Temp_2_simple_text, &__init_value__ind_home_Temp_2_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.Temp_5, &__init_value__ind_home_Temp_5, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.Temp_5_multibitmap, &__init_value__ind_home_Temp_5_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.Temp_5_Temp, &__init_value__ind_home_Temp_5_Temp, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.home.Temp_5_multitext, &__init_value__ind_home_Temp_5_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.Temp_5_simple_text, &__init_value__ind_home_Temp_5_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.multitext, &__init_value__ind_home_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.simple_text, &__init_value__ind_home_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.simple_line_3, &__init_value__ind_home_simple_line_3, sizeof(vt3_indicator_SimpleLine) },
	{ &vt3_screen_union.home.simple_line_7, &__init_value__ind_home_simple_line_7, sizeof(vt3_indicator_SimpleLine) },
	{ &vt3_screen_union.home.simple_line_4, &__init_value__ind_home_simple_line_4, sizeof(vt3_indicator_SimpleLine) },
	{ &vt3_screen_union.home.simple_line_6, &__init_value__ind_home_simple_line_6, sizeof(vt3_indicator_SimpleLine) },
	{ &vt3_screen_union.home.simple_line_2, &__init_value__ind_home_simple_line_2, sizeof(vt3_indicator_SimpleLine) },
	{ &vt3_screen_union.home.simple_line8, &__init_value__ind_home_simple_line8, sizeof(vt3_indicator_SimpleLine) },
	{ &vt3_screen_union.home.simple_line9, &__init_value__ind_home_simple_line9, sizeof(vt3_indicator_SimpleLine) },
	{ &vt3_screen_union.home.group, &__init_value__ind_home_group, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.group_multibitmap, &__init_value__ind_home_group_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.group_multitext, &__init_value__ind_home_group_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.group_Temp, &__init_value__ind_home_group_Temp, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.home.group_simple_text, &__init_value__ind_home_group_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.group_2, &__init_value__ind_home_group_2, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.group_2_multibitmap, &__init_value__ind_home_group_2_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.group_2_multitext, &__init_value__ind_home_group_2_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.group_2_Temp, &__init_value__ind_home_group_2_Temp, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.home.group_2_simple_text, &__init_value__ind_home_group_2_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.group_4, &__init_value__ind_home_group_4, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.group_4_simple_text, &__init_value__ind_home_group_4_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.group_5, &__init_value__ind_home_group_5, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.group_5_simple_text, &__init_value__ind_home_group_5_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.home.group_3, &__init_value__ind_home_group_3, sizeof(vt3_indicator_IndicatorGroup) },
	{ &vt3_screen_union.home.group_3_multibitmap, &__init_value__ind_home_group_3_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.home.group_3_multitext, &__init_value__ind_home_group_3_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.home.group_3_Temp, &__init_value__ind_home_group_3_Temp, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.home.group_3_simple_text, &__init_value__ind_home_group_3_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_home(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_home; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_home(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_home(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.home._background);

	/* indicator "Logo" of type "IndicatorGroup" */

	/* indicator "simple_rect" of type "SimpleRect" */

	/* draw the indicator: simple_rect */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.home.Logo_simple_rect);


	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.Logo_multibitmap);


	/* end of group "Logo" */


	/* indicator "F1" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.F1_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.F1_Text_1);


	/* end of group "F1" */


	/* indicator "F2" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.F2_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.F2_Text_1);


	/* indicator "Auto_Man" of type "MultiText" */

	/* draw the indicator: Auto_Man */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.F2_Auto_Man);


	/* end of group "F2" */


	/* indicator "F3" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.F3_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.F3_Text_1);


	/* end of group "F3" */


	/* indicator "F4" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.F4_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.F4_Text_1);


	/* end of group "F4" */


	/* indicator "F5" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.F5_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.F5_Text_1);


	/* end of group "F5" */


	/* indicator "F6" of type "IndicatorGroup" */

	/* indicator "Button" of type "MultiBitmap" */

	/* draw the indicator: Button */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.F6_Button);


	/* indicator "Text_1" of type "SimpleText" */

	/* draw the indicator: Text_1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.F6_Text_1);


	/* end of group "F6" */


	/* indicator "simple_rect" of type "SimpleRect" */

	/* draw the indicator: simple_rect */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.home.simple_rect);


	/* indicator "Temp_1" of type "IndicatorGroup" */

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.Temp_1_multibitmap);


	/* indicator "Temp" of type "Number" */

	/* draw the indicator: Temp */
	vt3_draw_indicator_Number(event, &vt3_screen_union.home.Temp_1_Temp);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.Temp_1_multitext);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.Temp_1_simple_text);


	/* end of group "Temp_1" */


	/* indicator "Temp_2" of type "IndicatorGroup" */

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.Temp_2_multibitmap);


	/* indicator "Temp" of type "Number" */

	/* draw the indicator: Temp */
	vt3_draw_indicator_Number(event, &vt3_screen_union.home.Temp_2_Temp);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.Temp_2_multitext);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.Temp_2_simple_text);


	/* end of group "Temp_2" */


	/* indicator "Temp_5" of type "IndicatorGroup" */

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.Temp_5_multibitmap);


	/* indicator "Temp" of type "Number" */

	/* draw the indicator: Temp */
	vt3_draw_indicator_Number(event, &vt3_screen_union.home.Temp_5_Temp);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.Temp_5_multitext);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.Temp_5_simple_text);


	/* end of group "Temp_5" */


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.multitext);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.simple_text);


	/* indicator "simple_line_3" of type "SimpleLine" */

	/* draw the indicator: simple_line_3 */
	vt3_draw_indicator_SimpleLine(event, &vt3_screen_union.home.simple_line_3);


	/* indicator "simple_line_7" of type "SimpleLine" */

	/* draw the indicator: simple_line_7 */
	vt3_draw_indicator_SimpleLine(event, &vt3_screen_union.home.simple_line_7);


	/* indicator "simple_line_4" of type "SimpleLine" */

	/* draw the indicator: simple_line_4 */
	vt3_draw_indicator_SimpleLine(event, &vt3_screen_union.home.simple_line_4);


	/* indicator "simple_line_6" of type "SimpleLine" */

	/* draw the indicator: simple_line_6 */
	vt3_draw_indicator_SimpleLine(event, &vt3_screen_union.home.simple_line_6);


	/* indicator "simple_line_2" of type "SimpleLine" */

	/* draw the indicator: simple_line_2 */
	vt3_draw_indicator_SimpleLine(event, &vt3_screen_union.home.simple_line_2);


	/* indicator "simple_line8" of type "SimpleLine" */

	/* draw the indicator: simple_line8 */
	vt3_draw_indicator_SimpleLine(event, &vt3_screen_union.home.simple_line8);


	/* indicator "simple_line9" of type "SimpleLine" */

	/* draw the indicator: simple_line9 */
	vt3_draw_indicator_SimpleLine(event, &vt3_screen_union.home.simple_line9);


	/* indicator "group" of type "IndicatorGroup" */

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.group_multibitmap);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.group_multitext);


	/* indicator "Temp" of type "Number" */

	/* draw the indicator: Temp */
	vt3_draw_indicator_Number(event, &vt3_screen_union.home.group_Temp);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.group_simple_text);


	/* end of group "group" */


	/* indicator "group_2" of type "IndicatorGroup" */

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.group_2_multibitmap);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.group_2_multitext);


	/* indicator "Temp" of type "Number" */

	/* draw the indicator: Temp */
	vt3_draw_indicator_Number(event, &vt3_screen_union.home.group_2_Temp);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.group_2_simple_text);


	/* end of group "group_2" */


	/* indicator "group_4" of type "IndicatorGroup" */

	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.group_4_simple_text);


	/* end of group "group_4" */


	/* indicator "group_5" of type "IndicatorGroup" */

	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.group_5_simple_text);


	/* end of group "group_5" */


	/* indicator "group_3" of type "IndicatorGroup" */

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.home.group_3_multibitmap);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.home.group_3_multitext);


	/* indicator "Temp" of type "Number" */

	/* draw the indicator: Temp */
	vt3_draw_indicator_Number(event, &vt3_screen_union.home.group_3_Temp);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.home.group_3_simple_text);


	/* end of group "group_3" */


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_home() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_home[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_home[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_home[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_home[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_home[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_home[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_home[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_home[] */


#endif /* INCLUDE__VT3_DISP__HOME_C */

/* end of file */
