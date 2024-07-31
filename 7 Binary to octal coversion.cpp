#include <iostream>
#include <string>
using namespace std;

class BinaryToOctal {
public:
    BinaryToOctal(string binary) {
        int decimal = stoi(binary, nullptr, 2);
        cout << "Octal equivalent is " << oct << decimal << endl;
    }
};

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    BinaryToOctal bto(binary);
    return 0;
}
