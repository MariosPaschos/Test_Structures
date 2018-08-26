#ifndef TEST_STRUCTURES_TEST_H
#define TEST_STRUCTURES_TEST_H

#include <cstddef>
#include <string>

using namespace std;

class Test {
protected:
    size_t numOfIters;
    size_t dataStructSize;
public:
    Test();
    virtual ~Test() = default;

    virtual const string getName() const = 0;
    virtual void load() = 0;
    virtual bool searchForRandElem() = 0;
    void runTests();
    void performMeasurements();
    int getRandomElement();
    void setNumOfTests(size_t numOfIters);
    void setStructSize(size_t dataStructSize);
};


#endif //TEST_STRUCTURES_TEST_H
