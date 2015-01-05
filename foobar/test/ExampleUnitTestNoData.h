#ifndef EXAMPLEUNITTESTNODATA_H
#define EXAMPLEUNITTESTNODATA_H

#include <cxxtest/TestSuite.h>
#include <cstdio>

class ExampleUnitTestNoData : public CxxTest::TestSuite {
public:
  void test_That_Requires_No_Data() {
    TS_ASSERT_EQUALS(1,1);
  }
};

#endif // EXAMPLEUNITTESTNODATA_H
