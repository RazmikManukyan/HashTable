cmake_minimum_required(VERSION 3.26)
project(CLionProjectsHash_table)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLionProjectsHash_table main.cpp
        HashTable.h
        MyUtils.h
        MyUtils.cpp
        HashTable.cpp)
