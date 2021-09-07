
# Library with code and executable for sending
add_library(UpTheStripSimplifiedForTest SHARED
		UpTheStripSimplified.cc
		)
add_executable(UpTheStripSimplified
		UpTheStripSimplified.cc
		UpTheStripSimplifiedRunner.cc
		)

# Unit tests of code
add_executable(UpTheStripSimplified_Tests
		UpTheStripSimplifiedTests.cc
		)

target_link_libraries(UpTheStripSimplified_Tests
		UpTheStripSimplifiedForTest
		gtest
		gtest_main)