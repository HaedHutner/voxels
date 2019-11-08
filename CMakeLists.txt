cmake_minimum_required(VERSION 3.12)

project("placeholder")

add_subdirectory("external")

add_executable(
    ${PROJECT_NAME}
    src/Main.cpp
)