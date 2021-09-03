#include <iostream>
#include <vector>

namespace WhoIsOpposite {
struct CircleData {
  long long personA;
  long long personB;
  long long personC;

  CircleData(long long personA, long long personB, long long personC)
	  : personA(personA), personB(personB), personC(personC) {
  }
  CircleData() : personA(0), personB(0), personC(0) {
  }
};

class WhoIsOppositeSolution {
 public:
  static long long Calculate(const CircleData &circleData);

 private:
};

long long WhoIsOppositeSolution::Calculate(const CircleData &circleData) {
  long long diffAB = circleData.personB - circleData.personA;
  if (diffAB < 0) {
	diffAB *= -1;
  }

  long long minPersonAB = circleData.personA > circleData.personB ?
						  circleData.personB : circleData.personA;
  if (diffAB < minPersonAB) {
	return -1; // invalid input
  }

  if (circleData.personC > diffAB * 2) {
	return -1; // Person C is too far
  }

  if (circleData.personC > diffAB) {
	return circleData.personC - diffAB;
  } else {
	return circleData.personC + diffAB;
  }
}
} /* namespace WhoIsOpposite */

int main() {
  unsigned int inputCount = 0;
  std::cin >> inputCount;

  std::vector<long long> results(inputCount);
  for (unsigned int index = 0; index < inputCount; ++index) {
	WhoIsOpposite::CircleData input;
	std::cin >> input.personA;
	std::cin >> input.personB;
	std::cin >> input.personC;
	results[index] = WhoIsOpposite::WhoIsOppositeSolution::Calculate(input);
  }

  for (auto resultItem: results) {
	std::cout << resultItem << std::endl;
  }

  return 0;
}
