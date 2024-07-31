#include <iostream>
using namespace std;

class Person {
protected:
    double salary;
public:
    void getdata() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    
    void displaydata() {
        cout << "Salary: " << salary << endl;
    }
    
    virtual double bonus() {
        return 0;
    }
};

class Admin : virtual public Person {
public:
    double bonus() override {
        return salary * 0.10;
    }
};

class Account : virtual public Person {
public:
    double bonus() override {
        return salary * 0.10;
    }
};

class Master : public Admin, public Account {
public:
    double bonus() override {
        double base_bonus = Admin::bonus(); // or Account::bonus(), both are the same
        return salary + base_bonus;
    }
};

int main() {
    Master employee;
    employee.getdata();
    employee.displaydata();
    cout << "Bonus = " << employee.bonus() << endl;
    return 0;
}
