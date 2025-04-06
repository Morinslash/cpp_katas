# FizzBuzz library CMake file
cmake_minimum_required(VERSION 3.28)

# Define the library
add_library(fizzbuzzlib
    fizzbuzz.cpp
)

# Set include directories
target_include_directories(fizzbuzzlib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# Set C++ standard to match the root project
target_compile_features(fizzbuzzlib PUBLIC cxx_std_20)
