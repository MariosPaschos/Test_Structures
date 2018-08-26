#include "VectorTest.h"

#include <iostream>
#include <algorithm>


void VectorTest::load() {
    vec.resize(dataStructSize);
    for (int i = 0; i < dataStructSize; ++i) {
        vec[i] = getRandomElement();
    }
}

bool VectorTest::searchForRandElem() {

    return std::find(vec.begin(), vec.end(), getRandomElement()) != vec.end();
}

const string VectorTest::getName() const {
    return "Vector";
}

VectorTest::~VectorTest() {
    vec.clear();
}
