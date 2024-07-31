#include <iostream>
using namespace std;

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char* ptr = arr;

    cout << "Character array values: ";
    for (int i = 0; ptr[i] != '\0'; ++i) {
        cout << ptr[i];
    }
    cout << endl;

    return 0;
}
