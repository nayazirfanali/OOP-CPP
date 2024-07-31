#include <iostream>
using namespace std;

class AddAmount {
protected:
    double amount;
public:
    AddAmount() : amount(50.0) {}
    void displayAmount() {
        cout << "Total Amount is = " << amount << endl;
    }
};

class AddToPiggieBank : public AddAmount {
public:
    AddToPiggieBank(double addAmount) {
        amount += addAmount;
    }
};

int main() {
    double addAmount;
    cout << "Enter the amount: ";
    cin >> addAmount;
    AddToPiggieBank piggieBank(addAmount);
    piggieBank.displayAmount();
    return 0;
}
