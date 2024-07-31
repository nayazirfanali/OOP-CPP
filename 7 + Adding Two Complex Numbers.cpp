#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {      
    Complex c1(3.4, 5.7), c2(2.1, 3.3);
    Complex c3 = c1 + c2;

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}