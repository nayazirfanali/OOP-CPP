#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Sum: 0" << std::endl;
        return 0;
    }

    int sum = 0, num;
    std::cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        sum += num;
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
