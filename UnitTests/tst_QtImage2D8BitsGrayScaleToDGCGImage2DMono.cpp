#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <QImage>
#include <QByteArray>
#include <memory>

#include "ImageConverter.h"
#include "QImage8BGrayToImageMonoBinary.h"

using namespace testing;

TEST(QtImage2D8BitsGrayScaleToDGCGImage2DMono, GIVEN_AQtImageWithSize4X1_WHEN_IsConverted_THEN_ReturnedImageSizeIs4X1)
{
    auto qimage = std::make_shared<QImage>(4,1,QImage::Format_Grayscale8);

    std::shared_ptr<DGCG::ImageConverter> converter = std::make_shared<DGCG::QImage8BGrayToImageMonoBinary>(qimage);

    auto convertedImage = converter->Convert();

    ASSERT_EQ(convertedImage->getWidth(),4);
    ASSERT_EQ(convertedImage->getHeight(),1);
}
