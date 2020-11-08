/*
 * Create a program to find all the prime numbers between 1 and 100.
 * There is a classic method for doing this, called the "Sieve of Erastosthenes."
 * If you don't know that method, get on the web and look it up.
 */
#include <iostream>
#include <vector>

int main() {
    std::vector<bool> primes;
    int max = 1000000;

    for(int i = 0; i <= max; i++) {
        primes.push_back(true);
    }

    primes[1] = false;

    for(int i = 1; i <= max; i++) {
        if(primes[i]) {
            int step = i;
            int index = i + step;

            while(index <= max) {
                primes[index] = false;
                index += step;
            }
        }
    }

    for(int i = 1; i < primes.size(); i++) {
        if(primes[i]) std::cout << i << " ";
    }
}