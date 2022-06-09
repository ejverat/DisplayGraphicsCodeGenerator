#ifndef QIMAGE8BGRAYTOIMAGEMONOBINARY_H
#define QIMAGE8BGRAYTOIMAGEMONOBINARY_H

#include "ImageConverter.h"
#include <memory>

class QImage;

namespace DGCG
{

class QImage8BGrayToImageMonoBinary : public ImageConverter
{
public:
    QImage8BGrayToImageMonoBinary(std::shared_ptr<QImage> image);
    std::unique_ptr<Image> Convert() override;

private:
    std::shared_ptr<QImage> ptrImage;

};

}

#endif // QIMAGE8BGRAYTOIMAGEMONOBINARY_H
