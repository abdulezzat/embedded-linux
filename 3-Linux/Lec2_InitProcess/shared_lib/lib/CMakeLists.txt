cmake_minimum_required(VERSION 3.0)
project (shap_lib)
set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")
file(GLOB_RECURSE HEADERS RELATIVE ${CMAKE_SOURCE_DIR} "include/*.h")
# add_library(PrimeUtil SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/Point.cpp)
add_library(Drawable SHARED ${SOURCES})

install(TARGETS Drawable DESTINATION /usr/lib)
install(FILES ${HEADERS} DESTINATION include)