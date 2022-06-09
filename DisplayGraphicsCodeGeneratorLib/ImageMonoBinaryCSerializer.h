#ifndef IMAGEMONOBINARYCSERIALIZER_H
#define IMAGEMONOBINARYCSERIALIZER_H

#include "ImageSerializer.h"
#include "ImageMonoBinary.h"

#include <memory>
#include <string>

namespace DGCG
{

class ImageMonoBinaryCSerializer : public ImageSerializer
{
public:
    ImageMonoBinaryCSerializer(std::shared_ptr<ImageMonoBinary> image, std::string format, std::string imageName);
    std::string Serialize() override;

private:
    std::shared_ptr<ImageMonoBinary> img;
    std::string outFormat;
    std::string varName;
};
}

#endif // IMAGEMONOBINARYCSERIALIZER_H
