// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 5, 2025
// Number Guessing Game [Ethical Gambling]

#include <iostream>

// The correct number
const int CORRECT_NUM = 9;

int main() {
    // Get the user's guess
    int user_num;
    std::cout << "Enter a number (1-9): ";
    std::cin >> user_num;

    // Check if the user's guess is the same as the correct number
    if (user_num == CORRECT_NUM) {
        // Tell the user that they guessed correctly
        std::cout << "You guessed correctly!" << std::endl;
    }
    // Check if the user's guess is not the same as the correct number
    if (user_num != CORRECT_NUM) {
        // Tell the user that they guessed wrong
        std::cout << "You guessed wrong." << std::endl;
    }
}
