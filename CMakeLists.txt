cmake_minimum_required(VERSION 3.12)

project(placeholder)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory("external/stb")
add_subdirectory("external/fastnoise")
add_subdirectory("external/glad")
add_subdirectory("external/glfw")
add_subdirectory("external/glm")

add_executable(
    ${PROJECT_NAME}
    src/Main.cpp
)

target_link_libraries(${PROJECT_NAME} PUBLIC glad glfw glm fastnoise stb)