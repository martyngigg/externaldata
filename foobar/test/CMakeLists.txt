# A few tests to checkout out the ExternalData module

include_directories(SYSTEM ${CXXTEST_INCLUDE_DIR})

set(test_files
  ExampleUnitTestNoData.h
  ExampleUnitTestWithData.h
)

cxxtest_add_test(foobar_test ${test_files})
set_target_properties(foobar_test PROPERTIES
                      COMPILE_DEFINITIONS 
                        "TEST_DATA_DIR=\"${PROJECT_SOURCE_DIR}/Testing/Data\"")
