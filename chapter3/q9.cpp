/*
 * Write a program that converts spelled out numbers such as "zero" and "two" into digits such as 0 and 2.
 * When the user inputs a number, the program should print out the corresponding digit.
 * Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know
 * if the user enters something that doesn't correspond.
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

int main() {

    const std::vector<std::pair<std::string, int>> NUMBER_SPELLINGS {
        std::pair<std::string, int> { "ZERO", 0 },
        std::pair<std::string, int> { "ONE", 1 },
        std::pair<std::string, int> { "TWO", 2 },
        std::pair<std::string, int> { "THREE", 3 },
        std::pair<std::string, int> { "FOUR", 4 }
    };

    std::string numberString;
    std::cout << "Your input: ";
    std::cin >> numberString;
    int number = -1;

    std::for_each(
            numberString.begin(),
            numberString.end(),
            [] (char & character) { character = std::toupper(character); }
    );

    std::for_each(
            NUMBER_SPELLINGS.begin(),
            NUMBER_SPELLINGS.end(),
            [&] (const std::pair<std::string, int> & pair) { if(numberString == pair.first) number = pair.second; }
    );

    std::cout << number << std::endl;
}