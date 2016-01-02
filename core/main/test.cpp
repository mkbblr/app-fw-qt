#include <gtest/gtest.h>

TEST(MainTest, check1)
{
    EXPECT_EQ(0, 5-5);
    EXPECT_EQ(25, 5*5);
}

TEST(MainTest, check2)
{
    EXPECT_GT(100, 90);
    EXPECT_GT(10, 20);
}


GTEST_API_ int main(int argc, char ** argv)
{

    printf("\n main_test_main\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
