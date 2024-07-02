#include "pch.h"
#include "../Project6/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, getMinus) {
	// Arrange
	Cal cal;

	// Act

	// Assert
	EXPECT_EQ(1, cal.getMinus(2, 1));
	EXPECT_EQ(-1, cal.getMinus(1, 2));
}

TEST(TestCaseName, TestGop) {
	Cal cal;
	EXPECT_EQ(cal.getGop(2, 3), 6);

}