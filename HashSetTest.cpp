#include "HashSetTest.h"

#include <iostream>

void HashSetTest::load() {

    for (int i = 0; i < dataStructSize; ++i) {
        hashSet.insert(getRandomElement());
    }
}

bool HashSetTest::searchForRandElem() {

    return hashSet.find(getRandomElement()) != hashSet.end();
}

const string HashSetTest::getName() const {
    return "HashSet";
}

HashSetTest::~HashSetTest() {
    hashSet.clear();
}
