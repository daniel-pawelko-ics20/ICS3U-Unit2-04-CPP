// Copyright (c) 2021 Daniel Pawelko All rights reserved
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This program calculates price of pizza

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates price of a pizza
    double LABOR = 0.75;
    double RENT = 1.00;
    double CPI = 0.50;
    double HST = 0.13;
    double sub;
    double total;
    int diameter;

    // input
    std::cout << "Enter diameter of pizza (inch): ";
    std::cin >> diameter;

    // process
    sub = LABOR + RENT + (diameter * CPI);
    total = sub + (sub * HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "If the diameter of a pizza is: ";
    std::cout << diameter << " inches" << std::endl;
    std::cout << "The price would be: $";
    std::cout << std::fixed << std::setprecision(2) <<
    std::setfill('0') << total;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
