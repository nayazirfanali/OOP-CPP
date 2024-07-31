#include <iostream>
#include <stdexcept>
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Divide by zero.");
    }
    cout << "Result = " << a / b << endl;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    try {
        divide(x, y);
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}
