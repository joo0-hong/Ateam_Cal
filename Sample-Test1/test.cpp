#include "pch.h"
#include "../Project6/cal.cpp"

TEST(TestCaseName, TestGop) {
	Cal cal;
	EXPECT_EQ(cal.getGop(2, 3), 6);
}