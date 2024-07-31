#include <iostream>
#include <cmath>
using namespace std;

class Circle {
public:
    float radius;

    void getRadius() {
        cout << "Getting the radius of the circle" << endl;
        cout << "Enter the radius: ";
        cin >> radius;
    }

    float areaCircle() {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Circle {
public:
    float length, breadth;

    void getDimensions() {
        cout << "\nGetting the length and breadth of the rectangle" << endl;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }

    float areaRectangle() {
        return length * breadth;
    }
};

class Cylinder : public Rectangle {
public:
    float height;

    void getHeight() {
        cout << "\nGetting the height and radius of the cylinder" << endl;
        cout << "Enter the radius: ";
        cin >> radius;
        cout << "Enter the height: ";
        cin >> height;
    }

    float volumeCylinder() {
        return M_PI * radius * radius * height;
    }
};

int main() {
    Cylinder cyl;

    cyl.getRadius();
    cout << "The area = " << cyl.areaCircle() << endl;

    cyl.getDimensions();
    cout << "The area = " << cyl.areaRectangle() << endl;

    cyl.getHeight();
    cout << "The volume of the cylinder is: " << cyl.volumeCylinder() << endl;

    return 0;
}
