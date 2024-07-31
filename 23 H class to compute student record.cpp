#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string regNo;
    int mark1, mark2, mark3;

public:
    void input() {
        cout << "ENTER THE STUDENT NAME => ";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regNo;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
    }

    void display() {
        int total = mark1 + mark2 + mark3;
        double average = total / 3.0;
        cout << "AVERAGE SCORE IS => " << average << endl;

        if (average > 90) {
            cout << "GRADE S" << endl;
        } else if (average > 80) {
            cout << "GRADE A" << endl;
        } else if (average > 70) {
            cout << "GRADE B" << endl;
        } else if (average > 60) {
            cout << "GRADE C" << endl;
        } else if (average > 50) {
            cout << "GRADE D" << endl;
        } else {
            cout << "GRADE F" << endl;
        }
    }
};

int main() {
    int n;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    cin >> n;

    Student students[10];
    for (int i = 0; i < n; ++i) {
        students[i].input();
        students[i].display();
    }

    return 0;
}
