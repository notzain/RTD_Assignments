cmake_minimum_required(VERSION 3.10)
project(lib_util)

set(CMAKE_CXX_STANDARD 14)

add_library(lib_util SHARED IObserver.h Subject.cpp Subject.h)


