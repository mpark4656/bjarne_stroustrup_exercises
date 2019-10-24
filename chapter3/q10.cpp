/*
 * Write a program that takes an operation followed by tw0 operands and outputs the result.
 * For example:
 * + 100 3.14
 * * 4 5
 * Read the operation into a string called operation and use an
 * if-statement to figure out which operation the user wants.
 */
#include <iostream>
#include <string>

class Operand {
private:
    double operand;

public:
    Operand() {
        operand = 0;
    }

    explicit Operand(double operand) {
        this->operand = operand;
    }

    Operand operator- (const Operand & theOperand) {
        return Operand{this->operand - theOperand.operand};
    }

    Operand operator+ (const Operand & theOperand) {
        return Operand{this->operand + theOperand.operand};
    }

    Operand operator* (const Operand & theOperand) {
        return Operand{this->operand * theOperand.operand};
    }

    Operand operator/ (const Operand & theOperand) {
        return Operand{this->operand / theOperand.operand};
    }

    friend std::ostream & operator<< (std::ostream & os, const Operand & theOperand) {
        os << theOperand.operand;
        return os;
    }

    friend std::istream & operator>> (std::istream & is, Operand & theOperand) {
        double value;
        is >> value;
        theOperand.operand = value;
        return is;
    }
};

class Operation {
private:
    char operation;

    bool static IsValidOperation(char theOperation) {
        std::string allowedOperation = "+-/*";
        return allowedOperation.find(theOperation) != std::string::npos;
    }
public:
    explicit Operation(char operation) {
        if(IsValidOperation(operation)) {
            this->operation = operation;
        } else {
            throw std::invalid_argument("Not a valid operation");
        }
    }

    Operand operate(Operand firstOperand, Operand secondOperand) {
        switch(operation) {
            case '-':
                return firstOperand - secondOperand;
            case '+':
                return firstOperand + secondOperand;
            case '*':
                return firstOperand * secondOperand;
            case '/':
                return firstOperand / secondOperand;
            default:
                throw std::invalid_argument("Not a valid operation");
        }
    }
};

int main() {
    Operand firstOperand;
    Operand secondOperand;
    char opChar;

    std::cout << "Your input: ";
    std::cin >> opChar >> firstOperand >> secondOperand;

    Operation operation(opChar);

    std::cout << operation.operate(firstOperand, secondOperand) << std::endl;

    return 0;
}

