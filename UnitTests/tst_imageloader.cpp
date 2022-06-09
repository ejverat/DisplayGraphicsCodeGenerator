
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "QtImageLoader.h"

using namespace testing;


TEST(QtImageLoader, GIVEN_APathWithEmptyStringValue_WHEN_IsLoad_THEN_ReturnFalse)
{
    QtImageLoader imageLoader;
    ASSERT_THAT(imageLoader.Load(""), Eq(false));
}

