# FizzBuzz kata CMake file
cmake_minimum_required(VERSION 3.28)
project(FizzBuzz VERSION 0.1.0 LANGUAGES CXX)

# Include the library and tests
add_subdirectory(fizzbuzzlib)
add_subdirectory(fizzbuzzlib_tests)

# Create the FizzBuzz executable
add_executable(fizzbuzz_app main.cpp)
target_link_libraries(fizzbuzz_app PRIVATE fizzbuzzlib)
