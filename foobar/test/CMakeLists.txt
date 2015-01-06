# A few tests to checkout out the ExternalData module

include_directories(SYSTEM ${CXXTEST_INCLUDE_DIR})

set(test_files
  ExampleUnitTestNoData.h
  ExampleUnitTestWithData.h
)

cxxtest_add_test(foobar_test ${test_files})
# Hack so that the test can find file using just a filename
# Full solution will use file finder and properties file
set_target_properties(foobar_test PROPERTIES
                      COMPILE_DEFINITIONS 
                        "TEST_DATA_DIR=\"${PROJECT_BINARY_DIR}/ExternalData/Testing/Data\"")

# Make sure the files are downloaded if required
add_dependencies(foobar_test TestingData)

