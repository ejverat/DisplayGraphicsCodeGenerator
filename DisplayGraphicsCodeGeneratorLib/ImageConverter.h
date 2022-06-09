#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H

#include <memory>
#include "Image.h"

namespace DGCG
{

class ImageConverter
{
public:
    virtual std::unique_ptr<Image> Convert() = 0;
    virtual ~ImageConverter() = default;
};
}

#endif // IMAGECONVERTER_H
