#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <string>

class ImageLoader
{
public:
    virtual bool Load(std::string filename) = 0;
};

#endif // IMAGELOADER_H
