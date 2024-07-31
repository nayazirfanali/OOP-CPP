#include <iostream>
using namespace std;

class Interest {
protected:
    double principal;
    int years;
    double rate;
public:
    void getdata() {
        cout << "Enter the principal Amount: ";
        cin >> principal;
        cout << "Enter the No. of years: ";
        cin >> years;
        cout << "Enter the rate of Interest: ";
        cin >> rate;
    }
};

class SimpleInterest : public Interest {
public:
    void calculateInterest() {
        double simpleInterest = (principal * years * rate) / 100;
        cout << "Simple Interest : " << simpleInterest << endl;
    }
};

int main() {
    SimpleInterest si;
    si.getdata();
    si.calculateInterest();
    return 0;
}
