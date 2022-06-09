#include <stdint.h>
#include "graphic2d_objects.h"

//use extern graphic_t %varname%; in your code

const uint8_t %varname%_array[] = 
{
	%array%
};

const graphic_t %varname% = 
{
	%width%,
	%height%,
	(const uint8_t*) &%varname%_array[0],
	%pixel_bit_size%
};

