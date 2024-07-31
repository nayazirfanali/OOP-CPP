#include <iostream>
#include <string>
using namespace std;

class BasicInfo {
public:
    string name;
    int age;
    char gender;

    void getBasicInfo() {
        cout << "Enter student's basic information:\n";
        cout << "Name?: "; cin >> name;
        cout << "Age?: "; cin >> age;
        cout << "Gender?: "; cin >> gender;
    }

    void printBasicInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class Result : public BasicInfo {
public:
    int totalMarks;
    char grade;

    void getResultInfo() {
        cout << "Enter student's result information:\n";
        cout << "Total Marks?: "; cin >> totalMarks;
        cout << "Grade?: "; cin >> grade;
    }

    void printResultInfo() {
        float percentage = (totalMarks / 500.0) * 100;
        cout << "Total Marks: " << totalMarks << ", Percentage: " << percentage << "%, Grade: " << grade << endl;
    }
};

int main() {
    Result student;
    student.getBasicInfo();
    student.getResultInfo();
    student.printBasicInfo();
    student.printResultInfo();
    return 0;
}
