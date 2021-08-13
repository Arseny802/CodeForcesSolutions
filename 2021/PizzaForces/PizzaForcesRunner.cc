#include <iostream>
#include <vector>
#include "PizzaForces.h"

int main() {
  unsigned int inputCount = 0;
  std::cin >> inputCount;

  std::vector<long long> results(inputCount);
  for (unsigned int index = 0; index < inputCount; ++index) {
	long long input;
	std::cin >> input;
	results[index] = PizzaForces::PizzaForcesSolution::Calculate(input);
  }

  for (auto resultItem : results) {
    std::cout << resultItem << std::endl;
  }

  return 0;
}