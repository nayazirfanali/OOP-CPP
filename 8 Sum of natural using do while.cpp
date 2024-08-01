#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Sum: 0" << std::endl;
        return 0;
    }

    int sum = 0, num, count = 0;
    std::cout << "Enter the numbers: ";
    do {
        std::cin >> num;
        sum += num;
        count++;
    } while (count < n);

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
