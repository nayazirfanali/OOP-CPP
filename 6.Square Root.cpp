#include <iostream>
#include <cmath> // for std::sqrt
#include <string> // for std::string handling

bool isNumber(const std::string& input) {
    // Function to check if the input string is a valid number
    for (char c : input) {
        if (!std::isdigit(c) && c != '.' && c != '-') {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;

    std::cout << "Enter a number: ";
    std::cin >> input;

    if (!isNumber(input)) {
        std::cout << "Invalid input! Please enter a valid number.\n";
        return 1;
    }

    double number = std::stod(input);

    if (number < 0) {
        std::cout << "Square root of a negative number is undefined.\n";
    } else {
        double squareRoot = std::sqrt(number);
        std::cout << "Square root of " << number << " is: " << squareRoot << std::endl;
    }

    return 0;
}
