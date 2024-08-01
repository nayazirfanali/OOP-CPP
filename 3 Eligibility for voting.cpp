#include <iostream>
using namespace std;

void getperson(int &age) {
    cout << "Enter your age: ";
    cin >> age;
}

bool isEligibleForVote(int age) {
    return age >= 18;
}

int main() {
    int age;
    getperson(age);
    if (isEligibleForVote(age)) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote. You need to wait " << 18 - age << " more years." << endl;
    }
    return 0;
}
