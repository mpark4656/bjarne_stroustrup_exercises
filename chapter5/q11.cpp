/*
 * Write a program that writes out the first so many values of the Fibonacci series, that is, the series that starts
 * with 1 1 2 3 5 8 13 21 34. The next number of the series is the sum of the two previous ones. Find the largest
 * Fibonacci number that fits in an int.
 */
#include <iostream>
#include <cinttypes>

int fibonacci(int n) {
    if(n <= 2) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for(size_t i = 1; i <= 9; i++) {
        std::cout << fibonacci(i) << " ";
    }

    uintmax_t num = 0;

    uintmax_t first = 1;
    uintmax_t second = 1;

    while(num < INT32_MAX) {
        num = first + second;
        second = first;
        first = num;
    }

    std::cout << std::endl << "The largest Fibonacci number that fits inside signed integer 32-bit is " << second;

    while(num < UINT32_MAX) {
        num = first + second;
        second = first;
        first = num;
    }

    std::cout << std::endl << "The largest Fibonacci number that fits inside unsigned integer 32-bit is " << second;

    return 0;
}