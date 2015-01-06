# A few tests to checkout out the ExternalData module

#include_directories(SYSTEM ${CXXTEST_INCLUDE_DIR})

#set(test_files
#  ExampleUnitTestNoData.h
#  ExampleUnitTestWithData.h
#)

#set(test_data_files
#  
#)

#set_target_properties(foobar_test PROPERTIES
#                      COMPILE_DEFINITIONS 
#                        "TEST_DATA_DIR=\"${ExternalData_OBJECT_STORES}\"")

# Basic command to test the file linking has done what is expected
ExternalData_Add_Test(TestingData
  NAME foobar_test
  COMMAND ${CMAKE_COMMAND} -E md5sum DATA{${EXTERNALDATATEST_SOURCE_DIR}/Testing/Data/BSS_11841_event.nxs}
  )

