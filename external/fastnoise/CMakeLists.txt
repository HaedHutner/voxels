cmake_minimum_required(VERSION 3.12)
project(fastnoise CXX)

add_library(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
    PRIVATE
   "${CMAKE_CURRENT_SOURCE_DIR}/FastNoise/FastNoise.h"
   "${CMAKE_CURRENT_SOURCE_DIR}/FastNoise/FastNoise.cpp"
)

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")