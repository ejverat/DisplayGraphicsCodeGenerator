#ifndef QTTO2DGRAYSCALE4BITSIMAGECONVERTER_H
#define QTTO2DGRAYSCALE4BITSIMAGECONVERTER_H

#include <QImage>
#include <memory>
#include "ImageConverter.h"
#include "Image.h"

class QtTo2DGrayScale4bitsImageConverter : public ImageConverter
{
public:
    QtTo2DGrayScale4bitsImageConverter(std::shared_ptr<QImage> img);
    std::unique_ptr<Image> Convert() override;

private:
    std::shared_ptr<QImage> qimg;
    unsigned int ValueScaler(int value, int maxValue, int minValue);
};

#endif // QTTO2DGRAYSCALE4BITSIMAGECONVERTER_H
