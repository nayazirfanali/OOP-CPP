#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
public:
    Student() {
        name = "Unknown";
    }
    Student(string n) {
        name = n;
    }
    void printName() {
        cout << name << endl;
    }
};

int main() {
    Student s1("Jhon");
    Student s2;

    s1.printName();  // Jhon
    s2.printName();  // Unknown
    
    Student s3("SSE");
    Student s4("AABBCC");
    Student s5("%78^&*");
    Student s6("34.22");
    Student s7("SA--");
    
    s3.printName(); 
    s4.printName(); 
    s5.printName();  
    s6.printName();  
    s7.printName();  
    
    return 0;
}
