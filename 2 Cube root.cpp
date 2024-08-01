#include <iostream>
#include <cmath>

int main() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    double cube_root = cbrt(num);
    if (floor(cube_root) == cube_root) {
        std::cout << "Cube root: " << cube_root << std::endl;
    } else {
        std::cout << "Cube root is not an integer" << std::endl;
    }

    return 0;
}
