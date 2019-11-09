cmake_minimum_required(VERSION 3.12)

project(placeholder)

add_subdirectory("external/stb")
add_subdirectory("external/fastnoise")
add_subdirectory("external/glad")
add_subdirectory("external/glfw")
add_subdirectory("external/glm")

link_directories("build")

add_executable(
    ${PROJECT_NAME}
    src/Main.cpp
)

target_link_libraries(placeholder PUBLIC glad)
target_link_libraries(placeholder PUBLIC glfw)
target_link_libraries(placeholder PUBLIC glm)
target_link_libraries(placeholder PUBLIC fastnoise)
target_link_libraries(placeholder PUBLIC stb)