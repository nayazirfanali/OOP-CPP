#include <iostream>
using namespace std;

class A {
public:
    int a;
    void setA(int val) {
        a = val;
    }
};

class B {
public:
    int b;
    void setB(int val) {
        b = val;
    }
};

class C : public A, public B {
public:
    int c;
    void setC(int val) {
        c = val;
    }
    void display() {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "value of c: " << c << endl;
    }
};

int main() {
    C obj;
    obj.setA(100);
    obj.setB(200);
    obj.setC(300);
    obj.display();
    return 0;
}
