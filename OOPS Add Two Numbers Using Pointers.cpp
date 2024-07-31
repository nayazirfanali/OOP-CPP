#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *ptrA, *ptrB;
    int sum;

    cout << "Enter two integers: ";
    cin >> a >> b;

    ptrA = &a;
    ptrB = &b;

    sum = *ptrA + *ptrB;

    cout << "Sum of the two numbers: " << sum << endl;

    return 0;
}
