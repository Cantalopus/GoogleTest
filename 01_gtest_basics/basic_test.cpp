#include <gtest/gtest.h>

TEST(BasicsTest, AdditionWorks)
{
    EXPECT_EQ(2 + 2, 5)<<"steaming in custom message";
}