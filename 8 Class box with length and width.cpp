#include <iostream>
using namespace std;

class Box {
public:
    int length;
    void setWidth(int w) {
        if (w >= 0) {
            width = w;
        } else {
            cout << "Invalid width!" << endl;
            width = 0;
        }
    }
    int getWidth() {
        return width;
    }
private:
    int width;
};

int main() {
    Box box;
    int l, w;
    cout << "Enter the Length of box: ";
    cin >> l;
    cout << "Enter the Width of box: ";
    cin >> w;
    
    box.length = l;
    box.setWidth(w);

    cout << "Length of box: " << box.length << endl;
    cout << "Width of box: " << box.getWidth() << endl;

    return 0;
}
