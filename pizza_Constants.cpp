// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program checks to see if the number guessed is the random number

#include <iostream>
#include <random>

int main() {
    // this program checks to see if the number guessed is the random number
    int mysteryNumber;
    int guessNumber;

    // input
    std::cout << "Enter a number(between 0-9): ";
    std::cin >> guessNumber;

    // process
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    mysteryNumber = idist(rgen);

    if (mysteryNumber == guessNumber) {
        // output
        std::cout << "You guessed correctly!";
    } else {
        std::cout << "\nYou guessed incorrectly. Try again.";
        std::cout << std::endl;
        std::cout << "\nThe correct number was: " << mysteryNumber << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
