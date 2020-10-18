/*
 * If we define the median as a sequence as "a number so that exactly as many elements come before it in the sequence
 * as come after it," fix the program so that it always prints out a median.
 * Hint: A median need not be an element of the sequence.
 */
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> temps;
    for(double temp; std::cin >> temp;) temps.push_back(temp);

    // Compute the mean
    double sum = 0;
    for(double x : temps) sum += x;

    std::cout << "Average temperature: " << sum / temps.size() << std::endl;

    // Compute median temperature
    std::sort(temps.begin(), temps.end());

    double median = 0;

    if(temps.size() > 0) {
        median = temps.size() % 2 == 0 ?
                 (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2 :
                 temps[temps.size() / 2];
    }
    std::cout << "Median temperature: " << median << std::endl;
}