#include <iostream>
#include <cmath>

int main() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Square root of negative number is not real" << std::endl;
    } else {
        double sqrt_num = sqrt(num);
        if (floor(sqrt_num) == sqrt_num) {
            std::cout << "Square root: " << sqrt_num << std::endl;
        } else {
            std::cout << "Square root is not an integer" << std::endl;
        }
    }

    return 0;
}
