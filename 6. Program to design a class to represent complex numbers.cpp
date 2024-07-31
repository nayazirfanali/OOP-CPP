#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    friend Complex add(const Complex& c1, const Complex& c2);
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex add(const Complex& c1, const Complex& c2) {
    double realSum = c1.real + c2.real;
    double imagSum = c1.imag + c2.imag;
    return Complex(realSum, imagSum);
}

int main() {
    Complex num1(3.5, 2.5);
    Complex num2(2.5, 1.5);

    Complex sum = add(num1, num2);

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
