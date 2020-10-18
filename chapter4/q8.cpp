/*
 * There is an old story that hte emperor wanted to thank the inventor of the game of chess and
 * asked the inventor to name his reward. The inventor asked for one grain of rice for the first square,
 * 2 for the second, 4 for the third, and so on, double for each of the 64 squares.
 * That may sound modes, but there wasn't that much rice in the empire!
 * Write a program to calculate how many squares are required to give the inventor at least
 * 1000 grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains.
 * You will need a loop, of course, and probably an int to keep track of which square you are at,
 * an int to keep the number of grains on the current squares, and int to keep track of the grains
 * on all previous squares. We suggest that you write out the value of all your variables for
 * each iteration of the loop so that you can see what's going on.
 */
#include <iostream>
#include <cmath>

int main() {
    const int TOTAL_SQUARES = 64;
    long long runningTotal = 0;
    bool millionThresholdReached = false;
    bool billionThresholdReached = false;

    for(int i = 0; i < TOTAL_SQUARES; i++) {
        runningTotal = std::pow(2, i);

        if(runningTotal > 1000000 && !millionThresholdReached) {
            std::cout << "1,000,000 reached at " << i + 1 << "th square" << std::endl;
            millionThresholdReached = true;
        }

        if(runningTotal > 1000000000 && !billionThresholdReached) {
            std::cout << "1,000,000,000 reached at " << i + 1 << "th square" << std::endl;
            billionThresholdReached = true;
        }
    }
}