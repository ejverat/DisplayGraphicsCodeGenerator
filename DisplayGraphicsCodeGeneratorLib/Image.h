#ifndef IMAGE_H
#define IMAGE_H

#include <cstddef>
#include <memory>
#include "Pixel.h"
#include "Point.h"

class Image
{
public:
    virtual std::shared_ptr<Pixel> Get(Point position) = 0;
    virtual void Set(Point position, std::shared_ptr<Pixel> pixel) = 0;
};

#endif // IMAGE_H
