#include <iostream>

int main() {
    int num1, num2 = 0;

    std::cout << "Enter two numbers, one after another: " << std::endl;
    std::cin >> num1;
    std::cin >> num2;

    std::cout << "The sum of the numbers: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    return 0;
}