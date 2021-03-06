/*
 * Read a sequence of double values into a vector. Think of each value as the distance between
 * two cities along a given route. Compute and print the total distance (the sum of all distances).
 * Find and print the smallest and greatest distance between two neighboring cities. Find and print the
 * mean distance between two neighboring cities.
 */
#include <iostream>
#include <vector>

int main() {
    std::vector<double> distances;
    for(double distance; std::cin >> distance;) distances.push_back(distance);

    double sum = 0;
    double smallest = INT64_MAX;
    double largest = INT64_MIN;

    for(double distance : distances) {
        sum += distance;
        if(distance > largest) largest = distance;
        if(distance < smallest) smallest = distance;
    }

    std::cout << "The sum of all distances is " << sum << std::endl;
    std::cout << "The smallest distance is " << smallest << std::endl;
    std::cout << "The largest distance is " << largest << std::endl;
    std::cout << "The mean distance is " << sum / distances.size() << std::endl;
}