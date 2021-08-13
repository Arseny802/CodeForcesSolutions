#include "PizzaForces.h"

namespace PizzaForces {
const std::array<PizzaForcesSolution::Pizza, PizzaForcesSolution::kPizzasAmount> PizzaForcesSolution::kPizzas{
	Pizza(6, 15),
	Pizza(8, 20),
	Pizza(10, 25),
};

long long PizzaForcesSolution::Calculate(long long numberOfFriends) {
  long long numberOfFriendsDev = numberOfFriends / kPizzas[0].size;
  long long numberOfFriendsMod = numberOfFriends % kPizzas[0].size;
  if (numberOfFriendsDev == 0) {
	return numberOfFriendsMod > 0 ? kPizzas[0].minutes : 0;
  }

  switch (numberOfFriends % kPizzas[0].size) {
	case 0:return numberOfFriendsDev * kPizzas[0].minutes;
	case 1:
	case 2: return (numberOfFriendsDev - 1) * kPizzas[0].minutes + kPizzas[1].minutes;
	case 3:
	case 4: return (numberOfFriendsDev - 1) * kPizzas[0].minutes + kPizzas[2].minutes;
	case 5: return numberOfFriendsDev * kPizzas[0].minutes + kPizzas[0].minutes;
	default: return 0;
  }
}
} /* namespace PizzaForces */
