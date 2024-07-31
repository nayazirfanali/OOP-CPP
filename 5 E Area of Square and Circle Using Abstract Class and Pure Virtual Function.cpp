#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void getArea() = 0;
};

class Square : public Shape {
public:
    float side;
    void getArea() {
        cout << "Enter the length of the square: ";
        cin >> side;
        cout << "Area of square: " << side * side << endl;
    }
};

class Circle : public Shape {
public:
    float radius;
    void getArea() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
        cout << "Area of circle: " << M_PI * radius * radius << endl;
    }
};

int main() {
    Square square;
    Circle circle;
    square.getArea();
    circle.getArea();
    return 0;
}
