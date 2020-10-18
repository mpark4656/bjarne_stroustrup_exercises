/*
 * Write a program hat performs as a very simple calculator.
 * Your calculator should be able to handle the four basic math operations -
 * add, subtract, multiply, and divide - on two input values.
 * Your program should prompt the user to enter three arguments:
 * two double values and a character to represent an operation.
 * If the entry arguments are 35.6, 24.1, and '+', the program output should be
 * "The sum of 35.6 and 24.1 is 59.7".
 * In Chapter 6 we look at a much more sophisticated simple calculator.
 */
#include <iostream>

int main() {
    double value1, value2;
    char operation;

    std::cout << "Enter a calculation: ";
    std::cin >> value1 >> value2 >> operation;

    switch(operation) {
        case '+':
            std::cout << "The sum of " << value1 << " and " << value2 << " is " << value1 + value2 << std::endl;
            break;
        case '-':
            std::cout << "The difference of " << value1 << " and " << value2 << " is " << value1 - value2 << std::endl;
            break;
        case '*':
            std::cout << "The product of " << value1 << " and " << value2 << " is " << value1 * value2 << std::endl;
            break;
        case '/':
            std::cout << value1 << " divided by " << value2 << " is " << value1 / value2 << std::endl;
            break;
        default:
            std::cout << "Invalid Operation" << std::endl;
    }
}