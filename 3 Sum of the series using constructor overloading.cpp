#include <iostream>
using namespace std;

class SeriesSum {
public:
    SeriesSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        cout << "Sum of the series 1 to " << n << " is " << sum << endl;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    SeriesSum s(number);
    return 0;
}
