#include <iostream>
using namespace std;

class Example {
public:
    Example(int a, int b);  // Constructor declaration
    void display();
private:
    int x, y;
};

// Constructor definition outside the class
Example::Example(int a, int b) {
    x = a;
    y = b;
}

void Example::display() {
    cout << "x: " << x << ", y: " << y << endl;
}

int main() {
    Example ex(5, 10);
    ex.display();
    return 0;
}
