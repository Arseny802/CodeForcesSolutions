#pragma once
#include <array>
#include "Pizza.h"

namespace PizzaForces {
class PizzaForcesSolution {
 public:
  static long long Calculate(long long numberOfFriends);

 private:
  static constexpr int kPizzasAmount = 3;
  static const std::array<Pizza, kPizzasAmount> kPizzas;
};
} /* namespace PizzaForces */
