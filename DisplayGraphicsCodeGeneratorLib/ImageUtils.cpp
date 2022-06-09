#include "ImageUtils.h"

namespace DGCG {

ImageUtils::ImageUtils()
{

}

std::string ImageUtils::ImageDataToString(std::shared_ptr<ImageMonoBinary> img)
{
    std::string out;
    for (const auto& row : img->data)
    {
        for (const auto& byte : row)
        {
            out += std::to_string((unsigned int)byte) + ",";
        }
        out += "\n";
    }
    return out;
}

} // namespace DGCG
