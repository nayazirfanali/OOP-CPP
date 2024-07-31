#include <iostream>
#include <string>
#include <cctype> // for std::toupper and std::tolower

class StringConverter {
private:
    std::string originalString;

public:
    void setString(const std::string& str) {
        originalString = str;
    }

    std::string toUpperCase() const {
        std::string result = originalString;
        for (char& c : result) {
            c = std::toupper(c);
        }
        return result;
    }

    std::string toLowerCase() const {
        std::string result = originalString;
        for (char& c : result) {
            c = std::tolower(c);
        }
        return result;
    }
};

int main() {
    StringConverter converter;
    std::string input;

    std::cout << "Enter the string: ";
    std::getline(std::cin, input);

    converter.setString(input);

    std::cout << "The string in upper case: " << converter.toUpperCase() << std::endl;
    std::cout << "The string in lower case: " << converter.toLowerCase() << std::endl;

    return 0;
}
