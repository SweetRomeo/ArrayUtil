cmake_minimum_required(VERSION 3.23)
project(Product C)

set(CMAKE_C_STANDARD 17)

add_executable(Product main.c ArrayUtil.h ArrayUtil.c)
