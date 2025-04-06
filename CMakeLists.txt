cmake_minimum_required(VERSION 3.28)
project(CPP_Katas VERSION 0.1.0 LANGUAGES CXX)

# Set C+K standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable compile commands export for LSP support
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable testing
enable_testing()

# Add GoogleTest
add_subdirectory(external/googletest)

# Include the FizzBuzz kata
add_subdirectory(fizzbuzz)
