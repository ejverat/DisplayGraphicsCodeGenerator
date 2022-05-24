#include "image2dgrayscale4bits.h"
#include "pixelunsigned4bits.h"

/*Image2DGrayScale4bits::Image2DGrayScale4bits()
{

}*/

std::shared_ptr<Pixel> Image2DGrayScale4bits::Get(Point position)
{
    return std::make_unique<PixelUnsigned4Bits>(0);
}
void Image2DGrayScale4bits::Set(Point position, std::shared_ptr<Pixel> pixel)
{

}
