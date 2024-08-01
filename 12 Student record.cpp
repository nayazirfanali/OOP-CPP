#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int regNo;
    int mark1, mark2, mark3;
    float average;
    char grade;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter regNo: ";
        cin >> regNo;
        cout << "Enter mark1: ";
        cin >> mark1;
        cout << "Enter mark2: ";
        cin >> mark2;
        cout << "Enter mark3: ";
        cin >> mark3;
        calculate();
    }

    void calculate() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90)
            grade = 'S';
        else if (average > 80)
            grade = 'A';
        else if (average > 70)
            grade = 'C';
        else if (average > 60)
            grade = 'D';
        else if (average > 50)
            grade = 'E';
        else
            grade = 'F';
    }

    void display() {
        cout << "Name: " << name << ", RegNo: " << regNo << ", Average: " << average << ", Grade: " << grade << endl;
    }
};

int main() {
    Student students[10];
    for (int i = 0; i < 10; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].input();
    }
    cout << "Student Records:" << endl;
    for (int i = 0; i < 10; ++i) {
        students[i].display();
    }
    return 0;
}
