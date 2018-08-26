#include "Test.h"
#include "HashSetTest.h"
#include "LinkedListTest.h"
#include "TestRunner.h"

#include <iostream>
#include <list>

using namespace std;


int main(int argc, char* argv[]){

    string dataStruct = argv[1];
    int dsSize = stoi(argv[2]);
    int numOfTests = stoi(argv[3]);

    TestRunner testRunner;
    testRunner.selectDataStruct(dataStruct);
    Test *test = testRunner.getT();
    test->setStructSize(dsSize);
    test->setNumOfTests(numOfTests);
    test->performMeasurements();

    delete test;

    return 0;
}


