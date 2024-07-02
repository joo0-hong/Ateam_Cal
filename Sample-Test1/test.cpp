#include "pch.h"
#include "../Project6/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(CalculatorTest, GetZegopTest) {
    Cal cal;

    EXPECT_EQ(cal.getZegop(1), 1);
    EXPECT_EQ(cal.getZegop(2), 4);
    EXPECT_EQ(cal.getZegop(3), 9);

    for (int num = 0; num < 100; num++)
    {
        int expected = num * num;

        EXPECT_EQ(cal.getZegop(num), expected);
    }
}