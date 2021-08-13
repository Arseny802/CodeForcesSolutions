#pragma once

#include <array>

namespace PizzaForces {
class PizzaForcesSolution {
 public:
  static long long Calculate(long long numberOfFriends);

 private:
  struct Pizza {
	int size;
	int minutes;
	Pizza(int size, int minutes)
		: size(size), minutes(minutes) {

	}
  };

  static constexpr int kPizzasAmount = 3;
  static const std::array<Pizza, kPizzasAmount> kPizzas;
};
} /* namespace PizzaForces */
