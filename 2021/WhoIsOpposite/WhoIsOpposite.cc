#include "WhoIsOpposite.h"

namespace WhoIsOpposite {
long long WhoIsOppositeSolution::Calculate(const CircleData& circleData) {
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
