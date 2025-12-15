cmake_minimum_required (VERSION 3.10)
project(src)

find_package(SDL2 REQUIRED)

add_executable(src src.c)
target_link_libraries(src PRIVATE SDL2::SDL2)
