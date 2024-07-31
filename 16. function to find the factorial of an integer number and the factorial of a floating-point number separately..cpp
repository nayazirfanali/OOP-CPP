#include <iostream>

// Template function for factorial of integers
template<typename T>
T factorial(T n) {
    T result = 1;
    for (T i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
 
template<>
double factorial<double>(double n) {
    double result = 1.0;
    for (double i = 1.0; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Factorial of an integer
    int num = 5;
    std::cout << "Factorial of " << num << " (integer): " << factorial(num) << std::endl;

    // Factorial of a floating-point number
    double numFloat = 5.5;
    std::cout << "Factorial of " << numFloat << " (floating-point): " << factorial(numFloat) << std::endl;

    return 0;
}
