
cmake_minimum_required(VERSION 3.4)

project(test_project)

add_subdirectory(libfoo)
add_executable(test_program main.c)
target_link_libraries(test_program PRIVATE foo)