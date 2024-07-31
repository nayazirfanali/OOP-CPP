#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const MyException& e) {
        std::cout << "Caught user-defined exception: " << e.what() << std::endl;
    }
    return 0;
}
