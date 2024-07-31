#include <iostream>
#include <cmath> 
using namespace std;

class Shape {
public:
    virtual double area() = 0;       
    virtual double perimeter() = 0;  
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double area() override {
        return length * width;
    }
    
    double perimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c) {}
    
    double area() override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3)); 
    }
    
    double perimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Rectangle myRectangle(5.0, 3.0);
    Triangle myTriangle(3.0, 4.0, 5.0);

    cout << "Rectangle Area: " << myRectangle.area() << endl;       
    cout << "Rectangle Perimeter: " << myRectangle.perimeter() << endl; 
    cout << "Triangle Area: " << myTriangle.area() << endl;        
    cout << "Triangle Perimeter: " << myTriangle.perimeter() << endl;  

    return 0;
}
