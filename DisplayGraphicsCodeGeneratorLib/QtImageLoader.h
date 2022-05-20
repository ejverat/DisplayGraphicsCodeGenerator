#ifndef QTIMAGELOADER_H
#define QTIMAGELOADER_H

#include "ImageLoader.h"

class QtImageLoader : public ImageLoader
{
public:
    bool Load(std::string filename) override;
};

#endif // QTIMAGELOADER_H
