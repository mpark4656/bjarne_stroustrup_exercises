/*
 * Read a sequence of double values into a vector.
 * Think of each value as the distance between two cities along a given route.
 * Compute and print the total distance (the sum of all distances).
 * Find and print the smallest and greatest distance between two neighboring cities.
 * Find and print the mean distance between two neighboring cities.
 */
#include <iostream>
#include <vector>

int main() {
    std::vector<double> distances;

    std::cout << "Enter values: ";
    bool first = true;
    double min = 0, max = 0, sum = 0, average = 0;

    for(double value; std::cin >> value; ) {
        distances.push_back(value);
        sum += value;

        if(first) {
            min = value;
            max = value;
            first = false;
        } else {
            if(value > max) max = value;
            if(value < min) min = value;
        }
    }

    average = sum / distances.size();

    printf("Total: %f\nMinimum Distance: %f\nMaximum Distance: %f\nMean Distance: %f\n", sum, min, max, average);

    return 0;
}