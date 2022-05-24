#ifndef POINT2D_SIZET_H
#define POINT2D_SIZET_H

#include "Point.h"
#include <cstddef>

class Point2D_SizeT : public Point
{
public:
    Point2D_SizeT(std::size_t x, std::size_t y)
        : x(x),y(y)
    {}

private:
    std::size_t x;
    std::size_t y;
};

#endif // POINT2D_SIZET_H
