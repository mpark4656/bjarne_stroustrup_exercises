/*
 * Created by mpark on 10/19/2019.
 * Question: Modify the program above to ask the user to enter floating-point vaues and store them in double variables.
 * Compare the outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? What's the difference?
 */
#include <iostream>

int main() {
    double val1 = 0;
    double val2 = 0;

    std::cout << "Enter two values: ";
    std::cin >> val1 >> val2;

    std::cout << "The smaller value is " << (val1 > val2 ? val2 : val1) << std::endl;
    std::cout << "The larger value is " << (val1 > val2 ? val1 : val2) << std::endl;
    std::cout << "The sum is " << val1 + val2 << std::endl;
    std::cout << "The difference of val1 and val2 is " << val1 - val2 << std::endl;
    std::cout << "The product is " << val1 * val2 << std::endl;
    std::cout << "The ratio is " << val1 / val2 << std::endl;

    return 0;
}
