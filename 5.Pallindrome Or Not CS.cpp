#include <iostream>
#include <string>
#include <cctype> // for std::tolower

bool isPalindrome(const std::string& str) {
    // Function to check if a string is a palindrome
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string input;
    
    std::cout << "Enter a string or number: ";
    std::getline(std::cin, input);

    // Remove non-alphanumeric characters
    std::string cleanedInput;
    for (char c : input) {
        if (std::isalnum(c)) {
            cleanedInput += c;
        }
    }

    if (cleanedInput.empty()) {
        std::cout << "Invalid input! Please enter a valid string or number.\n";
        return 1;
    }

    if (isPalindrome(cleanedInput)) {
        std::cout << "It is palindrome\n";
    } else {
        std::cout << "It is not palindrome\n";
    }

    return 0;
}
