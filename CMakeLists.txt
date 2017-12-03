####### setup project and cmake #######

# Project name
project (socket)

# CMake version requirement
cmake_minimum_required(VERSION 3.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(src)
add_subdirectory(headers)
add_subdirectory(test)
