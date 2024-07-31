#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string emp_name;
    string emp_id;
    double basic_salary;
public:
    Employee(string name, string id, double salary) 
        : emp_name(name), emp_id(id), basic_salary(salary) {}
};

class Pay : public Employee {
public:
    Pay(string name, string id, double salary)
        : Employee(name, id, salary) {}
    void calculatePay() {
        double gross_salary = basic_salary + 0.7 * basic_salary;
        double deduction = basic_salary * 0.5;
        double net_salary = gross_salary - deduction;
        cout << "Gross salary : " << gross_salary << endl;
        cout << "Ded : " << deduction << endl;
        cout << "Net salary = " << net_salary << endl;
    }
};

int main() {
    string name, id;
    double salary;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter Employee id: ";
    cin >> id;
    cout << "Enter Employee Salary: ";
    cin >> salary;
    Pay employee(name, id, salary);
    employee.calculatePay();
    return 0;
}
