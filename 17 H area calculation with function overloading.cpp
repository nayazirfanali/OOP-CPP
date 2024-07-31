#include <iostream>

class Shape {
public:
    void area(int side) const {
        std::cout << side * side << std::endl;
    }

    void area(int length, int breadth) const {
        std::cout << length * breadth << std::endl;
    }
};

int main() {
    Shape shape;
    int side, length, breadth;


    std::cin >> side;
    shape.area(side); 


    std::cin >> length >> breadth;
    shape.area(length, breadth); 

    return 0;
}
