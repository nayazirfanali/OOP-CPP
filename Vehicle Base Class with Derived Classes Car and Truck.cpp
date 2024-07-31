#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() = 0; 
};

class Car : public Vehicle {
public:
    void drive() override {
        cout << "Car is driving" << endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() override {
        cout << "Truck is driving" << endl;
    }
};

int main() {
    Car myCar;
    Truck myTruck;

    myCar.drive(); 
    myTruck.drive();
    return 0;
}
