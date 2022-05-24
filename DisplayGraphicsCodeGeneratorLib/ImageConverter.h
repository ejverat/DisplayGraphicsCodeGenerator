#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H

#include <memory>
#include "Image.h"

class ImageConverter
{
public:
    virtual std::unique_ptr<Image> Convert() = 0;
};

#endif // IMAGECONVERTER_H
