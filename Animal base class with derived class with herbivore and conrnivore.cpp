#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() = 0; 
};

class Herbivore : public Animal {
public:
    void eat() override {
        cout << "Herbivore is eating plants" << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        cout << "Carnivore is eating meat" << endl;
    }
};

int main() {
    Herbivore myHerbivore;
    Carnivore myCarnivore;

    myHerbivore.eat(); 
    myCarnivore.eat(); 

    return 0;
}
