/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_FONTS_C
#define INCLUDE__VT3_FONTS_C


#include "vt3_runtime.h"

/* font Arial Bold 18 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold18 = {
	/* font size  */    18,
	/* file name  */    "arialbd.ttf", 
	/* face index */    0, 
	/* font height */   21,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold18 */

/* font Arial Bold 19 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold19 = {
	/* font size  */    19,
	/* file name  */    "arialbd.ttf", 
	/* face index */    0, 
	/* font height */   22,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold19 */

/* font Arial Bold 20 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold20 = {
	/* font size  */    20,
	/* file name  */    "arialbd.ttf", 
	/* face index */    0, 
	/* font height */   23,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold20 */

/* font Arial Bold 22 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold22 = {
	/* font size  */    22,
	/* file name  */    "arialbd.ttf", 
	/* face index */    0, 
	/* font height */   25,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold22 */

/* load all fonts: called at the beginning */
void vt3_load_all_fonts(void)
{
	vt3_LoadFont(&vt3_font_descriptor_ArialBold18);
	vt3_LoadFont(&vt3_font_descriptor_ArialBold19);
	vt3_LoadFont(&vt3_font_descriptor_ArialBold20);
	vt3_LoadFont(&vt3_font_descriptor_ArialBold22);
} /* vt3_load_all_fonts */

#endif /* INCLUDE__VT3_FONTS_C */

/* end of file */
