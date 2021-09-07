#include "UpTheStripSimplified.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

namespace UpTheStripSimplified {

TEST(UpTheStripSimplified, Test_01) {
  StripInput input = {3, 998244353};
  unsigned long long expected = 5;
  unsigned long long output = UpTheStripSimplifiedSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(UpTheStripSimplified, Test_02) {
  StripInput input = {5, 998244353};
  unsigned long long expected = 25;
  unsigned long long output = UpTheStripSimplifiedSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}

TEST(UpTheStripSimplified, Test_03) {
  StripInput input = {42, 998244353};
  unsigned long long expected = 793019428;
  unsigned long long output = UpTheStripSimplifiedSolution::Calculate(input);
  ASSERT_EQ(output, expected);
}
} /* namespace UpTheStripSimplified */
