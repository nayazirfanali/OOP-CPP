#include <iostream>
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

bool isPerfect(int number) {
    // Function to check if a number is perfect
    if (number <= 1) {
        return false;
    }
    
    int sum = 1; // Start with 1 because 1 is a divisor for all numbers greater than 1

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            sum += i;
            if (i != number / i) {
                sum += number / i;
            }
        }
    }

    return sum == number;
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

    if (isPerfect(number)) {
        std::cout << number << " is a perfect number\n";
    } else {
        std::cout << number << " is not a perfect number\n";
    }

    return 0;
}
