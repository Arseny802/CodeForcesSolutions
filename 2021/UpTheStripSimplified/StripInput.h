#pragma once

struct StripInput {
  int inputNumber;
  unsigned long long abs;

  StripInput(long long inputNumber, unsigned long long abs)
	  : inputNumber(inputNumber), abs(abs) {
  }
  StripInput() : inputNumber(0), abs(0) {
  }
};