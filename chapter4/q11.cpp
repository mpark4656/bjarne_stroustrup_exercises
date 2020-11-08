/*
 * Create a program to find all the prime numbers between 1 and 100.
 */
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> primes = {2, 3};

    for(int i = 4; i <= 100; i++) {
        bool isPrime = true;

        for(int j = 0; j < primes.size() && primes[j] <= std::sqrt(i) && isPrime; j++) {
            if(primes[j] != i && i % primes[j] == 0) {
                isPrime = false;
            }
        }
        if(isPrime) primes.push_back(i);
    }

    for(int num : primes) {
        std::cout << num << " ";
    }
}