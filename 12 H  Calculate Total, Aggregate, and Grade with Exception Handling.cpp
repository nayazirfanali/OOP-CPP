#include <iostream>
#include <stdexcept>
using namespace std;

class Student {
private:
    double marks[4];
    double total;
    double aggregate;
public:
    void inputMarks() {
        cout << "Enter the marks in Python: ";
        cin >> marks[0];
        cout << "Enter the marks in C programming: ";
        cin >> marks[1];
        cout << "Enter the marks in Mathematics: ";
        cin >> marks[2];
        cout << "Enter the marks in Physics: ";
        cin >> marks[3];
    }

    void calculateResult() {
        total = 0;
        for (int i = 0; i < 4; ++i) {
            total += marks[i];
        }
        aggregate = total / 4;
        if (aggregate < 50) {
            throw runtime_error("Fail");
        } else {
            cout << "Pass" << endl;
        }
    }
};

int main() {
    Student student;
    student.inputMarks();
    try {
        student.calculateResult();
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}
