cmake_minimum_required(VERSION 2.6.0)

project(factory_method)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB srcs *.cpp)

set(CMAKE_CXX_FLAGS ${ADDITIONAL_CMAKE_CXX_FLAGS} "-O3 -msse2 -msse3 -Wall -std=c++11")

add_executable(FactoryMethod
			${srcs}
)
