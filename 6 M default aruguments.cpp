#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c = 0, d = 0;
    char ch;
    cout << "Enter the values (use space or comma as separator): ";
    cin >> a >> ch >> b;
    if (cin.peek() != '\n') {
        cin >> ch >> c;
        if (cin.peek() != '\n') {
            cin >> ch >> d;
        }
    }

    cout << "Sum: " << sum(a, b, c, d) << endl;
    return 0;
}
