cmake_minimum_required(VERSION 3.10)
project(lib_domain)

set(CMAKE_CXX_STANDARD 14)

add_library(lib_domain SHARED Robot.cpp Robot.h Match.cpp Match.h IMatch.h IRobot.h)


