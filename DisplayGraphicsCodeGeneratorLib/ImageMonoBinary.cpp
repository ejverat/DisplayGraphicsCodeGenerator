#include "ImageMonoBinary.h"

namespace DGCG {

ImageMonoBinary::ImageMonoBinary(unsigned int width, unsigned int height)
    : width(width), height(height)
{
    for (unsigned int r = 0; r < height; r++)
    {
        Row row;
        unsigned int row_bytes = width/8;
        if (width%8 != 0)
            row_bytes++;
        if (row_bytes == 0)
            row.push_back(0);
        else
        {
            for (unsigned int c = 0; c < row_bytes; c++)
            {
                row.push_back(0);
            }
        }
        data.push_back(row);
    }
}

unsigned int ImageMonoBinary::getWidth() const
{
    return width;
}

unsigned int ImageMonoBinary::getHeight() const
{
    return height;
}

void ImageMonoBinary::setPixel(unsigned int row, unsigned int col, unsigned int val)
{
    uint8_t mask[] = {
        0b10000000,
        0b01000000,
        0b00100000,
        0b00010000,
        0b00001000,
        0b00000100,
        0b00000010,
        0b00000001
    };
    unsigned int col_pos = (col/8);
    if (0 == val)
        data.at(row).at(col_pos) &= ~mask[col%8];
    else
        data.at(row).at(col_pos) |= mask[col%8];
}

} // namespace DGCG
