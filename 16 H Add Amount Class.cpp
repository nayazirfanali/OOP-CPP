#include <iostream>

class AddAmount {
public:
    double amount;

  
    AddAmount() : amount(50) {}

    AddAmount(double add) : amount(50 + add) {}

    void displayAmount() const {
        std::cout << amount << std::endl;
    }
};

int main() {
 
    double inputAmount;
    std::cin >> inputAmount;


    AddAmount a1;
    AddAmount a2(inputAmount);

    
    a1.displayAmount(); 
    a2.displayAmount(); 

    return 0;
}
