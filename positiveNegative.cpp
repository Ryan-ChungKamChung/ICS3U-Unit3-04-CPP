// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program saying if an integer is positive or negative


#include <iostream>


int main() {
    // this function generates a random number and checks if it is equal to
        // the user inputted number

    int integer;

    std::cout << "Input a number and I'll tell you if it is "
    "zero, negative or positive" << std::endl;

    // Input
    std::cout << "Please enter an integer: ";
    std::cin >> integer;

    // Process
    if (integer > 0) {
        // Output
        std::cout << "The inputted integer is positive." << std::endl;
    } else if (integer < 0) {
        // Output
        std::cout << "The inputted integer is negative." << std::endl;
    } else {
        // Output
        std::cout << "The inputted integer is 0." << std::endl;
    }
}
