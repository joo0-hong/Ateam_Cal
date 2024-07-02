#include "pch.h"
#include "../Project6/cal.cpp"

TEST(TestCaseName, TestName) {

  Cal* calc = new Cal();

  EXPECT_EQ(2, calc->getDevide(4, 2));
  EXPECT_EQ(0, calc->getDevide(0, 2));
  EXPECT_EQ(0, calc->getDevide(1, 0));

}