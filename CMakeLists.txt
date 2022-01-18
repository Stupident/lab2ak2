VPATH = src

cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)

project(Lab2)

add_library(my_lib STATIC calculator
	src/calculator.h
	src/calculator.cpp
)

add_executable(run
  src/main.cpp
)

target_link_libraries(run calculator)
