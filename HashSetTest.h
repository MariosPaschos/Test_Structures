#ifndef TEST_STRUCTURES_HASHSETTEST_H
#define TEST_STRUCTURES_HASHSETTEST_H

#include "Test.h"

#include <unordered_set>

using namespace std;

class HashSetTest : public Test{
private:
    unordered_set<int> hashSet;
public:
    ~HashSetTest() override;
    void load() override;
    bool searchForRandElem() override;
    const string getName() const override;
};


#endif //TEST_STRUCTURES_HASHSETTEST_H

