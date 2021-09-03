#include "WhoIsOpposite.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

namespace WhoIsOpposite {

TEST(WhoIsOpposite, Test_01) {
  CircleData input = {6, 2, 4};
  long long expected = 8;
  long long output = WhoIsOppositeSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(WhoIsOpposite, Test_02) {
  CircleData input = {2, 3, 1};
  long long expected = -1;
  long long output = WhoIsOppositeSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(WhoIsOpposite, Test_03) {
  CircleData input = {2, 4, 10};
  long long expected = -1;
  long long output = WhoIsOppositeSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(WhoIsOpposite, Test_04) {
  CircleData input = {5, 3, 4};
  long long expected = -1;
  long long output = WhoIsOppositeSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(WhoIsOpposite, Test_05) {
  CircleData input = {1, 3, 2};
  long long expected = 4;
  long long output = WhoIsOppositeSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(WhoIsOpposite, Test_06) {
  CircleData input = {2, 5, 4};
  long long expected = 1;
  long long output = WhoIsOppositeSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(WhoIsOpposite, Test_07) {
  CircleData input = {4, 3, 2};
  long long expected = -1;
  long long output = WhoIsOppositeSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}
} /* namespace WhoIsOpposite */
