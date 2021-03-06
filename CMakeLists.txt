cmake_minimum_required(VERSION 3.19)
project(Voxel)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)

find_package(SFML 2.5 COMPONENTS window REQUIRED)
find_package(glm REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

add_executable(Voxel_main src/main.cpp headers/Display.h src/Display.cpp headers/Application.h src/Application.cpp headers/states/GameState.h headers/states/Playing.h src/states/Playing.cpp src/states/GameState.cpp src/Model.cpp headers/Model.h headers/shaders/ShaderProg.h src/shaders/ShaderProg.cpp headers/shaders/ShaderLoader.h src/shaders/ShaderLoader.cpp headers/shaders/SimpleShader.h src/shaders/SimpleShader.cpp headers/textures/Texture.h src/textures/Texture.cpp)

target_link_libraries(Voxel_main sfml-audio sfml-graphics sfml-network sfml-system sfml-window glm OpenGL::GL GLEW::GLEW)