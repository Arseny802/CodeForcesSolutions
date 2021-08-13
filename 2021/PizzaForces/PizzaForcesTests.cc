#include "PizzaForces.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

namespace PizzaForces {

TEST(PizzaForces, Test_01) {
  long long input = 12;
  long long expected = 30;
  long long output = PizzaForcesSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(PizzaForces, Test_02) {
  long long input = 15;
  long long expected = 40;
  long long output = PizzaForcesSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(PizzaForces, Test_03) {
  long long input = 300;
  long long expected = 750;
  long long output = PizzaForcesSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(PizzaForces, Test_04) {
  long long input = 1;
  long long expected = 15;
  long long output = PizzaForcesSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(PizzaForces, Test_05) {
  long long input = 9999999999999999;
  long long expected = 25000000000000000;
  long long output = PizzaForcesSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(PizzaForces, Test_06) {
  long long input = 3;
  long long expected = 15;
  long long output = PizzaForcesSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}
} /* namespace PizzaForces */
