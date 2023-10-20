cmake_minimum_required(VERSION 3.26)
project(Tab2D C)

set(CMAKE_C_STANDARD 11)

add_executable(Tab2D main.c
        temperatures.c
        temperatures.h
        modules/test.c
        modules/test.h)
