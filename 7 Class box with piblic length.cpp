#include <iostream>
using namespace std;

class Box {
public:
    int length;
    void setWidth(int w);
    int getWidth();
private:
    int width;
};

void Box::setWidth(int w) {
    width = w;
}

int Box::getWidth() {
    return width;
}

int main() {
    Box box;
    box.length = 10;
    box.setWidth(5);
    cout << "Length: " << box.length << endl;
    cout << "Width: " << box.getWidth() << endl;
    return 0;
}
