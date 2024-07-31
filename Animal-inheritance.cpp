#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    // Constructor
    Animal(const std::string& name, const std::string& species, int age)
        : name(name), species(species), age(age) {}

    // Getters
    std::string getName() const {
        return name;
    }

    std::string getSpecies() const {
        return species;
    }

    int getAge() const {
        return age;
    }

    // Setters
    void setName(const std::string& name) {
        this->name = name;
    }

    void setSpecies(const std::string& species) {
        this->species = species;
    }

    void setAge(int age) {
        this->age = age;
    }
};

class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:
    // Constructor
    Cat(const std::string& name, const std::string& species, int age, const std::string& color, const std::string& breed)
        : Animal(name, species, age), color(color), breed(breed) {}

    // Getters
    std::string getColor() const {
        return color;
    }

    std::string getBreed() const {
        return breed;
    }

    // Setters
    void setColor(const std::string& color) {
        this->color = color;
    }

    void setBreed(const std::string& breed) {
        this->breed = breed;
    }
};

class Dog : public Animal {
private:
    int weight;
    std::string breed;

public:
    // Constructor
    Dog(const std::string& name, const std::string& species, int age, int weight, const std::string& breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}

    // Getters
    int getWeight() const {
        return weight;
    }

    std::string getBreed() const {
        return breed;
    }

    // Setters
    void setWeight(int weight) {
        this->weight = weight;
    }

    void setBreed(const std::string& breed) {
        this->breed = breed;
    }
};

// Example usage
int main() {
    Cat myCat("Whiskers", "Feline", 3, "Black", "Siamese");
    Dog myDog("Rex", "Canine", 5, 30, "Labrador");

    std::cout << "Cat's name: " << myCat.getName() << std::endl;
    std::cout << "Cat's color: " << myCat.getColor() << std::endl;
    std::cout << "Dog's name: " << myDog.getName() << std::endl;
    std::cout << "Dog's weight: " << myDog.getWeight() << std::endl;

    return 0;
}
