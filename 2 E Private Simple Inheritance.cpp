#include <iostream>
using namespace std;

class A {
protected:
    int x;
public:
    void setX(int val) {
        x = val;
    }
    int getX() {
        return x;
    }
};

class B : private A {
public:
    void set(int val) {
        setX(val);
    }
    int get() {
        return getX();
    }
};

int main() {
    B obj;
    int val;
    cout << "value of x: ";
    cin >> val;
    obj.set(val);
    cout << "Here x is the protected data member of class A, class A is inherited privately to class B. In private inheritance only protected data member and member functions can be accessed by the derived class." << endl;
    cout << "Value of x: " << obj.get() << endl;
    return 0;
}
