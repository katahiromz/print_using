# CMakeLists.txt --- CMake project settings
##############################################################################

# CMake minimum version
cmake_minimum_required(VERSION 3.5)

# project name and languages
project(print_using CXX)

# JAPAN or not?
option(JAPAN "Enable JAPAN support" ON)
if(JAPAN)
    add_definitions(-DJAPAN)
endif()

# Source code UTF-8 support
if(MSVC)
    set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}   /utf-8")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /utf-8")
endif()

##############################################################################

# print_using.exe
add_executable(print_using print_using.cpp)
target_compile_definitions(print_using PRIVATE PRINT_USING_EXE)
if(MSVC)
    target_link_options(print_using PRIVATE /MANIFEST:NO)
endif()

# libprint_using.a
add_library(libprint_using STATIC print_using.cpp)
target_include_directories(print_using PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
set_target_properties(libprint_using PROPERTIES PREFIX "")

##############################################################################
