#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculatePay() = 0; 
};

class Manager : public Employee {
public:
    double calculatePay() override {
        return 5000.0; 
    }
};

class Engineer : public Employee {
public:
    double calculatePay() override {
        return 4000.0;
    }
};

int main() {
    Manager myManager;
    Engineer myEngineer;

    cout << "Manager Pay: $" << myManager.calculatePay() << endl;  
    cout << "Engineer Pay: $" << myEngineer.calculatePay() << endl; 

    return 0;
}
