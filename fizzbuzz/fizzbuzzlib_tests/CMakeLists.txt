# FizzBuzz tests CMake file
cmake_minimum_required(VERSION 3.28)

# Define the test executable
add_executable(fizzbuzz_tests
    fizzbuzz_tests.cpp
)

# Link against the library and Google Test
target_link_libraries(fizzbuzz_tests
    PRIVATE
        fizzbuzzlib
        gtest
        gtest_main
)

# Add the test to CTest
add_test(NAME FizzBuzzTests COMMAND fizzbuzz_tests)
