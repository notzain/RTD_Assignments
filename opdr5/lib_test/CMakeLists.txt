cmake_minimum_required(VERSION 3.10)
project(lib_test)

set(CMAKE_CXX_STANDARD 11)


add_library(lib_test SHARED util.cpp util.h)


