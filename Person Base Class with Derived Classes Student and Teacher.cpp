#include <iostream>
using namespace std;

class Person {
public:
    virtual void greet() = 0; 
};

class Student : public Person {
public:
    void greet() override {
        cout << "Hello, I am a student" << endl;
    }
};

class Teacher : public Person {
public:
    void greet() override {
        cout << "Hello, I am a teacher" << endl;
    }
};

int main() {
    Student myStudent;
    Teacher myTeacher;

    myStudent.greet(); 
    myTeacher.greet(); 

    return 0;
}
