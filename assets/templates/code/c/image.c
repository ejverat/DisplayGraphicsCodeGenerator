#include <stdint.h>
#include "image.h"

//use extern %varname%; in your code

const uint8_t %varname%_array[] = 
{
	%array%
}

const image_t %varname% = 
{
	%width%,
	%height%,
	(const uint8_t*) &%varname%_array[0],
	%pixelsperbyte%
}

