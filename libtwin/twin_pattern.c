/* GIMP RGBA C-Source image dump (cork.c) */

#include "twinint.h"

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */ 
  char         	*comment;
  unsigned char	 pixel_data[8 * 8 * 4];
} cork_image = {
  8, 8, 4,
  "cork",
  "{\265\357\377\214\275\357\377{\265\357\377{\265\357\377\214\275\357\377{\265"
  "\336\377{\265\357\377\234\316\377\377{\265\357\377Z\214\316\377{\265\357\377"
  "k\234\336\377Z\214\326\377Z\224\336\377{\265\357\377{\265\336\377\214\275"
  "\357\377Z\214\326\377{\265\357\377\214\275\357\377{\255\336\377{\265\357\377"
  "{\265\336\377{\255\357\377{\265\336\377{\265\357\377Z\214\316\377{\263\353"
  "\377{\265\357\377\234\316\377\377{\265\357\377{\265\336\377\214\275\357\377{"
  "\255\336\377{\265\357\377{\265\336\377{\265\357\377k\245\357\377\234\316\377"
  "\377{\265\357\377{\265\336\377\214\306\377\377{\255\336\377k\245\357\377{"
  "\265\336\377{\265\357\377\234\316\377\377Z\214\316\377Z\214\326\377{\265\357"
  "\377k\245\357\377{\265\336\377\214\275\357\377{\255\357\377\214\275\357\377a"
  "\223\321\377\207\270\354\377[\215\326\377{\265\357\377Z\214\316\377\214\306"
  "\377\377{\255\336\377{\255\357\377Z\224"
  "\336\377"
};

twin_pixmap_t *
twin_make_pattern (void)
{
    twin_pointer_t	pixels;

    pixels.v = (void *) cork_image.pixel_data;

    return twin_pixmap_create_const (TWIN_ARGB32,
				     cork_image.width,
				     cork_image.height,
				     cork_image.width * cork_image.bytes_per_pixel,
				     pixels);
}
