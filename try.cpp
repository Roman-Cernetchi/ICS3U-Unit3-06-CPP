// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program uses a try statement

#include <iostream>
#include <string>
#include <random>

main() {
    // this function uses a try statement
    std::string chosen_number_string;
    int someRandomNumber;
    int chosen_number;

    std::cout << someRandomNumber << std::endl;

    // input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> chosen_number_string;
    std::cout << "" << std::endl;

    // process & output
    try {
        chosen_number = std::stoi(chosen_number_string);

        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
        someRandomNumber = idist(rgen);

        if (chosen_number == someRandomNumber) {
            // output
            std::cout << "Correct!" << std::endl;
        } else {
            // output
            std::cout << "The correct number is: "
            << someRandomNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        //output
        std::cout << "That was not a valid integer" << std::endl;
    }
}
