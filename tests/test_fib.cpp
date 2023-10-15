#include <gtest/gtest.h>

#include "fibonacci.hpp"

TEST(MainSuite, FibonacciTest) {
  EXPECT_EQ(fibonacci(9), 34);
  EXPECT_EQ(fibonacci(10), 55);
}

TEST(MainSuite, IntEqTest) { EXPECT_EQ(42, 052); }
