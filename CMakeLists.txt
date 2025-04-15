cmake_minimum_required(VERSION 3.10)
project(GTestSample)

set(CMAKE_CXX_STANDARD 17)

# GoogleTest setup
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add your source files
add_library(sample src/math.cpp)

# Add test executable
add_executable(runTests tests/math_test.cpp)

# Link with GoogleTest and your source library
target_link_libraries(runTests gtest_main sample)

# Discover and register tests
include(GoogleTest)
gtest_discover_tests(runTests)
