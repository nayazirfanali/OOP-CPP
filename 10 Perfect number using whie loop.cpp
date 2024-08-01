#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << num << " is not a perfect number" << std::endl;
        return 0;
    }

    int sum = 0, i = 1;
    while (i < num) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == num) {
        std::cout << num << " is a perfect number" << std::endl;
    } else {
        std::cout << num << " is not a perfect number" << std::endl;
    }

    return 0;
}
