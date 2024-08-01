#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of 3 and 4: " << add(3, 4) << endl;
    cout << "Sum of 3.5 and 4.5: " << add(3.5, 4.5) << endl;
    return 0;
}
