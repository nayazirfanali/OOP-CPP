#include <iostream>
using namespace std;

class Class_2; // Forward declaration

class Class_1 {
private:
    int data;

public:
    Class_1(int d) : data(d) {}

    friend void swapData(Class_1&, Class_2&);
    void display() const {
        cout << "Data in Class_1: " << data << endl;
    }
};

class Class_2 {
private:
    int data;

public:
    Class_2(int d) : data(d) {}

    friend void swapData(Class_1&, Class_2&);
    void display() const {
        cout << "Data in Class_2: " << data << endl;
    }
};

void swapData(Class_1& obj1, Class_2& obj2) {
    int temp = obj1.data;
    obj1.data = obj2.data;
    obj2.data = temp;
}

int main() {
    Class_1 obj1(100);
    Class_2 obj2(200);

    cout << "Before swapping:" << endl;
    obj1.display();
    obj2.display();

    swapData(obj1, obj2);

    cout << "After swapping:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
