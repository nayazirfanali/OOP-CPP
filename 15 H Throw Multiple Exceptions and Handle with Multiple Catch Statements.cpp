#include <iostream>
#include <stdexcept>
using namespace std;

void checkNumber(double num) {
    if (num < 0) {
        throw invalid_argument("Accept only positive integer.");
    }
    if (num < 0.0001) {
        throw out_of_range("The number is too small");
    }
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    try {
        checkNumber(number);
        cout << "Number is valid" << endl;
    } catch (const invalid_argument &e) {
        cout << e.what() << endl;
    } catch (const out_of_range &e) {
        cout << e.what() << endl;
    }

    return 0;
}
