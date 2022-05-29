cmake_minimum_required(VERSION 3.18)
enable_testing()
configure_file(
    "${CMAKE_SOURCE_DIR}/extern/pigpio/pigpio.h"
    "${CMAKE_BINARY_DIR}/include/${library_name}/pigpio.h"
)
add_library(${library_name} STATIC "pigpio.cpp")
target_include_directories(${library_name} PRIVATE
    "${CMAKE_SOURCE_DIR}/extern/pigpio"
)
target_include_directories(${library_name} PUBLIC $<INSTALL_INTERFACE:include>)
