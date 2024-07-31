#include <iostream>
using namespace std;

void findGreatest(int* p1, int* p2, int* p3) {
    if (*p1 > *p2 && *p1 > *p3) {
        cout << "The greatest is P1: " << *p1 << endl;
    } else if (*p2 > *p1 && *p2 > *p3) {
        cout << "The greatest is P2: " << *p2 << endl;
    } else {
        cout << "The greatest is P3: " << *p3 << endl;
    }
}

int main() {
    int a, b, c;
    cout << "Enter the three numbers: " << endl;
    cin >> a >> b >> c;

    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;

    findGreatest(p1, p2, p3);

    return 0;
}
