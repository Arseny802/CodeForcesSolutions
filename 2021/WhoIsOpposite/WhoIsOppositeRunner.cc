#include <iostream>
#include <vector>
#include "WhoIsOpposite.h"

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

  for (auto resultItem : results) {
    std::cout << resultItem << std::endl;
  }

  return 0;
}