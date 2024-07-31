#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called" << endl;
    }

    int area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect1;               // Default constructor
    Rectangle rect2(10, 5);        // Parameterized constructor

    rect1.display();
    rect2.display();

    return 0;
}
