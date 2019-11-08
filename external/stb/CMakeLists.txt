# TODO

cmake_minimum_required(VERSION 3.12)
project(stb CXX)

add_library(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
    PRIVATE
   "${CMAKE_CURRENT_SOURCE_DIR}/stb/FastNoise.h"
   "${CMAKE_CURRENT_SOURCE_DIR}/FastNoise.cpp"
)

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")