// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Nov.22, 2022
// This program converts celsius to fahrenheit

#include <iostream>
#include <string>

// Function for converting celsius to fahrenheit
void fahrenheit() {
    // Declaring variables
    float tempC, tempF;
    std::string tempCStr, wait;

    // Gets the celsius temperature as a string
    std::cout << "Enter the temperature in celsius : ";
    std::cin >> tempCStr;

    // Tries casting celsius temperature to a float
    try {
        tempC = std::stof(tempCStr);
    } catch (...) {
        std::cout << "You must enter a number.";
        std::cin >> wait;
    }

    // Calculates the temperature in fahrenheit
    tempF = tempC * 9 / 5 + 32;

    // Displays the temperature in fahrenheit
    std::cout << tempC << "(C) = " << tempF << "(F)";
    std::cout << "\n";
}

int main() {
    // Calls the fahrenheit function
    fahrenheit();
}
