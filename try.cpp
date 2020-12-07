// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program uses a try statement

#include <iostream>
#include <string>
#include <random>

int main() {
    // this function uses a try statement
    std::string chosen_number;
    int integer_number;
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    std::cout << someRandomNumber << std::endl;

    // input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> chosen_number;
    std::cout << "" << std::endl;

    // process & output
    try {
        integer_number = std::stoi(chosen_number);
        std::cout << "" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer"; }

    if (std::stoi(chosen_number) == someRandomNumber) {
        std::cout << "Correct!";
    } else {
        std::cout << "The correct number is " << someRandomNumber << std::endl;
    }
}
