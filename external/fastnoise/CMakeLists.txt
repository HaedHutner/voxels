add_library(
    fastnoise
    "${CMAKE_CURRENT_SOURCE_DIR}/FastNoise/FastNoise.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/FastNoise/FastNoise.cpp"
)

target_include_directories(fastnoise PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")