project(CodeForcesSolutions)
cmake_minimum_required(VERSION 3.19)

set(CMAKE_CXX_STANDARD 20)

# Solution dependencies download and build.
# Use: conan install . -if conan-build -b --profile=conan_profile.txt
include(conan-build/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(../include ${GTEST_INCLUDE_DIRS})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_subdirectory(2021/PizzaForces)
add_subdirectory(2021/WhoIsOpposite)