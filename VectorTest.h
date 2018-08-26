#ifndef TEST_STRUCTURES_VECTORTEST_H
#define TEST_STRUCTURES_VECTORTEST_H

#include "Test.h"

#include <vector>

using namespace std;

class VectorTest : public Test{
private:
    vector<int> vec;
public:
    ~VectorTest() override;
    void load() override;
    bool searchForRandElem() override;
    const string getName() const override;
};


#endif //TEST_STRUCTURES_VECTORTEST_H
