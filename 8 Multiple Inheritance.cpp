#include <iostream>
using namespace std;

class Base1 {
protected:
    int a;

public:
    Base1(int x) : a(x) {}
};

class Base2 {
protected:
    int b;

public:
    Base2(int y) : b(y) {}
};

class Derived : public Base1, public Base2 {
private:
    int c;

public:
    Derived(int x, int y, int z) : Base1(x), Base2(y), c(z) {}

    void display() {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
    }
};

int main() {
    Derived obj(100, 200, 300);
    obj.display();
    return 0;
}