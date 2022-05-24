#include "QtImageLoader.h"
#include "qtto2dgrayscale4bitsimageconverter.h"

bool QtImageLoader::Load(std::string filename)
{
    QImage qImg;
    if(filename == "")
        return false;
    bool isLoaded = false;
    isLoaded = qImg.load(filename.c_str());
    if (isLoaded)
    {
        //convert qt to desired image type
        QtTo2DGrayScale4bitsImageConverter converter(std::make_shared<QImage>(qImg));
        image = converter.Convert();
    }
    return isLoaded;
}

std::shared_ptr<Image> QtImageLoader::GetImage()
{
    return image;
}
