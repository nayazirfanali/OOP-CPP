#include <iostream>
using namespace std;

class CountObjects {
public:
    static int objectCount;
    CountObjects() {
        ++objectCount;
    }
};

int CountObjects::objectCount = 0;

int main() {
    CountObjects obj1, obj2, obj3;
    cout << "Number of objects created: " << CountObjects::objectCount << endl;
    return 0;
}
