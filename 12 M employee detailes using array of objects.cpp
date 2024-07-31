#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
public:
    string name;
    int id;
    float basic, hra, da, gp, np;

    void getDetails() {
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basic;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
        calculateSalary();
    }

    void calculateSalary() {
        gp = basic + hra + da;
        np = gp - (hra + da);
    }

    void displayDetails() {
        cout << left << setw(10) << name << setw(5) << id << setw(10) << basic << setw(5) << hra << setw(5) << da << setw(10) << gp << setw(10) << np << endl;
    }
};

int main() {
    int n;
    cout << "****************\nEmployee details\n****************" << endl;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee employees[n];
    for (int i = 0; i < n; i++) {
        employees[i].getDetails();
    }
    cout << "\nEMPLOYEE NAME\tID\tBASIC\tHRA\tDA\tGP\tNP" << endl;
    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }
    return 0;
}
