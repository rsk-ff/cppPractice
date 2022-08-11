cmake_minimum_required(VERSION 3.5)

project(eigenMatrix)

include_directories("/usr/include/eigen3")

add_executable(Matrix eigenMatrix.cpp)