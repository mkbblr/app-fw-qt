#include <gtest/gtest.h>
#include "config.h"

TEST(TestCase1, checksomething)
{
    EXPECT_EQ(1, 5-4);
    EXPECT_EQ(1, 4-5);
}

TEST(TestCase2, checksomethingelse)
{
    EXPECT_GT(1, 0);
}

TEST(TestCase3, checkconfig)
{
    EXPECT_EQ(0, config::checkrange(101));
    EXPECT_EQ(1, config::checkrange(90));
    EXPECT_EQ(0, 0);
    EXPECT_EQ(1,1);
}

