/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SETUP_H
#define INCLUDE__VT3_DISP__SETUP_H

#include "vt3_base.h"


/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_setup_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_IndicatorGroup                 Logo;
	vt3_indicator_SimpleRect                     Logo_simple_rect;
	vt3_indicator_MultiBitmap                    Logo_multibitmap;
	vt3_indicator_IndicatorGroup                 AC;
	vt3_indicator_MultiBitmap                    AC_BG_1;
	vt3_indicator_MultiBitmap                    AC_BG_1_1;
	vt3_indicator_MultiBitmap                    AC_BG_2;
	vt3_indicator_MultiBitmap                    AC_BG_2_2;
	vt3_indicator_SimpleText                     AC_ac_setpoint_text;
	vt3_indicator_NumberEditable                 AC_ac_setpoint_number;
	vt3_indicator_MultiText                      AC_ac_sp_unit_text;
	vt3_indicator_SimpleText                     AC_ac_sp_degree_text;
	vt3_indicator_SimpleText                     AC_ac_deadband_text;
	vt3_indicator_NumberEditable                 AC_ac_deadband_number;
	vt3_indicator_MultiText                      AC_ac_db_unit_text;
	vt3_indicator_SimpleText                     AC_ac_db_degree_text;
	vt3_indicator_IndicatorGroup                 Heat;
	vt3_indicator_MultiBitmap                    Heat_BG_3;
	vt3_indicator_MultiBitmap                    Heat_BG_3_1;
	vt3_indicator_MultiBitmap                    Heat_BG_4;
	vt3_indicator_MultiBitmap                    Heat_BG_4_1;
	vt3_indicator_SimpleText                     Heat_heat_setpoint_text;
	vt3_indicator_NumberEditable                 Heat_heat_setpoint_number;
	vt3_indicator_MultiText                      Heat_heat_sp_unit_text;
	vt3_indicator_SimpleText                     Heat_heat_sp_degree_text;
	vt3_indicator_SimpleText                     Heat_heat_deadband_text;
	vt3_indicator_NumberEditable                 Heat_heat_deadband_number;
	vt3_indicator_MultiText                      Heat_heat_db_unit_text;
	vt3_indicator_SimpleText                     Heat_heat_db_degree_text;
	vt3_indicator_IndicatorGroup                 HVAC_Alarms;
	vt3_indicator_MultiBitmap                    HVAC_Alarms_BG_5;
	vt3_indicator_MultiBitmap                    HVAC_Alarms_BG_5_1;
	vt3_indicator_MultiBitmap                    HVAC_Alarms_BG_6;
	vt3_indicator_MultiBitmap                    HVAC_Alarms_BG_6_1;
	vt3_indicator_SimpleText                     HVAC_Alarms_lower_alarm_setpoint_text;
	vt3_indicator_NumberEditable                 HVAC_Alarms_lower_alarm_setpoint_number;
	vt3_indicator_MultiText                      HVAC_Alarms_lower_alarm_sp_unit_text;
	vt3_indicator_SimpleText                     HVAC_Alarms_lower_alarm_sp_degree_text;
	vt3_indicator_SimpleText                     HVAC_Alarms_upper_alarm_setpoint_text;
	vt3_indicator_NumberEditable                 HVAC_Alarms_upper_alarm_setpoint_number;
	vt3_indicator_MultiText                      HVAC_Alarms_upper_alarm_setpoint_unit_text;
	vt3_indicator_SimpleText                     HVAC_Alarms_upper_alarm_setpoint_degree_text;
	vt3_indicator_IndicatorGroup                 F10;
	vt3_indicator_MultiBitmap                    F10_Button;
	vt3_indicator_SimpleText                     F10_Text_1;
	vt3_indicator_SimpleText                     simple_text;
} vt3_screen_struct_setup_t;

