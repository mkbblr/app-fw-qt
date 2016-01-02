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
    EXPECT_EQ(0, checkrange(101));
    EXPECT_EQ(1, checkrange(90));
    EXPECT_EQ(0, 0);
    EXPECT_EQ(1,1);
}

GTEST_API_ int main(int argc, char ** argv)
{

    printf("\n config_test_main\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
