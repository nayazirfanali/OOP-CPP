#include <iostream>
using namespace std;

class Shape {
protected:
    float length, breadth;
public:
    void getdata() {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }
};

class Rectangle : public Shape {
public:
    float area() {
        return length * breadth;
    }
};

class Cuboid : public Rectangle {
private:
    float height;
public:
    void getHeight() {
        cout << "Enter Height: ";
        cin >> height;
    }
    float volume() {
        return length * breadth * height;
    }
};

int main() {
    Cuboid c;
    c.getdata();
    c.getHeight();
    cout << "Area of rectangle = " << c.area() << endl;
    cout << "Volume of cuboid = " << c.volume() << endl;
    return 0;
}
