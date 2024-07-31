#include <iostream>
using namespace std;

class Cube {
private:
    int n;
public:
    Cube(int num) : n(num) {}
    ~Cube() {
        for (int i = 1; i <= n; ++i) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Cube c(number);
    return 0;
}
