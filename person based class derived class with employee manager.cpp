#include <iostream>
using namespace std;

class Person {
public:
    virtual void work() = 0; 
};

class Employee : public Person {
public:
    void work() override {
        cout << "Employee is working" << endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        cout << "Manager is managing the team" << endl;
    }
};

int main() {
    Employee myEmployee;
    Manager myManager;

    myEmployee.work(); 
    myManager.work();  

    return 0;
}
