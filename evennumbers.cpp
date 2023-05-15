#include <iostream>

int main() {
    int n;
    std::cout << "Please enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }

    int count = 0;
    int num = 2;

    while (count < n) {
        std::cout << num << std::endl;
        num += 2;
        count++;
    }

    return 0;
}
