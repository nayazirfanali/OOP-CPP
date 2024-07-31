#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    char ch;
    cout << "Enter the values: ";
    if (cin >> a >> ch >> b) {
        if (cin >> ch >> c) {
            if (cin >> ch >> d) {
                cout << "Sum: " << sum(a, b, c, d) << endl;
            } else {
                cout << "Sum: " << sum(a, b, c) << endl;
            }
        } else {
            cout << "Sum: " << sum(a, b) << endl;
        }
    }
    return 0;
}

