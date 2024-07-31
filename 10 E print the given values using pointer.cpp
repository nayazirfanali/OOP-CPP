#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    void setValues(int r, int i) {
        real = r;
        imag = i;
    }

    void printValues() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imag << endl;
    }
};

int main() {
    Complex obj;
    Complex* ptr = &obj;
    ptr->setValues(1, 54);
    ptr->printValues();

    return 0;
}
