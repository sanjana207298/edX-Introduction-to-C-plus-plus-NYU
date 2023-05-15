#include <iostream>
#include <iomanip>

int main() {
    double weight, height;

    std::cout << "Please enter weight in kilograms: ";
    std::cin >> weight;

    std::cout << "Please enter height in meters: ";
    std::cin >> height;

    double bmi = weight / (height * height);

    std::cout << "BMI is: " << std::fixed << std::setprecision(2) << bmi << std::endl;

    return 0;
}
