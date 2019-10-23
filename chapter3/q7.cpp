/*
 * Do exercise 6, but with three string values. So, if the user enters the values
 * Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.
 */

#include <iostream>
#include <string>

int main() {

    std::string firstValue, secondValue, thirdValue;

    std::cout << "Enter three string values: ";
    std::cin >> firstValue >> secondValue >> thirdValue;

    std::string min, max;
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