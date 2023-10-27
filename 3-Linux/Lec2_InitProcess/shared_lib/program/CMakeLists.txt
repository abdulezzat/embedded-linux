cmake_minimum_required(VERSION 3.0)
project (test_lib)
set(CMAKE_CXX_STANDARD 11)

find_library(DRAWABLE libDrawable.so)
message(STATUS ${DRAWABLE})

add_executable(test_lib main.cpp)
target_link_libraries(test_lib PRIVATE ${DRAWABLE})