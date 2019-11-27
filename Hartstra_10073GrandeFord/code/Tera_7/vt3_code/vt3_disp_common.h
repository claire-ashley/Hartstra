/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP_COMMON_H
#define INCLUDE__VT3_DISP_COMMON_H

#include "vt3_base.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"
#include "vt3_Disp__Splash.h"
#include "vt3_Event__Splash.h"
#include "vt3_Disp__Home.h"
#include "vt3_Event__Home.h"
#include "vt3_Disp__Setup.h"
#include "vt3_Event__Setup.h"
#include "vt3_Disp__Camera.h"
#include "vt3_Event__Camera.h"
#include "vt3_Disp__Camera2.h"
#include "vt3_Event__Camera2.h"


/* the screen numbers */
#define SCREEN_SPLASH               (0)
#define SCREEN_HOME                 (1)
#define SCREEN_SETUP                (2)
#define SCREEN_CAMERA               (3)
#define SCREEN_CAMERA_2             (4)

/* all screens share the same memory */
typedef union vt3_screen_union_t
{
	vt3_screen_struct_splash_t splash;
	vt3_screen_struct_home_t home;
	vt3_screen_struct_setup_t setup;
	vt3_screen_struct_camera_t camera;
	vt3_screen_struct_camera_2_t camera_2;
} vt3_screen_union_t;

/* extern variables */
extern vt3_screen_union_t FAR vt3_screen_union;

/* global display initialization function */
void vt3_disp_init(void);

/* global display drawing function */
void vt3_disp_draw(void);

/* trend indicator sampling functions */
void vt3_trend_sampling_init(void);
void vt3_trend_sampling(void);


#endif /* INCLUDE__VT3_DISP_COMMON_H */

/* end of file */
