#include <iostream>
#include <cmath> // for std::pow

// Function to calculate the power of an integer number
int power(int base, int exp) {
    return static_cast<int>(std::pow(base, exp));
}

// Function to calculate the power of a floating-point number
double power(double base, int exp) {
    return std::pow(base, exp);
}

int main() {
    // Power of an integer number
    int baseInt = 2, expInt = 3;
    std::cout << "Power of " << baseInt << " raised to " << expInt << " (integer): " << power(baseInt, expInt) << std::endl;

    // Power of a floating-point number
    double baseDouble = 2.5;
    std::cout << "Power of " << baseDouble << " raised to " << expInt << " (floating-point): " << power(baseDouble, expInt) << std::endl;

    return 0;
}
