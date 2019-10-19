/*
 * Created by mpark on 10/19/2019.
 * Question: Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles.
 * Hint: There are 1.609 kilometers to the mile
 */
#include <iostream>

int main() {
    const double KILOMETERS_IN_MILE = 1.609;
    int miles = 0;

    std::cout << "Enter the number of miles: ";
    std::cin >> miles;
    std::cout << miles << " miles is " << miles * KILOMETERS_IN_MILE << " kilometers" << std::endl;

    return 0;
}