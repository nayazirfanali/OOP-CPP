#include <iostream>
#include <cmath>   

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Error: Square root of a negative number is not defined in the real number system." << std::endl;
    } else if (number == 0) {
        std::cout << "The square root of 0 is 0." << std::endl;
    } else {
        double result = std::sqrt(number);
        std::cout << "The square root of " << number << " is " << result << "." << std::endl;
    }

    return 0;
}