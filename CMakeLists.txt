cmake_minimum_required(VERSION 3.10)

# set the project name
project(HelloWorld)

# add the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Compiler Options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++0x -Wall -Wextra -Werror")

# Directories
include_directories(include)
add_subdirectory(src)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Unit Testing
enable_testing()
add_subdirectory(test)
