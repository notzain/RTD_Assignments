cmake_minimum_required(VERSION 3.10)
project(lib_state)

set(CMAKE_CXX_STANDARD 14)

add_library(lib_state SHARED IRobotState.h RobotRoamState.cpp RobotRoamState.h RobotAttackState.cpp RobotAttackState.h RobotFinishState.cpp RobotFinishState.h RobotWinState.cpp RobotWinState.h)


