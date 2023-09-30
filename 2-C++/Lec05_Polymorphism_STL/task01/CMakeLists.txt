cmake_minimum_required(VERSION 3.0)

project(drawable)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/src)
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

add_executable(drawable main.cpp)
target_link_libraries(drawable LibProject)

