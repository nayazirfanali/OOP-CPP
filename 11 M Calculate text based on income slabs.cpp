#include <iostream>
using namespace std;

class IncomeTax {
protected:
    double income;
public:
    virtual void getIncome() {
        cout << "Enter the total income: ";
        cin >> income;
    }

    virtual void TDS() = 0; // Pure virtual function
};

class Slab1 : public IncomeTax {
public:
    void TDS() override {
        if (income <= 150000) {
            cout << "No tax" << endl;
        } else {
            cout << "Not in this slab" << endl;
        }
    }
};

class Slab2 : public IncomeTax {
public:
    void TDS() override {
        if (income > 150000 && income <= 300000) {
            cout << "Tax = " << (income - 150000) * 0.10 << endl;
        } else {
            cout << "Not in this slab" << endl;
        }
    }
};

class Slab3 : public IncomeTax {
public:
    void TDS() override {
        if (income > 300000 && income <= 500000) {
            cout << "Tax = " << (income - 300000) * 0.20 + 15000 << endl;
        } else if (income > 500000) {
            cout << "Tax = " << (income - 500000) * 0.30 + 55000 << endl;
        } else {
            cout << "Not in this slab" << endl;
        }
    }
};

int main() {
    IncomeTax *tax;
    Slab1 s1;
    Slab2 s2;
    Slab3 s3;

    s1.getIncome();
    tax = &s1;
    tax->TDS();

    s2.getIncome();
    tax = &s2;
    tax->TDS();

    s3.getIncome();
    tax = &s3;
    tax->TDS();

    return 0;
}
