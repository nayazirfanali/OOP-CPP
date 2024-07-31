#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof" << endl;
    }
};

int main() {
    Cat myCat;
    Dog myDog;

    myCat.speak(); 
    myDog.speak();

    return 0;
}
