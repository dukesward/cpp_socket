#include src for hello
include_directories(${CMAKE_SOURCE_DIR}/headers/socket)

add_library(socket_src socket.cpp)
