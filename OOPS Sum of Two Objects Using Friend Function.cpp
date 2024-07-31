#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number() : value(0) {}
    Number(int v) : value(v) {}

    friend Number sum(const Number &a, const Number &b);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

Number sum(const Number &a, const Number &b) {
    return Number(a.value + b.value);
}

int main() {
    Number num1(10);
    Number num2(20);
    Number result = sum(num1, num2);

    num1.display();
    num2.display();
    result.display();

    return 0;
}
