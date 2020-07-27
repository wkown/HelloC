cmake_minimum_required(VERSION 3.15)
project(HelloC C)

set(CMAKE_C_STANDARD 11)

add_executable(HelloC main.c myLib/testLib.h myLib/testLib.c)