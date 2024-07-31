#include <iostream>
using namespace std;

float calculateInterest(float principal, int years, bool isSeniorCitizen) {
    float rate = isSeniorCitizen ? 0.12f : 0.10f;
    return principal * rate * years;
}

int main() {
    float principal;
    int years;
    char seniorCitizen;
    bool isSenior;

    cout << "Enter the principal amount: ";
    if (!(cin >> principal) || principal <= 0) {
        cout << "Invalid principal amount." << endl;
        return 1;
    }

    cout << "Enter the number of years: ";
    if (!(cin >> years) || years <= 0) {
        cout << "Invalid number of years." << endl;
        return 1;
    }

    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizen;
    isSenior = (seniorCitizen == 'y' || seniorCitizen == 'Y');

    float interest = calculateInterest(principal, years, isSenior);
    cout << "Interest: " << interest << endl;

    return 0;
}
