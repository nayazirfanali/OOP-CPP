#include <iostream>
using namespace std;

class DecimalToBinary {
public:
    DecimalToBinary(int n) {
        int num = n;
        string binary = "";
        while (num > 0) {
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }
        cout << "Binary representation of "  << n << " is " << binary << endl;
    }
};

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    DecimalToBinary dtb(num);
    return 0;
}
