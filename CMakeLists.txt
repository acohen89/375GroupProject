cmake_minimum_required(VERSION 3.20)
project(375GroupProject)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp BST.h item.h item.cpp)

add_executable(CS375GroupProject ${SOURCE_FILES})
