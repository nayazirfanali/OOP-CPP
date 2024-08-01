#include <iostream>
using namespace std;

class Employee {
public:
    double taxableIncome;

    void input() {
        cout << "Enter taxable income: ";
        cin >> taxableIncome;
    }

    double calculateTax() {
        if (taxableIncome <= 60000)
            return 0;
        else if (taxableIncome <= 150000)
            return taxableIncome * 0.05;
        else if (taxableIncome <= 500000)
            return taxableIncome * 0.1;
        else
            return taxableIncome * 0.15;
    }

    void displayTax() {
        double tax = calculateTax();
        cout << "Tax to be paid: " << tax << endl;
    }
};

int main() {
    Employee emp;
    emp.input();
    emp.displayTax();
    return 0;
}
