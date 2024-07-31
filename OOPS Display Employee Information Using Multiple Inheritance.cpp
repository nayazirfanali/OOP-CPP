#include <iostream>
using namespace std;

class PersonalInfo {
protected:
    string name;
    int age;
public:
    void setPersonalInfo(string n, int a) {
        name = n;
        age = a;
    }
};

class ProfessionalInfo {
protected:
    string designation;
    float salary;
public:
    void setProfessionalInfo(string d, float s) {
        designation = d;
        salary = s;
    }
};

class Employee : public PersonalInfo, public ProfessionalInfo {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setPersonalInfo("John Doe", 30);
    emp.setProfessionalInfo("Software Engineer", 50000.0);
    emp.display();
    
    return 0;
}
