#include <iostream>
using namespace std;

class Number {
public:
    int num;

    void getNumber() {
        cout << "Enter an integer number: ";
        cin >> num;
    }
};

class Square : public Number {
public:
    void calculateSquare() {
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};

class Cube : public Number {
public:
    void calculateCube() {
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};

int main() {
    Square sq;
    Cube cb;

    sq.getNumber();2
    sq.calculateSquare();

    cb.getNumber();
    cb.calculateCube();

    return 0;
}
