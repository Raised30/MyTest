cmake_minimum_required(VERSION 3.23)
project(AED_PROJETO)

set(CMAKE_CXX_STANDARD 14)

set(Headers ../menu.h)

add_executable(AED_PROJETO ../management.cpp ../menu.cpp)
add_executable(TextManipulation .. ../menu.cpp ../management.cpp)
