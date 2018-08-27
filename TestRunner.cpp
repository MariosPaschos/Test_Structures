
#include "TestRunner.h"
#include "HashSetTest.h"
#include "TreeSetTest.h"
#include "VectorTest.h"
#include "LinkedListTest.h"
#include <fstream>

void TestRunner::selectDataStruct(string &ds) {

    if (ds == "HS") {
        t = new HashSetTest();
        return;
    }
    else if (ds == "TS") {
        t = new TreeSetTest();
        return;
    }
    else if (ds == "V") {
        t = new VectorTest();
        return;
    }
    else if (ds == "LL") {
        t = new LinkedListTest();
        return;
    }
}

Test *TestRunner::getT() const {
    return t;
}
