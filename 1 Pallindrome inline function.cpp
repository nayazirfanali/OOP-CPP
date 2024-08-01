#include <iostream>
#include <string>
#include <cctype> 
inline bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {

        while (left < right && !std::isalnum(str[left])) ++left;
        while (left < right && !std::isalnum(str[right])) --right;

        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }

        ++left;
        --right;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}