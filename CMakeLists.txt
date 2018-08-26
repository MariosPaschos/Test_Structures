cmake_minimum_required(VERSION 3.12)
project(Test_Structures)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Test_Structures
        CMakeLists.txt
        HashSetTest.cpp
        HashSetTest.h
        LinkedListTest.cpp
        LinkedListTest.h
        main.cpp
        Structures_Testing.py
        Test.cpp
        Test.h
        TestRunner.cpp
        TestRunner.h
        TreeSetTest.cpp
        TreeSetTest.h
        Utils.h
        VectorTest.cpp
        VectorTest.h)
