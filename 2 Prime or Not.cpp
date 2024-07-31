#include <iostream>
using namespace std;

class PrimeChecker {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int num;
    PrimeChecker primeChecker;

    cout << "Enter an integer: ";
    cin >> num;

    if (primeChecker.isPrime(num)) {
        cout << num << " is a priime Number " << endl;
    } else {
        cout << num << "is not a prime Number "<<endl;
    }

    return 0;
}