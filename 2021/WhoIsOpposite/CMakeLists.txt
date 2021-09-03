
# Library with code and executable for sending
add_library(WhoIsOppositeForTest SHARED
		WhoIsOpposite.cc
		)
add_executable(WhoIsOpposite
		WhoIsOpposite.cc
		WhoIsOppositeRunner.cc
		)

# Unit tests of code
#project(PizzaForces_Tests)
add_executable(WhoIsOpposite_Tests
		WhoIsOppositeTests.cc
		)

target_link_libraries(WhoIsOpposite_Tests
		WhoIsOppositeForTest
		gtest
		gtest_main)