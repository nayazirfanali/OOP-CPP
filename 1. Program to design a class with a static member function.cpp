#include <iostream>
using namespace std;

class MyClass {
private:
    static int count; // Static member to count objects
public:
    MyClass() {
        count++; // Increment count when object is created
    }

    // Static member function to display count
    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

int MyClass::count = 0; // Initialize static member outside the class

int main() {
    MyClass obj1, obj2, obj3;
    MyClass::showCount(); // Display number of objects

    return 0;
}
