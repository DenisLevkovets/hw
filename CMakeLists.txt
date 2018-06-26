# cmake_minimum_required(VERSION <specify CMake version here>)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled src/main.c)
add_executable(untitled src/getch.c)
add_executable(untitled src/getop.c)
add_executable(untitled src/stack.c)
add_executable(untitled src/calc.h)