cmake_minimum_required(VERSION 3.22)
project(fishing)

set(CMAKE_CXX_STANDARD 14)

add_executable(fishing main.cpp fish.cpp fish.h myExc.h)
