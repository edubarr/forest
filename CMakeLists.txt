cmake_minimum_required(VERSION 3.21)
project(Forest)

set(CMAKE_CXX_STANDARD 17)

add_executable(Forest main.cpp trees.cpp trees.hpp animals.cpp animals.hpp)
