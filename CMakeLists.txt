cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(Bit_Operations)

add_subdirectory(tests)

add_executable(Main_app Source.cpp Operations.cpp)
