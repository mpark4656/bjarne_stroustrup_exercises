/*
 * Write a program that prompts user to enter some number of pennies, nickels,
 * dimes, quarters, half dollars, and one-dollar coins. Query the user separately
 * for the number of each size coin. Then your program should print out something like this:
 * You have 23 pennies.
 * You have 17 nickels.
 * You have 14 dimes.
 * You have 7 quarters.
 * You have 3 half dollars.
 * The value of all your coins is 573 cents.
 */
#include <iostream>
#include <string>

void promptForAmount(const std::string & literal, int & amount) {
    std::cout << "How many " << literal << " do you have: ";
    std::cin >> amount;
}

void outputAmounts(const std::string & literal, const int & amount) {
    if(amount != 0) {
        std::cout << "You have " << amount << " " << literal << ".\n";
    }
}

int sum(int pennies, int nickels, int dimes, int quarters, int halfDollars, int dollars) {
    return pennies + nickels * 5 + dimes * 10 + quarters * 25 + halfDollars * 50 + dollars * 100;
}

int main() {
    int pennies = 0, nickels = 0, dimes = 0, quarters = 0, halfDollars = 0, dollars = 0;

    promptForAmount("pennies", pennies);
    promptForAmount("nickels", nickels);
    promptForAmount("dimes", dimes);
    promptForAmount("quarters", quarters);
    promptForAmount("half-dollars", halfDollars);
    promptForAmount("dollars", dollars);

    outputAmounts(pennies == 1 ? "penny" : "pennies", pennies);
    outputAmounts(pennies == 1 ? "nickel" : "nickels", nickels);
    outputAmounts(pennies == 1 ? "dime" : "dimes", dimes);
    outputAmounts(pennies == 1 ? "quarter" : "quarters", quarters);
    outputAmounts(pennies == 1 ? "half-dollar" : "half-dollars", halfDollars);
    outputAmounts(pennies == 1 ? "dollar" : "dollars", dollars);
    std::cout << "The value of all of your coins is " << sum(pennies, nickels, dimes, quarters, halfDollars, dollars) << " cents\n";

    return 0;
}