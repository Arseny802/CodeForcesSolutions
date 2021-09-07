#include <iostream>
#include <vector>
#include "UpTheStripSimplified.h"

int main() {
  unsigned int inputCount = 0;
  std::cin >> inputCount;

  std::vector<unsigned long long> results(inputCount);
  for (unsigned int index = 0; index < inputCount; ++index) {
	StripInput input;
	std::cin >> input.inputNumber;
	std::cin >> input.abs;
	results[index] = UpTheStripSimplified::UpTheStripSimplifiedSolution::Calculate(input);
  }

  for (auto resultItem : results) {
    std::cout << resultItem << std::endl;
  }

  return 0;
}