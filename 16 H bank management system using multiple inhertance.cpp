#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int accountNumber;
    string accountType;
public:
    void getCustomerDetails() {
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Type (Saving/Current): ";
        cin >> accountType;
    }
};

class Account {
protected:
    double balance;
public:
    Account() : balance(30) {}
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds!" << endl;
    }
    double getBalance() {
        return balance;
    }
};

class Bank : public Customer, public Account {
public:
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
    void displayDetails() {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    b.getCustomerDetails();
    int choice;
    double amount;
    while (true) {
        cout << "Choose Your Choice" << endl;
        cout << "1) Deposit" << endl;
        cout << "2) Withdraw" << endl;
        cout << "3) Display Balance" << endl;
        cout << "4) Display with full Details" << endl;
        cout << "5) Exit" << endl;
        cout << "Enter Your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter amount to Deposit: ";
            cin >> amount;
            b.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to be withdraw: ";
            cin >> amount;
            b.withdraw(amount);
            break;
        case 3:
            b.displayBalance();
            break;
        case 4:
            b.displayDetails();
            break;
        case 5:
            cout << "Thank You for Banking with us.." << endl;
            return 0;
        default:
            cout << "Invalid Choice!" << endl;
        }
    }
}
