// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Mar. 4, 2025

/* This program asks the user for the radius and
then displays the area and circumference using pi in cm (and in two decimal places). */

// Include stream, manip, and math modules.
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // Set the pi constant.
    const float PI = M_PI;

    // Declare the variables.
    float radius, area, circumference;

    // Get the radius from the user.
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // Calculate the area.
    area = PI * pow(radius, 2);

    // Calculate the circumference.
    circumference = 2 * PI * radius;

    // Display the area to the user.
    std::cout << "\nArea = " << std::fixed
    << std::setprecision(2) << std::setfill('0') << area << " cm^2\n";

    // Display the circumference to the user.
    std::cout << "Circumference = " << std::fixed
    << std::setprecision(2) << std::setfill('0') << circumference << " cm\n";
}
