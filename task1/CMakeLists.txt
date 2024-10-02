cmake_minimum_required(VERSION 3.7)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
add_compile_options(-fPIC)

project(app)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(app app.c sim.c start.c)
target_link_libraries(app ${SDL2_LIBRARIES})