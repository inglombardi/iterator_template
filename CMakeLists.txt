cmake_minimum_required(VERSION 3.14)
project(iteratore)

set(CMAKE_CXX_STANDARD 14)

add_executable(iteratore main.cpp node.cpp node.h stack.cpp stack.h iterator.cpp iterator.h)