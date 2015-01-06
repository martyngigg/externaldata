cmake_minimum_required(VERSION 2.8.11 FATAL_ERROR)

project(ExternalDataTest)

set(EXTERNALDATATEST_SOURCE_DIR ${CMAKE_SOURCE_DIR})

################################################################################
# CMake Modules
################################################################################
include(CTest)

# Ours
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake)
include(FooExternalData)

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

# Create target to download data from the TestingData group.  This must come after
# all tests have been added that reference the group, so we put it last.
ExternalData_Add_Target(TestingData)
