cmake_minimum_required(VERSION 2.8.11 FATAL_ERROR)

project(ExternalDataTest)

set(EXTERNALDATATEST_SOURCE_DIR ${CMAKE_SOURCE_DIR})

################################################################################
# CMake Modules
################################################################################
include(CTest)
include(ExternalData)

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

find_package(CxxTest REQUIRED)
add_subdirectory(foobar)

################################################################################
# External Files
################################################################################

# None of our tests reference files directly as arguments so we have to manually
# call ExternalData_Expand_Arguments to register the files with the ExternalData
# mechanism
file( GLOB_RECURSE content_links
  RELATIVE "${EXTERNALDATATEST_SOURCE_DIR}" "Testing/Data/*.md5" )
foreach(link ${content_links})
  string( REGEX REPLACE "\\.md5$" "" link ${link} )
  message ( "Adding  file ${link}" )
  ExternalData_Expand_Arguments( TestingData
    link_location
    DATA{${link}}
    )
endforeach()

# Create target to download data from the TestingData group.  This must come after
# all tests have been added that reference the group, so we put it last.
ExternalData_Add_Target(TestingData)

