cmake_minimum_required(VERSION 3.10)
project(opdr2)

set(CMAKE_CXX_STANDARD 11)

add_executable(opdr2 main.cpp IItem.h Directory.cpp Directory.h Item.cpp Item.h OS.cpp OS.h SimpleOS.cpp SimpleOS.h)