#include <iostream>

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Please provide a year as a command line argument." << std::endl;
        return 1;
    }

    int year = std::stoi(argv[1]);

    if (isLeapYear(year)) {
        std::cout << year << " was a leap year" << std::endl;
    } else {
        std::cout << year << " was not a leap year" << std::endl;
    }

    return 0;
}
