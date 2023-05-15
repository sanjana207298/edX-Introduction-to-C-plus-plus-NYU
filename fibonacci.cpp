#include <iostream>

int main() {
    int n;
    std::cout << "Please enter a positive integer greater than 1: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "Invalid input. Please enter a positive integer greater than 1." << std::endl;
        return 1;
    }

    int num1 = 1;
    int num2 = 1;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;

    for (int i = 3; i <= n; i++) {
        int fib = num1 + num2;
        std::cout << fib << std::endl;
        num1 = num2;
        num2 = fib;
    }

    return 0;
}
