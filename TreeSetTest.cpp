#include "TreeSetTest.h"

#include <iostream>

void TreeSetTest::load() {

    for (int i = 0; i < dataStructSize; ++i) {
        treeSet.insert(getRandomElement());
    }
}

bool TreeSetTest::searchForRandElem() {

    return treeSet.find(getRandomElement()) != treeSet.end();
}

const string TreeSetTest::getName() const {
    return "TreeSet";
}

TreeSetTest::~TreeSetTest() {
    treeSet.clear();
}
