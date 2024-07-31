#include <iostream>
using namespace std;

class Grandson; // Forward declaration

class Grandfather {
private:
    double property_value;
public:
    Grandfather(double value) : property_value(value) {}
    
    void transfer_property(Grandson &recipient);
};

class Grandson {
public:
    double property;
    
    Grandson() : property(0) {}
    
    void receive_property(double value) {
        property = value;
        cout << "Received the Property" << endl;
    }
};

void Grandfather::transfer_property(Grandson &recipient) {
    recipient.receive_property(property_value);
}

int main() {
    double propertyValue;
    cout << "Enter the property value: ";
    cin >> propertyValue;

    if(cin.fail()) {
        cout << "Invalid input" << endl;
        return 1;
    }

    Grandfather grandfather(propertyValue);
    Grandson grandson;
    grandfather.transfer_property(grandson);
    return 0;
}
