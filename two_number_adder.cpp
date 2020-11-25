// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
// This program adds 2 numbers

#include <iostream>
#include <cmath>

int main() {
    // This function adds 2 numbers

    double numberOne;
    double numberTwo;
    double total;

    std::cout << "" << std::endl;
    std::cout << "Please enter the first number: ";
    std::cin >> numberOne;
    std::cout << "Please enter the second number: ";
    std::cin >> numberTwo;
    std::cout << "" << std::endl;
    total = numberOne + numberTwo;
    std::cout << "The equation is " << numberOne << " + "
          << numberTwo << " = " << total << std::endl;
}
