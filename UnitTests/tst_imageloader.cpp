
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "QtImageLoader.h"

using namespace testing;


TEST(DisplayGraphicCodeGenerator, ImageLoaderReturnErrorIFileDontExists)
{
    QtImageLoader imageLoader;
    ASSERT_THAT(imageLoader.Load(""), Eq(false));
}

