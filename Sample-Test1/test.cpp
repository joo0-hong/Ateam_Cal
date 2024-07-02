#include "pch.h"
#include "../Project6/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Cal, getSumTest) {
	EXPECT_EQ(3, Cal::getSum(1, 2));
}