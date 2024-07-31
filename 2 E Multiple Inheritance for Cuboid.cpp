#include <iostream>
using namespace std;

class Shape {
protected:
    float length, breadth, height;
public:
    void getdata() {
        cout << "Enter LENGTH: ";
        cin >> length;
        cout << "Enter BREADTH: ";
        cin >> breadth;
        cout << "Enter HEIGHT: ";
        cin >> height;
    }
};

class Rectangle : public Shape {
public:
    float area() {
        return length * breadth;
    }
};

class Cuboid : public Rectangle {
public:
    float volume() {
        return length * breadth * height;
    }
};

int main() {
    Cuboid c;
    c.getdata();
    cout << "AREA OF RECTANGLE = " << c.area() << endl;
    cout << "VOLUME OF RECTANGLE = " << c.volume() << endl;
    return 0;
}