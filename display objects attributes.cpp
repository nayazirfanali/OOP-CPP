#include <iostream>
using namespace std;

class MyClass {
public:
    int attribute1;
    double attribute2;

    MyClass(int a, double b) : attribute1(a), attribute2(b) {}
};

int main() {
    MyClass obj(10, 20.5);
    MyClass* ptr = &obj; 

    cout << "Object attributes: " << endl;
    cout << "attribute1: " << ptr->attribute1 << endl;
    cout << "attribute2: " << ptr->attribute2 << endl;

    return 0;
}
