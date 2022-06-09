#include "qtto2dgrayscale4bitsimageconverter.h"
#include "point2d_sizet.h"
#include "pixelunsigned4bits.h"
#include "image2dgrayscale4bits.h"

QtTo2DGrayScale4bitsImageConverter::QtTo2DGrayScale4bitsImageConverter(std::shared_ptr<QImage> img)
{
    qimg = img;
}

unsigned int QtTo2DGrayScale4bitsImageConverter::ValueScaler(int value, int maxValue, int minValue)
{
    // 256 -> 16
    // value -> 4bits scaled
    // 4 bits scaled  = (value*16) / 256
    return ((16 * (value + 1)) / (maxValue - minValue + 1)) - 1;
}

std::unique_ptr<Image> QtTo2DGrayScale4bitsImageConverter::Convert()
{
    auto imgSize = qimg->size();
    auto convertedImage = std::make_unique<Image2DGrayScale4bits>(imgSize.width(),imgSize.height());
    for (std::size_t x = 0; x < imgSize.width(); x++)
    {
        for (std::size_t y = 0; y < imgSize.height(); y++)
        {
            auto pixelValue = qimg->pixel(x,y);
            auto grayValue = qGray(qimg->pixel(x,y));
            convertedImage->Set(Point2D_SizeT(x,y),std::make_unique<PixelUnsigned4Bits>(ValueScaler(pixelValue,0,255)));
        }
    }

    return convertedImage;
}
