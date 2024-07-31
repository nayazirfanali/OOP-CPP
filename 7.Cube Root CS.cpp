#include <iostream>
#include <cmath> // for std::abs

bool isNumber(const std::string& input) {
    // Function to check if the input string is a valid number
    for (char c : input) {
        if (!std::isdigit(c) && c != '.' && c != '-') {
            return false;
        }
    }
    return true;
}

double cubeRoot(double number) {
    // Function to find the cube root of a number
    if (number == 0) return 0;
    
    double epsilon = 0.0001; // Accuracy threshold
    double guess = std::abs(number); // Start with the absolute value of the number
    double diff = epsilon + 1; // Initialize diff to ensure loop starts
    
    while (diff > epsilon) {
        double previousGuess = guess;
        guess = (2 * previousGuess + number / (previousGuess * previousGuess)) / 3;
        diff = std::abs(guess - previousGuess);
    }
    
    return guess;
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
    double result = cubeRoot(number);

    std::cout << "Cube root of " << number << " is: " << result << std::endl;

    return 0;
}
