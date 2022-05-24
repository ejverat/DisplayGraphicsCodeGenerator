#ifndef IMAGE2DGRAYSCALE4BITS_H
#define IMAGE2DGRAYSCALE4BITS_H

#include "Image.h"

class Image2DGrayScale4bits : public Image
{
public:
    Image2DGrayScale4bits(int width, int height)
        : width(width), height(height)
    {}

    std::shared_ptr<Pixel> Get(Point position) override;
    void Set(Point position, std::shared_ptr<Pixel> pixel) override;


private:
    int width;
    int height;
};

#endif // IMAGE2DGRAYSCALE4BITS_H
