cmake_minimum_required(VERSION 3.17)
project(isometric_world)

set(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++2a -pthread")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_subdirectory(src)

