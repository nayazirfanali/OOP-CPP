#include <iostream>

class Add {
public:
    int value;

    Add(int v = 0) : value(v) {}

   
    Add operator+(const Add& other) const {
        return Add(value + other.value);
    }

    void printSum() const {
        std::cout << "sum: " << value << std::endl;
    }
};

int main() {
    int num1, num2;
    
    std::cout<<"Enter the numbers to ADD "<<std::endl;
    std::cin >> num1 >> num2;

    Add a1(num1);
    Add a2(num2);

    Add result = a1 + a2;
    result.printSum();

    return 0;
}
