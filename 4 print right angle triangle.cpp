#include <iostream>
using namespace std;

class Pattern {
public:
    Pattern(int n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Pattern p(number);
    return 0;
}
