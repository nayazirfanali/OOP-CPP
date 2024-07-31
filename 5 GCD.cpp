#include <iostream>
using namespace std;

class GCDCalculator {
public:
    int computeGCD(int a, int b) {
        int gcd;
        do {
            gcd = b;
            b = a % b;
            a = gcd;
        } while (b != 0);
        return gcd;
    }
};

int main() {
    int num1, num2;
    GCDCalculator gcdCalculator;

    cout << "Enter the two integers: ";
    cin >> num1 >> num2;

    int gcd = gcdCalculator.computeGCD(num1, num2);
    cout << "The GCD of " <<num1<<" and "<<num2<<" is   "<< gcd << endl;
    return 0;
}