#ifndef TEST_STRUCTURES_UTILS_H
#define TEST_STRUCTURES_UTILS_H

#include <random>

using namespace std;

namespace utils {

    // Numerical values: int, floats, doubles etc
    template <class T>
    T randomElement(){
        std::random_device rd;
        std::mt19937 mt(rd());      // Initialize random seed
        std::uniform_int_distribution<T> dist(0, INT32_MAX);
        T randValue = dist(mt);
        return randValue;
    }
};


#endif //TEST_STRUCTURES_UTILS_H
