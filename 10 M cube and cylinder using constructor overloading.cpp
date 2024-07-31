#include <iostream>
using namespace std;

class Volume {
public:
    // Constructor for Cube
    Volume(double side) {
        double volume = side * side * side;
        cout << "Volume of Cube: " << volume << endl;
    }
    
    // Constructor for Cylinder
    Volume(double radius, double height) {
        double volume = 3.14 * radius * radius * height;
        cout << "Volume of Cylinder: " << volume << endl;
    }
};

int main() {
    double side, radius, height;
    
    cout << "Enter side length of cube: ";
    cin >> side;
    Volume cube(side);
    
    cout << "Enter radius and height of cylinder: ";
    cin >> radius >> height;
    Volume cylinder(radius, height);
    
    return 0;
}
