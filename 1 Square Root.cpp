#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number >= 0) {
        double squareRoot = sqrt(number);
        cout << "Square root of " << number << " is: " << squareRoot << endl;
    } else {
        cout << "Square root of a negative number is imaginary and cannot be calculated." << endl;
    }
    return 0;
}
