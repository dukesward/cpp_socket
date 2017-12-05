#create executable for hello
include_directories(
	${CMAKE_SOURCE_DIR}/src
	${CMAKE_SOURCE_DIR}/src/socket
	${CMAKE_SOURCE_DIR}/src/list
	${CMAKE_SOURCE_DIR}/headers
	${CMAKE_SOURCE_DIR}/headers/socket
	${CMAKE_SOURCE_DIR}/headers/list
)

set(socket_exe test.cpp)
add_executable(hello_test ${socket_exe})

target_link_libraries(hello_test hello_src socket_src list_src)
