#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int id;
    string name;
    int marks;
    static int count;

public:
    Car(int id, string name, int marks) {
        this->id = id;
        this->name = name;
        this->marks = marks;
        count++;
    }

    void display() {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    static int getCount() {
        return count;
    }
};

int Car::count = 0;

int main() {
    int id, marks;
    string name;

    cout << "Enter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;

    Car car1(id, name, marks);
    car1.display();

    cout << endl;

    cout << "Enter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;

    Car car2(id, name, marks);
    car2.display();

    cout << "No. of objects created in the class: " << Car::getCount() << endl;

    return 0;
}
