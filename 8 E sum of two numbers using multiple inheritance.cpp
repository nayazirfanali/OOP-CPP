#include <iostream>
using namespace std;

class X {
public:
    float x;
    void setX(float val) {
        x = val;
    }
};

class Y {
public:
    float y;
    void setY(float val) {
        y = val;
    }
};

class Sum : public X, public Y {
public:
    void displaySum() {
        cout << "Sum = " << x + y << endl;
    }
};

int main() {
    Sum obj;
    float val1, val2;
    cout << "enter value of x: ";
    cin >> val1;
    cout << "enter value of y: ";
    cin >> val2;
    obj.setX(val1);
    obj.setY(val2);
    obj.displaySum();
    return 0;
}
