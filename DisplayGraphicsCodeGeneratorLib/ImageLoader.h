#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <string>
#include <memory>
#include "Image.h"

class ImageLoader
{
public:
    virtual bool Load(std::string filename) = 0;
    virtual std::shared_ptr<DGCG::Image> GetImage() = 0;
    virtual ~ImageLoader() = default;
};

#endif // IMAGELOADER_H
