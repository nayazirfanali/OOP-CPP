#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    cout << "Calculator:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "The value of addition is " << num1 + num2 << endl;
            break;
        case 2:
            cout << "The value of subtraction is " << num1 - num2 << endl;
            break;
        case 3:
            cout << "The value of multiplication is " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "The value of division is " << num1 / num2 << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        case 5:
            cout << "The value of modulus is " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
