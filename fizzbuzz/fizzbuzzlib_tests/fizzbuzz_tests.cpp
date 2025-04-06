#include "gtest/gtest.h"
#include "fizzbuzz.h"

class FizzBuzzTest : public ::testing::Test {
protected:
  FizzBuzz fizzBuzz;
};

TEST_F(FizzBuzzTest, ShouldReturn1WhenGiven1) {
  int input = 1;

  std::string result = fizzBuzz.convert(input);

  EXPECT_EQ("2", result);
}

