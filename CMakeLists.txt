cmake_minimum_required(VERSION 3.12)
project(LWCC C)

set(CMAKE_C_STANDARD 11)

add_executable(LWCC src/main.c src/util.h src/util.c)