/* this structure is used to link the components of the group /project/Tera_7/Screens/setup/Logo */
#ifndef VT3_GROUP_BBEC0481_TYPE
#define VT3_GROUP_BBEC0481_TYPE
typedef struct {
	vt3_indicator_SimpleRect                 FARPTR simple_rect;
	vt3_indicator_MultiBitmap                FARPTR multibitmap;
} vt3_group_BBEC0481_type;
#endif /* VT3_GROUP_BBEC0481_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Screens/setup/AC */
#ifndef VT3_GROUP_E051795A_TYPE
#define VT3_GROUP_E051795A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR BG_1;
	vt3_indicator_MultiBitmap                FARPTR BG_1_1;
	vt3_indicator_MultiBitmap                FARPTR BG_2;
	vt3_indicator_MultiBitmap                FARPTR BG_2_2;
	vt3_indicator_SimpleText                 FARPTR ac_setpoint_text;
	vt3_indicator_NumberEditable             FARPTR ac_setpoint_number;
	vt3_indicator_MultiText                  FARPTR ac_sp_unit_text;
	vt3_indicator_SimpleText                 FARPTR ac_sp_degree_text;
	vt3_indicator_SimpleText                 FARPTR ac_deadband_text;
	vt3_indicator_NumberEditable             FARPTR ac_deadband_number;
	vt3_indicator_MultiText                  FARPTR ac_db_unit_text;
	vt3_indicator_SimpleText                 FARPTR ac_db_degree_text;
} vt3_group_E051795A_type;
#endif /* VT3_GROUP_E051795A_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Screens/setup/Heat */
#ifndef VT3_GROUP_E5974F0F_TYPE
#define VT3_GROUP_E5974F0F_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR BG_3;
	vt3_indicator_MultiBitmap                FARPTR BG_3_1;
	vt3_indicator_MultiBitmap                FARPTR BG_4;
	vt3_indicator_MultiBitmap                FARPTR BG_4_1;
	vt3_indicator_SimpleText                 FARPTR heat_setpoint_text;
	vt3_indicator_NumberEditable             FARPTR heat_setpoint_number;
	vt3_indicator_MultiText                  FARPTR heat_sp_unit_text;
	vt3_indicator_SimpleText                 FARPTR heat_sp_degree_text;
	vt3_indicator_SimpleText                 FARPTR heat_deadband_text;
	vt3_indicator_NumberEditable             FARPTR heat_deadband_number;
	vt3_indicator_MultiText                  FARPTR heat_db_unit_text;
	vt3_indicator_SimpleText                 FARPTR heat_db_degree_text;
} vt3_group_E5974F0F_type;
#endif /* VT3_GROUP_E5974F0F_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Screens/setup/HVAC_Alarms */
#ifndef VT3_GROUP_DAC0DEF3_TYPE
#define VT3_GROUP_DAC0DEF3_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR BG_5;
	vt3_indicator_MultiBitmap                FARPTR BG_5_1;
	vt3_indicator_MultiBitmap                FARPTR BG_6;
	vt3_indicator_MultiBitmap                FARPTR BG_6_1;
	vt3_indicator_SimpleText                 FARPTR lower_alarm_setpoint_text;
	vt3_indicator_NumberEditable             FARPTR lower_alarm_setpoint_number;
	vt3_indicator_MultiText                  FARPTR lower_alarm_sp_unit_text;
	vt3_indicator_SimpleText                 FARPTR lower_alarm_sp_degree_text;
	vt3_indicator_SimpleText                 FARPTR upper_alarm_setpoint_text;
	vt3_indicator_NumberEditable             FARPTR upper_alarm_setpoint_number;
	vt3_indicator_MultiText                  FARPTR upper_alarm_setpoint_unit_text;
	vt3_indicator_SimpleText                 FARPTR upper_alarm_setpoint_degree_text;
} vt3_group_DAC0DEF3_type;
#endif /* VT3_GROUP_DAC0DEF3_TYPE */

/* this structure is used to link the components of the group /project/Tera_7/Screens/setup/F10 */
#ifndef VT3_GROUP_20B2EF5A_TYPE
#define VT3_GROUP_20B2EF5A_TYPE
typedef struct {
	vt3_indicator_MultiBitmap                FARPTR Button;
	vt3_indicator_SimpleText                 FARPTR Text_1;
} vt3_group_20B2EF5A_type;
#endif /* VT3_GROUP_20B2EF5A_TYPE */


/* the screen initialization function */
void vt3_init_ind_setup(void);

/* the screen drawing function */
void vt3_draw_ind_setup(BYTE event);

/* timer event handler for screen: /project/Tera_7/Screens/setup */
void vt3_event_ind_setup(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__SETUP_H */

/* end of file */
