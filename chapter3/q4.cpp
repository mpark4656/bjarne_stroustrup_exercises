/*
 * Created by mpark on 10/19/2019.
 * Question: Write a program that prompts the user to enter two integer values. Store these values in int variables
 * named val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of
 * these values and report them to the user.
 */

#include <iostream>

int main() {
    int val1 = 0;
    int val2 = 0;

    std::cout << "Enter two integer values: ";
    std::cin >> val1 >> val2;

    std::cout << "The smaller value is " << (val1 > val2 ? val2 : val1) << std::endl;
    std::cout << "The larger value is " << (val1 > val2 ? val1 : val2) << std::endl;
    std::cout << "The sum is " << val1 + val2 << std::endl;
    std::cout << "The difference of val1 and val2 is " << val1 - val2 << std::endl;
    std::cout << "The product is " << val1 * val2 << std::endl;
    std::cout << "The ratio is " << val1 / val2 << std::endl;

    return 0;
}