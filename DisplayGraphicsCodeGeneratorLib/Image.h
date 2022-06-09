#ifndef IMAGE_H
#define IMAGE_H

#include <cstddef>
#include <memory>
#include "Pixel.h"
#include "Point.h"

namespace DGCG
{

class Image
{
public:
    /*virtual std::shared_ptr<Pixel> Get(Point position) = 0;
    virtual void Set(Point position, std::shared_ptr<Pixel> pixel) = 0;*/

    virtual unsigned int getWidth() const = 0;
    virtual unsigned int getHeight() const = 0;
    virtual void setPixel(unsigned int row, unsigned int col, unsigned int val) = 0;

    virtual ~Image() = default;
};

}

#endif // IMAGE_H
