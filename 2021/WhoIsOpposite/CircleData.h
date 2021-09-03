#pragma once

namespace WhoIsOpposite {
struct CircleData {
  long long personA;
  long long personB;
  long long personC;

  CircleData(long long personA, long long personB, long long personC)
  	: personA(personA), personB(personB),personC(personC) {
  }
  CircleData() : personA(0), personB(0),personC(0) {
  }
};
} /* namespace WhoIsOpposite */
