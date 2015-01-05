#ifndef EXAMPLEUNITTESTWITHDATA_H
#define EXAMPLEUNITTESTWITHDATA_H

#include <cxxtest/TestSuite.h>
#include <cstdio>
#include <fstream>
#include <string>

class ExampleUnitTestWithData : public CxxTest::TestSuite {
public:
  void test_That_Requires_Data() {
    std::string testfile(filepath("BSS_11841_event.nxs"));
    std::ifstream datafile(testfile.c_str());

    TS_ASSERT(datafile);
  }
private:
  /**
   * Simulates having some system for finding files when you are
   * just given the filename. TEST_DATA_DIR is a compiler
   * definition defined by CMake. In practice we will use
   * a properties file with the correct paths defined at 
   * cmake time
   */
  std::string filepath(const std::string & filename) {
    return std::string(TEST_DATA_DIR) + "/" + filename;
  }
};

#endif // EXAMPLEUNITTESTWITHDATA_H
