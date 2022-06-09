#include "ImageMonoBinaryCSerializer.h"
#include "ImageUtils.h"

namespace DGCG
{

ImageMonoBinaryCSerializer::ImageMonoBinaryCSerializer(std::shared_ptr<ImageMonoBinary> image, std::string format, std::string imageName)
    : img(image), outFormat(format), varName(imageName)
{

}

std::string ImageMonoBinaryCSerializer::Serialize()
{
    ImageUtils utils;
    std::string out = outFormat;

    std::string width_str = std::to_string(img->getWidth());
    std::string height_str = std::to_string(img->getHeight());
    std::string pixel_bit_size_str = std::to_string((unsigned int)1);
    std::string array_str = utils.ImageDataToString(img);

    const std::string varname_token = "%varname%";
    const std::string array_token = "%array%";
    const std::string width_token = "%width%";
    const std::string height_token = "%height%";
    const std::string pixel_bit_size_token = "%pixel_bit_size%";

    size_t pos;
    do
    {
        pos = out.find(varname_token);
        if (pos != std::string::npos)
            out.replace(pos,varname_token.length(),varName);
    }
    while (pos != std::string::npos);
    do
    {
        pos = out.find(array_token);
        if (pos != std::string::npos)
            out.replace(pos,array_token.length(),array_str);
    }
    while (pos != std::string::npos);
    do
    {
        pos = out.find(width_token);
        if (pos != std::string::npos)
            out.replace(pos,width_token.length(),width_str);
    }
    while (pos != std::string::npos);
    do
    {
        pos = out.find(height_token);
        if (pos != std::string::npos)
            out.replace(pos,height_token.length(),height_str);
    }
    while (pos != std::string::npos);
    do
    {
        pos = out.find(pixel_bit_size_token);
        if (pos != std::string::npos)
            out.replace(pos,pixel_bit_size_token.length(),pixel_bit_size_str);
    }
    while (pos != std::string::npos);

    return out;
}

}
