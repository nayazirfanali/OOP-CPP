#include <iostream>
using namespace std;

class Largest {
private:
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    friend void find_Max(Largest obj);
};

void find_Max(Largest obj) {
    if (obj.a > obj.b) {
        cout << "Maximum number is " << obj.a << endl;
    } else {
        cout << "Maximum number is " << obj.b << endl;
    }
}

int main() {
    Largest obj;
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    obj.setData(a, b);
    find_Max(obj);

    return 0;
}
