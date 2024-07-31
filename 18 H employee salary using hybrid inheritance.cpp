#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empID;
    string empName;
    double basicSalary;
public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter basic salary of Employee: ";
        cin >> basicSalary;
    }
};

class Salary : public Employee {
protected:
    double grossSalary;
    double netSalary;
public:
    void calculateSalary() {
        if (basicSalary < 0) {
            cout << "Basic Salary cannot be negative!" << endl;
            return;
        }
        double hra = 0.1 * basicSalary;
        double da = 0.1 * basicSalary;
        grossSalary = basicSalary + hra + da;
        netSalary = grossSalary - (0.05 * grossSalary); // assuming 5% deductions
    }
};

class EmployeeSalary : public Salary {
public:
    void displaySalary() {
        if (basicSalary < 0) return;
        cout << "Gross Salary = Rs." << grossSalary << endl;
        cout << "Net Salary = Rs." << netSalary << endl;
    }
};

int main() {
    EmployeeSalary es;
    es.getEmployeeDetails();
    es.calculateSalary();
    es.displaySalary();
    return 0;
}
