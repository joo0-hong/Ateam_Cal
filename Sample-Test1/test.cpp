#include "pch.h"
#include "../Project6/cal.cpp"

TEST(TestCaseName, TestName) {
	//EXPECT_EQ(1, 1);
	//EXPECT_TRUE(true);
	Cal* calculator = new Cal();


	// sumsum test
	EXPECT_EQ(3, calculator->getSumSum(1, 1, 1));
	EXPECT_EQ(0, calculator->getSumSum(-1, 0, 1));
}