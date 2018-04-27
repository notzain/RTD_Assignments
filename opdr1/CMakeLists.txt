cmake_minimum_required(VERSION 3.10)
project(opdr1)

set(CMAKE_CXX_STANDARD 11)

add_executable(opdr1 main.cpp Layer1.h Layer1Server.h Layer1Impl.cpp Layer1Impl.h Layer2.h Layer2Server.h Layer2Impl.cpp Layer2Impl.h Layer3.h Layer3Impl.cpp Layer3Impl.h)