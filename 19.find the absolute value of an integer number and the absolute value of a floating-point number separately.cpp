 #include <iostream>
#include <cmath> // for std::abs

// Function to find the absolute value of an integer number
int absValue(int num) {
    return std::abs(num);
}

// Function to find the absolute value of a floating-point number
double absValue(double num) {
    return std::abs(num);
}

int main() {
    // Absolute value of an integer number
    int numInt = -5;
    std::cout << "Absolute value of " << numInt << " (integer): " << absValue(numInt) << std::endl;

    // Absolute value of a floating-point number
    double numDouble = -3.5;
    std::cout << "Absolute value of " << numDouble << " (floating-point): " << absValue(numDouble) << std::endl;

    return 0;
}
