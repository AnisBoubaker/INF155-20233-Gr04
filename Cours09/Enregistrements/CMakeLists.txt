cmake_minimum_required(VERSION 3.26)
project(Enregistrements C)

set(CMAKE_C_STANDARD 11)

add_executable(Enregistrements main.c
        t_lecture.c
        t_lecture.h)
