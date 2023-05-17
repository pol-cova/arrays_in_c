cmake_minimum_required(VERSION 3.23)
project(opencalc C)

set(CMAKE_C_STANDARD 23)

add_library(opencalc SHARED opencalc.c)
add_executable(example example.c)