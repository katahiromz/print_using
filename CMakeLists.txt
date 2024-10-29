# CMakeLists.txt --- CMake project settings
##############################################################################

# CMake minimum version
cmake_minimum_required(VERSION 3.5)

# project name and languages
project(print_using CXX)

##############################################################################

# print_using.exe
add_executable(print_using print_using.cpp)
target_compile_definitions(print_using PRIVATE -DUNITTEST -DJAPAN)

# libprint_using.a
add_library(libprint_using STATIC print_using.cpp)
target_compile_definitions(libprint_using PRIVATE -DJAPAN)
target_include_directories(print_using PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
set_target_properties(libprint_using PROPERTIES PREFIX "")

##############################################################################
