#ifndef QTIMAGELOADER_H
#define QTIMAGELOADER_H

#include <QImage>

#include <memory>

#include "ImageLoader.h"

class QtImageLoader : public ImageLoader
{
public:
    bool Load(std::string filename) override;
    virtual std::shared_ptr<Image> GetImage() override;

private:
    std::shared_ptr<Image> image;
};

#endif // QTIMAGELOADER_H
