#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rects[2];
    rects[0].setDimensions(4, 7);
    rects[1].setDimensions(5, 4);

    cout << rects[0].getArea() << endl;
    cout << rects[1].getArea() << endl;

    return 0;
}
