cmake_minimum_required(VERSION 3.10)
project(opdr4)

set(CMAKE_CXX_STANDARD 11)

add_executable(opdr4 main.cpp IMeter.h AnalogMeter.cpp AnalogMeter.h DigitalMeter.cpp DigitalMeter.h Speed.cpp Speed.h BorderDecorator.cpp BorderDecorator.h BeforeTextDecorator.cpp BeforeTextDecorator.h AfterTextDecorator.cpp AfterTextDecorator.h)