cmake_minimum_required(VERSION 3.23)
project(Computergraphics)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
add_subdirectory(glad)

find_package(glfw3 3.3 REQUIRED)

add_executable(
        Computergraphics
        functions02.h
        main.cpp)

target_link_libraries(Computergraphics glfw)