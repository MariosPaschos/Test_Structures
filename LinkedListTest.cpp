#include "LinkedListTest.h"

#include <iostream>
#include <algorithm>


void LinkedListTest::load() {
    for (int i = 0; i < dataStructSize; ++i) {
        l.push_front(getRandomElement());
    }
}

bool LinkedListTest::searchForRandElem() {
    return std::find(l.begin(), l.end(), getRandomElement()) != l.end();
}

const string LinkedListTest::getName() const {
    return "LinkedList";
}

LinkedListTest::~LinkedListTest() {
    l.clear();
}
