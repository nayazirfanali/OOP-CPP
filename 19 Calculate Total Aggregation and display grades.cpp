#include <iostream>
using namespace std;

int main() {
    int marks[4];
    int total = 0;

    cout << "Please Enter the marks of four subjects: ";
    for (int i = 0; i < 4; ++i) {
        cin >> marks[i];
        total += marks[i];
    }

    double average = total / 4.0;
    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    if (average >= 75) {
        cout << "Grade: Distinction" << endl;
    } else if (average >= 60) {
        cout << "Grade: First Division" << endl;
    } else if (average >= 50) {
        cout << "Grade: Second Division" << endl;
    } else if (average >= 40) {
        cout << "Grade: Third Division" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
