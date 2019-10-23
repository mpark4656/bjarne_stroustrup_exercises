/*
 *  Write a program to test an integer value to determine if it is odd or even.
 *  As always, make sure your output is clear and complete.
 *  In other words, don't just output yes or no.
 *  Your output should stand alone, like "The value 4 is an even number."
 *  Hint: See the remainder operator.
 */
#include <iostream>

int main() {
    int value;

    std::cout << "Enter an integer: ";
    std::cin >> value;

    if(value % 2 == 0) {
        std::cout << value << " is even." << std::endl;
    } else {
        std::cout << value << " is odd." << std::endl;
    }

    return 0;
}
