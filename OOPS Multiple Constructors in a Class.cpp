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
    }

    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Copy constructor
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
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
    Rectangle rect3(rect2);        // Copy constructor

    rect1.display();
    rect2.display();
    rect3.display();

    return 0;
}
