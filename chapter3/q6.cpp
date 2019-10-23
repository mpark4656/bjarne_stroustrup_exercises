/*
 * Write a program that prompts the user to enter three integer values,
 * and then outputs the values in numerical sequence separated by commas.
 * So, if the user enters the values 10, 4, 6, the output should be 4, 6, 10.
 * If two values are the same, they should just be ordered together.
 * So, the input 4 5 4 should give 4, 4, 5.
 */

#include <iostream>

int main() {
    int firstValue, secondValue, thirdValue;

    std::cout << "Enter three values: ";
    std::cin >> firstValue >> secondValue >> thirdValue;

    int min, max;
    bool first = false, second = false;

    if(firstValue > secondValue && firstValue > thirdValue) {
        max = firstValue;
        first = true;
    } else if(secondValue > firstValue && secondValue > thirdValue) {
        max = secondValue;
        second = true;
    } else {
        max = thirdValue;
    }

    if(secondValue < firstValue && secondValue < thirdValue) {
        min = secondValue;
        second = true;
    } else if(firstValue < secondValue && firstValue < thirdValue) {
        min = firstValue;
        first = true;
    } else {
        min = thirdValue;
    }

    if(!first) {
        std::cout << min << " " << firstValue << " " << max;
    } else if(!second) {
        std::cout << min << " " << secondValue << " " << max;
    } else {
        std::cout << min << " " << thirdValue << " " << max;
    }


    std::cout << std::endl;
    return 0;
}