#include <iostream>

void throwException() {
    throw "Exception from function";
}

int main() {
    try {
        throwException();
    } catch (const char* msg) {
        std::cout << "Caught exception: " << msg << std::endl;
    }
    return 0;
}
