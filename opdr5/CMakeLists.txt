cmake_minimum_required(VERSION 3.10)
project(opdr5)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib_util)
link_directories(lib_util)
add_subdirectory(lib_util)

add_executable(opdr5 main.cpp)
target_link_libraries(opdr5 lib_util)
