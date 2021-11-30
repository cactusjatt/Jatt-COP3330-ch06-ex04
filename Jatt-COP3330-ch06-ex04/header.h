/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sarim Jatt
 */

#include <iostream>
#include <vector>

using namespace std;

class Name_value {
    public:
    string name;
    int value;

    Name_value(string inputtedName, int inputtedValue) {
        name = inputtedName;
        value = inputtedValue;
    }
};