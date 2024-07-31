#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    std::cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << std::endl;
    return 0;
}
