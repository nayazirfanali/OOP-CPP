#include <iostream>
using namespace std;

class ReverseNumber {
public:
    ReverseNumber(int n) {
        int reverse = 0, remainder;
        while (n != 0) {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }
        cout << "Reversed number is: " << reverse << endl;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    ReverseNumber r(number);
    return 0;
}
