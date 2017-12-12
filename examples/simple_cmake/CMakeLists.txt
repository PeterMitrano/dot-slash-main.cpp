cmake_minimum_required(VERSION 2.8)
project(main)

add_executable(main main.cpp)
target_compile_definitions(main PRIVATE BASH)
