#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;   
    virtual double volume() = 0; 
};

class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}

    double area() override {
        return 4 * M_PI * radius * radius;
    }

    double volume() override {
        return (4.0 / 3) * M_PI * radius * radius * radius;
    }
};

class Cylinder : public Shape {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double area() override {
        return 2 * M_PI * radius * (radius + height);
    }

    double volume() override {
        return M_PI * radius * radius * height;
    }
};

int main() {
    Sphere mySphere(5.0);
    Cylinder myCylinder(3.0, 7.0);

    cout << "Sphere Area: " << mySphere.area() << endl;           
    cout << "Sphere Volume: " << mySphere.volume() << endl;       
    cout << "Cylinder Area: " << myCylinder.area() << endl;       
    cout << "Cylinder Volume: " << myCylinder.volume() << endl;   

    return 0;
}
