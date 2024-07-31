#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b, c;
    char separator;
    cout << "Enter the value for a, b, c: ";
    if (cin >> a >> separator >> b >> separator >> c) {
        cout << "The value of addition using two parameters is: " << add(a, b) << endl;
        cout << "The value of addition using three parameters is: " << add(a, b, c) << endl;
    } else {
        cout << "Invalid input!" << endl;
    }
    return 0;
}

