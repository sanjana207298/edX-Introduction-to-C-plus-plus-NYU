#include <iostream>

int main() {
    int quarters, dimes, nickels, pennies;

    std::cout << "Please enter the number of coins:\n";
    std::cout << "# of quarters: ";
    std::cin >> quarters;
    std::cout << "# of dimes: ";
    std::cin >> dimes;
    std::cout << "# of nickels: ";
    std::cin >> nickels;
    std::cout << "# of pennies: ";
    std::cin >> pennies;

    int totalCents = quarters * 25 + dimes * 10 + nickels * 5 + pennies;
    int dollars = totalCents / 100;
    int remainingCents = totalCents % 100;

    std::cout << "The total is " << dollars << " dollars and " << remainingCents << " cents" << std::endl;

    return 0;
}
