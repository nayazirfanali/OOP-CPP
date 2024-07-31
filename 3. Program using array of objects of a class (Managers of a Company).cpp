#include <iostream>
using namespace std;

class Manager {
private:
    string name;
    int age;
public:
    Manager(const string& n, int a) : name(n), age(a) {}

    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    const int numManagers = 3;
    Manager managers[numManagers] = {
        Manager("John Doe", 35),
        Manager("Jane Smith", 42),
        Manager("Mike Johnson", 38)
    };

    for (int i = 0; i < numManagers; ++i) {
        cout << "Manager " << (i + 1) << ": ";
        managers[i].displayDetails();
    }

    return 0;
}
