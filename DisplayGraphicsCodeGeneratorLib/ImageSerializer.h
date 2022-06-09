#ifndef IMAGESERIALIZER_H
#define IMAGESERIALIZER_H

#include <string>

namespace DGCG
{

class ImageSerializer
{
public:
    virtual std::string Serialize() = 0;
    virtual ~ImageSerializer() = default;
};

}
#endif // IMAGESERIALIZER_H
