#ifndef DGCG_IMAGEUTILS_H
#define DGCG_IMAGEUTILS_H

#include <string>
#include <memory>
#include "ImageMonoBinary.h"

namespace DGCG {

class ImageUtils
{
public:
    ImageUtils();
    std::string ImageDataToString(std::shared_ptr<ImageMonoBinary> img);
};

} // namespace DGCG

#endif // DGCG_IMAGEUTILS_H
