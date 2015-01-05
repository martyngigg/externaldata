cmake_minimum_required(VERSION 2.8.11 FATAL_ERROR)

project(ExternalDataTest)

################################################################################
# CMake Modules
################################################################################
include(CTest)

# Ours
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake)
find_package(CxxTest REQUIRED)

################################################################################
# Defaults
################################################################################
# Send libraries to common place
set ( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin )
set ( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin )

set(TESTING_TIMEOUT 120)

################################################################################
# Code
################################################################################
add_subdirectory(foobar)
