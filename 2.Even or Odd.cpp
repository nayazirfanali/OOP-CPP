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

int main() {
    std::string input;
    
    std::cout << "Enter a number: ";
    std::cin >> input;

    if (!isNumber(input)) {
        std::cout << "Invalid input! Please enter a valid number.\n";
        return 1;
    }

    int number = std::stoi(input);

    if (number % 2 == 0) {
        std::cout << "The number is Even\n";
    } else {
        std::cout << "The number is Odd\n";
    }

    return 0;
}
