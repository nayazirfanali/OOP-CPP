#include <iostream>
using namespace std;

double calculateSimpleInterest(double principal, double time, bool isSenior) {
    double rate = isSenior ? 12.0 : 10.0;
    return (principal * rate * time) / 100;
}

int main() {
    double principal, time;
    bool isSenior;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter time (years): ";
    cin >> time;
    cout << "Is the customer a senior citizen (1 for yes, 0 for no)? ";
    cin >> isSenior;
    double interest = calculateSimpleInterest(principal, time, isSenior);
    cout << "Simple Interest: " << interest << endl;
    return 0;
}
