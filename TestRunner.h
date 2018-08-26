
#ifndef TEST_STRUCTURES_TESTRUNNER_H
#define TEST_STRUCTURES_TESTRUNNER_H


#include "Test.h"

#include <string>

using namespace std;

class TestRunner {
private:
    Test *t = nullptr;
public:
    TestRunner() = default;
    void selectDataStruct(string &ds);
    Test *getT() const;
};


#endif //TEST_STRUCTURES_TESTRUNNER_H
