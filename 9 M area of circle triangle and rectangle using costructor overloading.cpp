#include <iostream>
using namespace std;

class Shape {
public:
    // Constructor for Circle
    Shape(double radius) {
        double area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
    
    // Constructor for Rectangle
    Shape(double length, double breadth) {
        double area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
    
    // Constructor for Triangle
    Shape(double base, double height, bool isTriangle) {
        if (isTriangle) {
            double area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
        }
    }
};

int main() {
    double radius, length, breadth, base, height;
    
    cout << "Enter radius of circle: ";
    cin >> radius;
    Shape circle(radius);
    
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    Shape rectangle(length, breadth);
    
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    Shape triangle(base, height, true);
    
    return 0;
}
