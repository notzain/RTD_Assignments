cmake_minimum_required(VERSION 3.10)
project(lib_domainfactory)

set(CMAKE_CXX_STANDARD 14)

add_library(lib_domainfactory SHARED SimpleDomainFactory.cpp SimpleDomainFactory.h IDomainFactory.h)


