#include <iostream>
#include <iomanip>

float calculator(float num1, float num2, char op) {
    float res;
    if (op == '+') {
        res = num1 + num2;
    } else if (op == '-') {
        res = num1 - num2;
    } else if (op == '/') {
        res = num1 / num2;
    } else if (op == '*') {
        res = num1 * num2;
    } else {
        std::cout << "Invalid operator!" << std::endl;
        return 0;
    }
    return res;
}

int main() {
    float num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;


    std::cout << "Enter an operator : ";
    std::cin >> op;

    float result = calculator(num1, num2, op);
    std::cout << "Result = " << std::fixed << std::setprecision(2) <<result << std::endl;

    return 0;
}
