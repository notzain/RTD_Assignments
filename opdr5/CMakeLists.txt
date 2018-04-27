cmake_minimum_required(VERSION 3.10)
project(opdr5)

set(CMAKE_CXX_STANDARD 11)

include_directories(lib_test)
link_directories(lib_test)

add_subdirectory(lib_test)

add_executable(opdr5 main.cpp)
target_link_libraries(opdr5 lib_test)

