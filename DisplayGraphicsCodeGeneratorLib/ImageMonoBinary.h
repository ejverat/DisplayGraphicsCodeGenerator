#ifndef DGCG_IMAGEMONOBINARY_H
#define DGCG_IMAGEMONOBINARY_H

#include "Image.h"
#include <vector>

namespace DGCG {

class ImageMonoBinary : public Image
{
public:
    ImageMonoBinary(unsigned int width, unsigned int height);
    unsigned int getWidth() const override;
    unsigned int getHeight() const override;
    void setPixel(unsigned int row, unsigned int col, unsigned int val) override;

    using Row = std::vector<uint8_t>;

private:
    unsigned int width;
    unsigned int height;
    std::vector<Row> data;
    friend class ImageUtils;
};

} // namespace DGCG

#endif // DGCG_IMAGEMONOBINARY_H
