#include <iostream>

int main() {
    try {
        throw 10; // Change this to test different types
    } catch (int e) {
        std::cout << "Caught integer exception: " << e << std::endl;
    } catch (const char* msg) {
        std::cout << "Caught string exception: " << msg << std::endl;
    } catch (...) {
        std::cout << "Caught unknown exception" << std::endl;
    }
    return 0;
}
