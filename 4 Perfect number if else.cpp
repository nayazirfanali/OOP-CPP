#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << num << " is not a perfect number" << std::endl;
    } else {
        int sum = 0;
        for (int i = 1; i < num; ++i) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            std::cout << num << " is a perfect number" << std::endl;
        } else {
            std::cout << num << " is not a perfect number" << std::endl;
        }
    }

    return 0;
}
