#include src for hello
include_directories(${CMAKE_SOURCE_DIR}/headers)

add_subdirectory(socket)
add_subdirectory(list)

add_library(hello_src hello.cpp)
