#include <iostream>

int main() {
    try {
        throw "A general exception";
    } catch (const char* msg) {
        std::cout << "Caught exception: " << msg << std::endl;
    }
    return 0;
}
