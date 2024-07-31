#include <iostream>
using namespace std;

class rectangle {
private:
    int l;
    int b;
    int h;
    int area;

public:
    rectangle(int rect_l, int rect_b, int rect_h) {
        cout << "Constructor is called" << endl;
        l = rect_l;
        b = rect_b;
        h = rect_h;
        area = rect_l * rect_b * rect_h;
    }

    ~rectangle() {
        cout << "Destructor is called" << endl;
    }

    void display() {
        cout << "The length of the rectangle for obj: " << l << endl;
        cout << "The breadth of the rectangle for obj: " << b << endl;
        cout << "The height of the rectangle for obj: " << h << endl;
        cout << "The area of the rectangle for obj: " << area << endl;
    }
};

int main() {
    rectangle obj1(2, 4, 6);
    obj1.display();
    return 0;
}