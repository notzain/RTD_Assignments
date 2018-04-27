cmake_minimum_required(VERSION 3.10)
project(opdr3)

set(CMAKE_CXX_STANDARD 11)

add_executable(opdr3 main.cpp Member.cpp Member.h Book.cpp Book.h Loan.cpp Loan.h Application.cpp Application.h LoanFacade.h LoanFacadeImpl.cpp LoanFacadeImpl.h)