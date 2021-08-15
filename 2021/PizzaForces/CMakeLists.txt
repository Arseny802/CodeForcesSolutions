
# Library with code and executable for sending
add_library(PizzaForcesForTest SHARED
		Pizza.cc
		PizzaForces.cc
		)
add_executable(PizzaForces
		Pizza.cc
		PizzaForces.cc
		PizzaForcesRunner.cc
		)

# Unit tests of code
#project(PizzaForces_Tests)
add_executable(PizzaForces_Tests
		PizzaForcesTests.cc
		)

target_link_libraries(PizzaForces_Tests
		PizzaForcesForTest
		gtest
		gtest_main)