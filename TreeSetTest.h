

#ifndef TEST_STRUCTURES_TREESETTEST_H
#define TEST_STRUCTURES_TREESETTEST_H

#include <set>
#include "Test.h"

using namespace std;

class TreeSetTest : public Test {
private:
    set<int> treeSet;
public:
    ~TreeSetTest() override;
    void load() override;
    bool searchForRandElem() override;
    const string getName() const override;
};


#endif //TEST_STRUCTURES_TREESETTEST_H
