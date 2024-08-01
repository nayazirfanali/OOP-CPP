#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swap by value: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swap by value: x = " << x << ", y = " << y << endl;

    cout << "Before swap by reference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swap by reference: x = " << x << ", y = " << y << endl;

    return 0;
}
