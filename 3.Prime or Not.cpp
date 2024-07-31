#include <iostream>
#include <cmath> // for std::sqrt
#include <string> // for std::string handling

bool isNumber(const std::string& input) {
    // Function to check if the input string is a valid number
    for (char c : input) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool isPrime(int number) {
    // Function to check if a number is prime
    if (number <= 1) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= std::sqrt(number); i += 2) {
        if (number % i == 0) {
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

    int number = std::stoi(input);

    if (isPrime(number)) {
        std::cout << number << " is prime\n";
    } else {
        std::cout << number << " is not prime\n";
    }

    return 0;
}
