/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__HOME_H
#define INCLUDE__VT3_DISP__HOME_H

#include "vt3_base.h"


/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_home_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_IndicatorGroup                 Logo;
	vt3_indicator_SimpleRect                     Logo_simple_rect;
	vt3_indicator_MultiBitmap                    Logo_multibitmap;
	vt3_indicator_IndicatorGroup                 F1;
	vt3_indicator_MultiBitmap                    F1_Button;
	vt3_indicator_SimpleText                     F1_Text_1;
	vt3_indicator_IndicatorGroup                 F2;
	vt3_indicator_MultiBitmap                    F2_Button;
	vt3_indicator_SimpleText                     F2_Text_1;
	vt3_indicator_MultiText                      F2_Auto_Man;
	vt3_indicator_IndicatorGroup                 F3;
	vt3_indicator_MultiBitmap                    F3_Button;
	vt3_indicator_SimpleText                     F3_Text_1;
	vt3_indicator_IndicatorGroup                 F4;
	vt3_indicator_MultiBitmap                    F4_Button;
	vt3_indicator_SimpleText                     F4_Text_1;
	vt3_indicator_IndicatorGroup                 F5;
	vt3_indicator_MultiBitmap                    F5_Button;
	vt3_indicator_SimpleText                     F5_Text_1;
	vt3_indicator_IndicatorGroup                 F6;
	vt3_indicator_MultiBitmap                    F6_Button;
	vt3_indicator_SimpleText                     F6_Text_1;
	vt3_indicator_IndicatorGroup                 F9;
	vt3_indicator_MultiBitmap                    F9_Button;
	vt3_indicator_SimpleText                     F9_Text_1;
	vt3_indicator_IndicatorGroup                 F10;
	vt3_indicator_MultiBitmap                    F10_Button;
	vt3_indicator_SimpleText                     F10_Text_1;
	vt3_indicator_IndicatorGroup                 Kennel_Layout;
	vt3_indicator_SimpleRect                     Kennel_Layout_simple_rect;
	vt3_indicator_IndicatorGroup                 Kennel_Layout_Temp_1;
	vt3_indicator_MultiBitmap                    Kennel_Layout_Temp_1_multibitmap;
	vt3_indicator_Number                         Kennel_Layout_Temp_1_Temp;
	vt3_indicator_MultiText                      Kennel_Layout_Temp_1_multitext;
	vt3_indicator_SimpleText                     Kennel_Layout_Temp_1_simple_text;
	vt3_indicator_IndicatorGroup                 Kennel_Layout_Temp_2;
	vt3_indicator_MultiBitmap                    Kennel_Layout_Temp_2_multibitmap;
	vt3_indicator_Number                         Kennel_Layout_Temp_2_Temp;
	vt3_indicator_MultiText                      Kennel_Layout_Temp_2_multitext;
	vt3_indicator_SimpleText                     Kennel_Layout_Temp_2_simple_text;
	vt3_indicator_IndicatorGroup                 Kennel_Layout_Temp_3;
	vt3_indicator_MultiBitmap                    Kennel_Layout_Temp_3_multibitmap;
	vt3_indicator_Number                         Kennel_Layout_Temp_3_Temp;
	vt3_indicator_MultiText                      Kennel_Layout_Temp_3_multitext;
	vt3_indicator_SimpleText                     Kennel_Layout_Temp_3_simple_text;
	vt3_indicator_IndicatorGroup                 Kennel_Layout_Temp_4;
	vt3_indicator_MultiBitmap                    Kennel_Layout_Temp_4_multibitmap;
	vt3_indicator_Number                         Kennel_Layout_Temp_4_Temp;
	vt3_indicator_MultiText                      Kennel_Layout_Temp_4_multitext;
	vt3_indicator_SimpleText                     Kennel_Layout_Temp_4_simple_text;
	vt3_indicator_IndicatorGroup                 Kennel_Layout_Temp_5;
	vt3_indicator_MultiBitmap                    Kennel_Layout_Temp_5_multibitmap;
	vt3_indicator_Number                         Kennel_Layout_Temp_5_Temp;
	vt3_indicator_MultiText                      Kennel_Layout_Temp_5_multitext;
	vt3_indicator_SimpleText                     Kennel_Layout_Temp_5_simple_text;
	vt3_indicator_IndicatorGroup                 Kennel_Layout_Temp_6;
	vt3_indicator_MultiBitmap                    Kennel_Layout_Temp_6_multibitmap;
	vt3_indicator_Number                         Kennel_Layout_Temp_6_Temp;
	vt3_indicator_MultiText                      Kennel_Layout_Temp_6_multitext;
	vt3_indicator_SimpleText                     Kennel_Layout_Temp_6_simple_text;
	vt3_indicator_MultiText                      multitext;
	vt3_indicator_SimpleText                     simple_text;
	vt3_indicator_SimpleLine                     simple_line_3;
	vt3_indicator_SimpleLine                     simple_line_7;
	vt3_indicator_SimpleLine                     simple_line_4;
	vt3_indicator_SimpleLine                     simple_line_6;
	vt3_indicator_SimpleLine                     simple_line_2;
} vt3_screen_struct_home_t;

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Logo */
#ifndef VT3_GROUP_BBEC0481_TYPE
#define VT3_GROUP_BBEC0481_TYPE
typedef struct {
	vt3_indicator_SimpleRect                 FARPTR simple_rect;
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
} vt3_group_BBEC0481_type;
#endif /* VT3_GROUP_BBEC0481_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F1 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F2 */
#ifndef VT3_GROUP_7DDFD348_TYPE
#define VT3_GROUP_7DDFD348_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
	vt3_indicator_MultiText                  FARPTR Auto_Man;
} vt3_group_7DDFD348_type;
#endif /* VT3_GROUP_7DDFD348_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F3 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F4 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F5 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F6 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F9 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/F10 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Kennel_Layout */
#ifndef VT3_GROUP_6CB4663B_TYPE
#define VT3_GROUP_6CB4663B_TYPE
typedef struct {
	vt3_indicator_SimpleRect                 FARPTR simple_rect;
	vt3_indicator_IndicatorGroup             FARPTR Temp_1;
	vt3_indicator_IndicatorGroup             FARPTR Temp_2;
	vt3_indicator_IndicatorGroup             FARPTR Temp_3;
	vt3_indicator_IndicatorGroup             FARPTR Temp_4;
	vt3_indicator_IndicatorGroup             FARPTR Temp_5;
	vt3_indicator_IndicatorGroup             FARPTR Temp_6;
} vt3_group_6CB4663B_type;
#endif /* VT3_GROUP_6CB4663B_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Kennel_Layout/Temp_1 */
#ifndef VT3_GROUP_DC28E052_TYPE
#define VT3_GROUP_DC28E052_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
	vt3_indicator_Number                     FARPTR Temp;
	vt3_indicator_MultiText                  FARPTR multitext;
	vt3_indicator_SimpleText                 FARPTR simple_text;
} vt3_group_DC28E052_type;
#endif /* VT3_GROUP_DC28E052_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Kennel_Layout/Temp_2 */
#ifndef VT3_GROUP_DC28E052_TYPE
#define VT3_GROUP_DC28E052_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
	vt3_indicator_Number                     FARPTR Temp;
	vt3_indicator_MultiText                  FARPTR multitext;
	vt3_indicator_SimpleText                 FARPTR simple_text;
} vt3_group_DC28E052_type;
#endif /* VT3_GROUP_DC28E052_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Kennel_Layout/Temp_3 */
#ifndef VT3_GROUP_DC28E052_TYPE
#define VT3_GROUP_DC28E052_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
	vt3_indicator_Number                     FARPTR Temp;
	vt3_indicator_MultiText                  FARPTR multitext;
	vt3_indicator_SimpleText                 FARPTR simple_text;
} vt3_group_DC28E052_type;
#endif /* VT3_GROUP_DC28E052_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Kennel_Layout/Temp_4 */
#ifndef VT3_GROUP_DC28E052_TYPE
#define VT3_GROUP_DC28E052_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
	vt3_indicator_Number                     FARPTR Temp;
	vt3_indicator_MultiText                  FARPTR multitext;
	vt3_indicator_SimpleText                 FARPTR simple_text;
} vt3_group_DC28E052_type;
#endif /* VT3_GROUP_DC28E052_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Kennel_Layout/Temp_5 */
#ifndef VT3_GROUP_DC28E052_TYPE
#define VT3_GROUP_DC28E052_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
	vt3_indicator_Number                     FARPTR Temp;
	vt3_indicator_MultiText                  FARPTR multitext;
	vt3_indicator_SimpleText                 FARPTR simple_text;
} vt3_group_DC28E052_type;
#endif /* VT3_GROUP_DC28E052_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Sreens/home/Kennel_Layout/Temp_6 */
#ifndef VT3_GROUP_DC28E052_TYPE
#define VT3_GROUP_DC28E052_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
	vt3_indicator_Number                     FARPTR Temp;
	vt3_indicator_MultiText                  FARPTR multitext;
	vt3_indicator_SimpleText                 FARPTR simple_text;
} vt3_group_DC28E052_type;
#endif /* VT3_GROUP_DC28E052_TYPE */


/* the screen initialization function */
void vt3_init_ind_home(void);

/* the screen drawing function */
void vt3_draw_ind_home(BYTE event);

/* timer event handler for screen: /project/Tera_7/Sreens/home */
void vt3_event_ind_home(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__HOME_H */

/* end of file */
