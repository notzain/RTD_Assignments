cmake_minimum_required(VERSION 3.10)
project(opdr5)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib_domain)
link_directories(lib_domain)
add_subdirectory(lib_domain)

include_directories(lib_util)
link_directories(lib_util)
add_subdirectory(lib_util)

include_directories(lib_state)
link_directories(lib_state)
add_subdirectory(lib_state)

include_directories(lib_ui)
link_directories(lib_ui)
add_subdirectory(lib_ui)

include_directories(lib_domainfactory)
link_directories(lib_domainfactory)
add_subdirectory(lib_domainfactory)

add_executable(opdr5 main.cpp)
target_link_libraries(opdr5 lib_domainfactory lib_domain lib_util lib_state  lib_ui)
