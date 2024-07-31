#include <iostream>
using namespace std;

class CompareNumbers {
public:
    void findGreater(int a, int b) {
        int greater = (a > b) ? a : b;
        cout << "The Greater Number is : " << greater << endl;
    }
};

int main() {
    int num1, num2;
    CompareNumbers comparer;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    comparer.findGreater(num1, num2);
    return 0;
}
