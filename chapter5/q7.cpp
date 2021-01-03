/*
 * Write a program that can calculate x for a quadratic equation.
 * Create a function that prints out the roots of a quadratic equation, given a, b, c.
 * When the program detects an equation with no real roots, have it print out a message.
 * How do you know that your results are plausible? Can you check that they are correct?
 */
#include <cmath>
#include <iostream>

int main() {
    double a, b, c;

    a = 1;
    b = 1;
    c = -2;

    bool imaginary = false;
    double denominator = 2 * a;
    double insideSqrt = b * b - 4 * a * c;

    if(insideSqrt < 0) {
        std::cout << "There are no real number solutions" << std::endl;
        insideSqrt = insideSqrt * -1;
        imaginary = true;
    }

    double numeratorOne = -1 * b - std::sqrt(insideSqrt);
    double numeratorTwo = -1 * b + std::sqrt(insideSqrt);

    double answerOne = numeratorOne / denominator;
    double answerTwo = numeratorTwo / denominator;

    std::cout << "The answers are ";
    if(!imaginary) std::cout << answerOne << " and " << answerTwo << std::endl;
    else std::cout << answerOne << "i and " << answerTwo << "i" << std::endl;
}