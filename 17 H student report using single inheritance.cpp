#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name;
    string address;
    string city;
    int marks1, marks2, marks3;
public:
    void getDetails() {
        cout << "Enter student roll number: ";
        cin >> rollNumber;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student address: ";
        cin >> address;
        cout << "Enter student city: ";
        cin >> city;
        cout << "Enter the marks1: ";
        cin >> marks1;
        cout << "Enter the marks2: ";
        cin >> marks2;
        cout << "Enter the marks3: ";
        cin >> marks3;
    }
};

class Report : public Student {
public:
    void displayDetails() {
        double percentage = (marks1 + marks2 + marks3) / 3.0;
        char grade;
        if (percentage >= 75) grade = 'A';
        else if (percentage >= 50) grade = 'B';
        else grade = 'C';

        cout << "Student Details:" << endl;
        cout << "********************" << endl;
        cout << "The student roll number: " << rollNumber << endl;
        cout << "The student name: " << name << endl;
        cout << "The student address: " << address << endl;
        cout << "The student city: " << city << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
        cout << "Total percentage: " << percentage << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Report r;
    r.getDetails();
    r.displayDetails();
    return 0;
}
