#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string Emp_name;
    string Emp_id;
    string Address;
    string Mail_id;
    string Mobile_no;
    double Basic_Pay;

    Employee(string name, string id, string address, string mail, string mobile, double bp)
        : Emp_name(name), Emp_id(id), Address(address), Mail_id(mail), Mobile_no(mobile), Basic_Pay(bp) {}

    void calculatePaySlip() {
        double DA = 0.97 * Basic_Pay;
        double HRA = 0.10 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double staffClubFund = 0.001 * Basic_Pay;
        double Gross_Pay = Basic_Pay + DA + HRA;
        double Net_Pay = Gross_Pay - PF - staffClubFund;

        cout << "=======================" << endl;
        cout << "PAYMENT SLIP" << endl;
        cout << "=======================" << endl;
        cout << "BASIC PAY => " << Basic_Pay << endl;
        cout << "DEARNESS ALLOWANCE => " << DA << endl;
        cout << "HOUSE RENT ALLOWANCE => " << HRA << endl;
        cout << "PROVIDENT FUND => " << PF << endl;
        cout << "CLUB FUND => " << staffClubFund << endl;
        cout << "GROSS PAY => " << Gross_Pay << endl;
        cout << "NET PAY => " << Net_Pay << endl;
    }
};

class Programmer : public Employee {
public:
    Programmer(string name, string id, string address, string mail, string mobile, double bp)
        : Employee(name, id, address, mail, mobile, bp) {}
};

int main() {
    string name, id, address, mail, mobile;
    double bp;

    cout << "Enter Name of the Employee: ";
    getline(cin, name);
    cout << "Enter Address of the Employee: ";
    getline(cin, address);
    cout << "Enter ID of the Employee: ";
    getline(cin, id);
    cout << "Enter Mobile Number: ";
    getline(cin, mobile);
    cout << "Enter E-Mail ID of the Employee: ";
    getline(cin, mail);
    cout << "Enter the BASIC PAY of the Programmer: ";
    cin >> bp;

    Programmer programmer(name, id, address, mail, mobile, bp);
    programmer.calculatePaySlip();

    return 0;
}
