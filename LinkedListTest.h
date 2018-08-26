#ifndef TEST_STRUCTURES_LINKEDLISTTEST_H
#define TEST_STRUCTURES_LINKEDLISTTEST_H

#include "Test.h"

#include <list>

using namespace std;

class LinkedListTest : public Test {
private:
    list<int> l;
public:
    ~LinkedListTest() override;
    void load() override;
    bool searchForRandElem() override;
    const string getName() const override;
};


#endif //TEST_STRUCTURES_LINKEDLISTTEST_H
