
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "QtImageLoader.h"

using namespace testing;


TEST(DisplayGraphicCodeGenerator, ImageLoaderReturnsFalseIfEmptyName)
{
    QtImageLoader imageLoader;
    ASSERT_THAT(imageLoader.Load(""), Eq(false));
}

