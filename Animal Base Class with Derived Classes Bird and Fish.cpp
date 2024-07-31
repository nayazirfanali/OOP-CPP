#include <iostream>
using namespace std;

class Animal {
public:
    virtual void move() = 0; 
};

class Bird : public Animal {
public:
    void move() override {
        cout << "Bird is flying" << endl;
    }
};

class Fish : public Animal {
public:
    void move() override {
        cout << "Fish is swimming" << endl;
    }
};

int main() {
    Bird myBird;
    Fish myFish;

    myBird.move(); 
    myFish.move(); 

    return 0;
}
