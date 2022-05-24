#ifndef PIXELUNSIGNED4BITS_H
#define PIXELUNSIGNED4BITS_H

#include "Pixel.h"

class PixelUnsigned4Bits : public Pixel
{
public:
    PixelUnsigned4Bits(unsigned int value)
        : value(value)
    {}
private:
    unsigned int value;
};

#endif // PIXELUNSIGNED4BITS_H
