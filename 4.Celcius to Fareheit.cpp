#include <iostream>
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

double celsiusToFahrenheit(double celsius) {
    // Function to convert Celsius to Fahrenheit
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    std::string input;
    
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> input;

    if (!isNumber(input)) {
        std::cout << "Invalid input! Please enter a valid number.\n";
        return 1;
    }

    double celsius = std::stod(input);

    double fahrenheit = celsiusToFahrenheit(celsius);

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
