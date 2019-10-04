// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: September 2019
// This program lets user to guess a number and see if it's correct

#include <iostream>

int main() {
    // This function lets user to guess a number and see if it's correct
    const int chosen_number = 7;
    int guess_number;

    // input
    std::cout << "Enter a number between 0 to 9: ";
    std::cin >> guess_number;
    std::cout << "" << std::endl;

    // process1
    if (guess_number == chosen_number) {
        // output1
        std::cout << "correct, good guess ";
    }
    // process2
    if (guess_number != chosen_number) {
        // output2
        std::cout << "wrong, better luck next time  ";
    }
}
