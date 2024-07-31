#include <iostream>

class Rectangle {
public:
    int length, breadth;

    Rectangle() : length(0), breadth(0) {}

    Rectangle(int l, int b) : length(l), breadth(b) {}

    Rectangle(int side) : length(side), breadth(side) {}

    int area() const {
        return length * breadth;
    }
};

int main() {
 
    Rectangle r1;
    Rectangle r2(34,43);
    Rectangle r3(45);

    std::cout << "Area: " << r1.area() << std::endl; 
    std::cout << "Area: " << r2.area() << std::endl; 
    std::cout << "Area: " << r3.area() << std::endl; 

    return 0;
}
