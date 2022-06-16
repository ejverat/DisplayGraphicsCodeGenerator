#ifndef __IMAGE_T__
#define __IMAGE_T__

#include <stdint.h>

typedef struct
{
	uint16_t width;
	uint16_t height;
	const uint8_t* array;
	uint8_t pixels_per_byte;
}image_t;

#endif
