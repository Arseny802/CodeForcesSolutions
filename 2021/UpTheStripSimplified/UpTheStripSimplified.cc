#include <vector>
#include "UpTheStripSimplified.h"

namespace UpTheStripSimplified {
unsigned long long UpTheStripSimplifiedSolution::Calculate(const StripInput &stripInput) {
  std::vector<unsigned long long> table;
  table.reserve(stripInput.inputNumber);
  table.push_back(0);
  table.push_back(2);

  unsigned long long currentResult;
  for (unsigned forwardIndex = 3; forwardIndex <= stripInput.inputNumber; ++forwardIndex) {
	currentResult = 2;

	for (unsigned tableIndex = 1; tableIndex < table.size(); ++tableIndex) {
	  currentResult += table[tableIndex] ; // through decrementing

	  for (unsigned z = 2; z < forwardIndex; ++z) { // through division
		unsigned div = forwardIndex / z;
		if (div == tableIndex + 1) {
		  currentResult += table[tableIndex];
		} else if (div == 1) {
		  ++currentResult;
		} else if (div < tableIndex + 1) {
		  break;
		}
	  }
	}

	table.push_back(currentResult);
  }

  return (table.back() % stripInput.abs);
}
} /* namespace UpTheStripSimplified */
