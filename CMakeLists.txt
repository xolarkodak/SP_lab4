cmake_minimum_required(VERSION 3.22.1)
project(calculator_sp4 CXX)
add_library(calculator_lib STATIC main.cpp calculator.cpp calculator.h)
add_executable(calculator_sp4 main.cpp calculator.cpp)
