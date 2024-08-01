#include <iostream>
using namespace std;

void displayMessage(string message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    displayMessage();
    displayMessage("Custom Message");
    return 0;
}
