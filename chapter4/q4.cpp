/*
 * Write a program to play a numbers guessing game.
 * The user thinks of a number between 1 and 100 and your program asks
 * questions to figure out what the number is.
 * Your program should be able to identify the number after asking no more than seven questions.
 */
#include <iostream>
#include <cmath>

int main() {
    int low = 1;
    int high = 100;
    int tries = 1;

    while(low != high) {
        char answer;
        int keyValue = (high + low) / 2;

        std::cout << "Attempt " << tries << ": ";
        std::cout << "Is the number higher than " << keyValue << "? ";
        std::cin >> answer;

        if(answer == 'Y' || answer == 'y') {
            low = keyValue + 1;
        } else if(answer == 'N' || answer == 'n') {
            high = keyValue;
        } else {
            std::cout << "Not a valid answer!\n";
            tries --;
        }

        tries++;
    }

    std::cout << "The number is " << low << std::endl;
}