cmake_minimum_required(VERSION 3.19)
project(Voxel)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)

find_package(SFML 2.5 COMPONENTS window REQUIRED)
find_package(glm REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

add_executable(Voxel_main src/main.cpp headers/display.h src/display.cpp headers/Application.h src/Application.cpp headers/states/GameState.h headers/states/Playing.h src/states/Playing.cpp src/states/GameState.cpp)

target_link_libraries(Voxel_main sfml-audio sfml-graphics sfml-network sfml-system sfml-window glm OpenGL::GL GLEW::GLEW)