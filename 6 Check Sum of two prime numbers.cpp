#include <iostream>
using namespace std;

class PrimeSum {
private:
    int n;
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
public:
    PrimeSum(int num) : n(num) {}
    ~PrimeSum() {
        bool found = false;
        for (int i = 2; i <= n / 2; ++i) {
            if (isPrime(i) && isPrime(n - i)) {
                cout << n << " can be expressed as the sum of " << i << " and " << (n - i) << endl;
                found = true;
            }
        }
        if (!found) {
            cout << n << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    PrimeSum ps(number);
    return 0;
}
