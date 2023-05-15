#include <iostream>

int main() {
    int dollars, cents;

    std::cout << "Please enter the amount of money to convert:\n";
    std::cout << "# of dollars: ";
    std::cin >> dollars;
    std::cout << "# of cents: ";
    std::cin >> cents;

    int totalCents = dollars * 100 + cents;
    int quarters = totalCents / 25;
    totalCents %= 25;
    int dimes = totalCents / 10;
    totalCents %= 10;
    int nickels = totalCents / 5;
    totalCents %= 5;
    int pennies = totalCents;

    std::cout << "The coins are " << quarters << " quarters, " << dimes << " dimes, ";
    std::cout << nickels << " nickels, and " << pennies << " pennies" << std::endl;

    return 0;
}
