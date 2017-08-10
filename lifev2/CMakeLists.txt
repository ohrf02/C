cmake_minimum_required(VERSION 3.8)
project(lifev2)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(lifev2 ${SOURCE_FILES})