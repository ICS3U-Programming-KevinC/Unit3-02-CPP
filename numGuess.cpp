// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 5, 2022
// This program tells the user to guess between 0 and 9,
// then checks if they are correct

#include <iostream>

// declare necessary constants
const int SECRET_NUMBER = 7;

// declare necessary variables
int userGuess;

int main() {
    std::cout << "I'm thinking of a number between 0 and 9," << std::endl;
    std::cout << "What's your guess? ";
    std::cin >> userGuess;

    // Checks if the user's guess is correct or incorrect
    if (userGuess == SECRET_NUMBER) {
        std::cout << "\n\nCongratulations!, you guessed correctly" << std::endl;
    } else if (userGuess != SECRET_NUMBER) {
        std::cout << "Incorrect, try again some other time";
    }
}
