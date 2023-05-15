#include <iostream>

int main() {
    int num1, num2, num3, num4;
    int evenCount = 0, oddCount = 0;

    std::cout << "Please enter 4 positive integers, separated by a space: ";
    std::cin >> num1 >> num2 >> num3 >> num4;

    if (num1 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num2 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num3 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num4 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (evenCount > oddCount)
        std::cout << "more evens" << std::endl;
    else if (oddCount > evenCount)
        std::cout << "more odds" << std::endl;
    else
        std::cout << "same number of evens and odds" << std::endl;

    return 0;
}
