#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    double salary;
public:
    virtual void getdata() {
        cout << "Enter the salary: ";
        cin >> salary;
    }
    virtual void displaydata() {
        cout << "Salary: " << salary << endl;
    }
    virtual double bonus() = 0; 
};

class Admin : virtual public Person {
public:
    double bonus() override {
        return salary * 0.02;
    }
};

class Account : virtual public Person {
public:
    double bonus() override {
        return salary * 0.02;
    }
};

class Master : public Admin, public Account {
public:
    void getdata() override {
        Person::getdata(); 
    }

    void displaydata() override {
        Person::displaydata(); 
    }

    double bonus() override {
        return salary * 0.02;
    }
};

int main() {
    Master employee;
    employee.getdata();
    employee.displaydata();
    cout << "Bonus = " << employee.bonus() << endl;
    return 0;
}
