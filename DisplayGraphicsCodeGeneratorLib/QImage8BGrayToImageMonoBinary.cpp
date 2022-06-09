#include "QImage8BGrayToImageMonoBinary.h"
#include <QImage>

#include "ImageMonoBinary.h"

namespace DGCG
{

QImage8BGrayToImageMonoBinary::QImage8BGrayToImageMonoBinary(std::shared_ptr<QImage> image)
    : ptrImage(image)
{}

std::unique_ptr<Image> QImage8BGrayToImageMonoBinary::Convert()
{
    std::unique_ptr<Image> image = std::make_unique<ImageMonoBinary>(ptrImage->width(),ptrImage->height());

    for (unsigned int r  = 0; r < ptrImage->height(); r++)
    {
        for (unsigned int c = 0; c < ptrImage->width(); c++)
        {
            if ( qGray(ptrImage->pixel(c,r)) >127 )
            {
                image->setPixel(r,c,1);
            }
            else
            {
                image->setPixel(r,c,0);
            }
        }
    }

    return image;
}

}
