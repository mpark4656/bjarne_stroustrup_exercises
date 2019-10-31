/*
 *  If we define the median of a sequence as "a number so that exactly as mane
 *  elements come before it in the sequence as come after it",
 *  fix the program in 4.6.3 so that it always prints out a median.
 *
 *  HINT: A median need not be an element of the sequence.
 */
#include <algorithm>
#include <iostream>
#include <vector>

double getMedian(const std::vector<double> & temps) {
    if(temps.size() % 2 == 0) {
        return (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2;
    } else {
        return temps[temps.size() / 2];
    }
}

int main() {
    std::vector<double> temps;
    for(double temp ; std::cin >> temp; ) {
        temps.push_back(temp);
    }

    double sum = 0;
    for(double temp : temps) {
        sum += temp;
    }

    std::cout << "Average temperature: " << sum / temps.size() << std::endl;

    std::sort(temps.begin(), temps.end());

    std::cout << "Median temperature: " << getMedian(temps) << std::endl;

    return 0;
}
