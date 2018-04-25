cmake_minimum_required(VERSION 2.8)

project(hello)

include(CheckFunctionExists)
check_function_exists(printf HAVE_PRINTF)
check_function_exists(socket HAVE_SOCKET)

include_directories("${PROJECT_BINARY_DIR}")
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
)

option(USE_MYHELLO "Use MyHello" ON)

add_subdirectory(myhello)
set(EXTRA_LIBS ${EXTRA_LIBS} myhello)

add_executable(hello hello.cpp)
target_link_libraries(hello ${EXTRA_LIBS})

