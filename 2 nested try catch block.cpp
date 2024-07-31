#include <iostream>

int main() {
    try {
        try {
            throw "Inner exception";
        } catch (const char* msg) {
            std::cout << "Caught inner exception: " << msg << std::endl;
            throw; // rethrowing the exception
        }
    } catch (const char* msg) {
        std::cout << "Caught outer exception: " << msg << std::endl;
    }
    return 0;
}
