#include <iostream>
using namespace std;

void myFunction() {
    cout << "Hello from myFunction!" << endl;
}

int main() {
    void (*funcPtr)() = myFunction; 
    funcPtr(); 

    return 0;
}