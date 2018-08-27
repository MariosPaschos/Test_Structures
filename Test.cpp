
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

    ofstream logs;
    logs.open("/home/marios/Desktop/Software Projects/C++_Projects/Test_Structures/logged_stats.txt", ios_base::app);

    if (logs.is_open()) {
        cout << this->getName() << " ";
        logs << this->getName() << " ";

        cout << this->dataStructSize << " ";
        logs << this->dataStructSize << " ";

        cout << this->numOfIters << " ";
        logs << this->numOfIters << " ";

        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        this->load();
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
        cout << time_span.count() << " ";
        logs << time_span.count() << " ";
        t1 = high_resolution_clock::now();
        this->runTests();
        t2 = high_resolution_clock::now();
        time_span = duration_cast<duration<double>>(t2 - t1);
        cout << time_span.count() << endl;
        logs << time_span.count() << endl;
        logs.close();
    }
    else cout << "Unable to open file";
}

void Test::setNumOfTests(size_t numOfIters) {
    this->numOfIters = numOfIters;
}

void Test::setStructSize(size_t dataStructSize) {
    this->dataStructSize = dataStructSize;
}


