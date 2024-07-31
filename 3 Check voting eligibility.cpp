#include <iostream>
using namespace std;

void getPerson(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else if (age > 0) {
        cout << "You are allowed to vote after " << 18 - age << " years." << endl;
    } else {
        cout << "Invalid age entered." << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    if (cin >> age) {
        getPerson(age);
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}
