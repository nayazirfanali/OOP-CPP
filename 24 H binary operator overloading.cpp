#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    void input() {
        cout << "Enter the value of Complex Numbers (real imag): ";
        cin >> real >> imag;
    }

    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    Complex operator-(const Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Input Values" << endl;
    c1.input();
    c2.input();

    sum = c1 + c2;
    diff = c1 - c2;

    cout << "Result" << endl;
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}
