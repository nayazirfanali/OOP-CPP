#include <iostream>
#include <sstream>

int countWords(const std::string &str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;
    while (iss >> word)
        count++;
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Number of words: " << countWords(input) << std::endl;
    return 0;
}
