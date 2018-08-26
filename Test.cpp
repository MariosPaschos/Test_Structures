
#include "Test.h"
#include "Utils.h"
#include <chrono>
#include <iostream>
#include <iomanip>

using namespace std::chrono;

Test::Test() : numOfIters(0), dataStructSize(0) {}


int Test::getRandomElement() {
    return utils::randomElement<int>();
}

void Test::runTests() {
    for (int i = 0; i < numOfIters; ++i) {
        searchForRandElem();
    }
}


void Test::performMeasurements() {
    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << this->getName() << " ";
    cout << this->dataStructSize << " ";
    cout << this->numOfIters << " ";
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    this->load();
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    //cout << "Finished loading " <<  this->getName() <<  endl;
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    cout << time_span.count() << " ";
    //cout << "Loading of " << this->getName() << " ran in: " << time_span.count() << " seconds." << endl;
    //cout << "-------------------------------------------" << endl;
    //cout << "Start searching " <<  this->getName() << " for random element..." << endl;
    t1 = high_resolution_clock::now();
    this->runTests();
    t2 = high_resolution_clock::now();
    //cout << "Finished searching " << this->getName() << " for random element." << endl;
    time_span = duration_cast<duration<double>>(t2 - t1);
    cout << time_span.count() << endl;
    //cout << "Searching of " <<  this->getName() << " ran in: " << time_span.count() << " seconds." << endl;
}

void Test::setNumOfTests(size_t numOfIters) {
    this->numOfIters = numOfIters;
}

void Test::setStructSize(size_t dataStructSize) {
    this->dataStructSize = dataStructSize;
}

