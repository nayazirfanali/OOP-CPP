#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor
    Vehicle(const std::string& make, const std::string& model, int year)
        : make(make), model(model), year(year) {}

    // Getters
    std::string getMake() const {
        return make;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    // Setters
    void setMake(const std::string& make) {
        this->make = make;
    }

    void setModel(const std::string& model) {
        this->model = model;
    }

    void setYear(int year) {
        this->year = year;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    // Constructor
    Car(const std::string& make, const std::string& model, int year, int seatingCapacity, const std::string& fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    // Getters
    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    std::string getFuelType() const {
        return fuelType;
    }

    // Setters
    void setSeatingCapacity(int seatingCapacity) {
        this->seatingCapacity = seatingCapacity;
    }

    void setFuelType(const std::string& fuelType) {
        this->fuelType = fuelType;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;

public:
    // Constructor
    Truck(const std::string& make, const std::string& model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    // Getters
    int getPayloadCapacity() const {
        return payloadCapacity;
    }

    int getTowingCapacity() const {
        return towingCapacity;
    }

    // Setters
    void setPayloadCapacity(int payloadCapacity) {
        this->payloadCapacity = payloadCapacity;
    }

    void setTowingCapacity(int towingCapacity) {
        this->towingCapacity = towingCapacity;
    }
};

// Example usage
int main() {
    Car myCar("Toyota", "Camry", 2020, 5, "Gasoline");
    Truck myTruck("Ford", "F-150", 2019, 3000, 13000);

    std::cout << "Car's make: " << myCar.getMake() << std::endl;
    std::cout << "Car's seating capacity: " << myCar.getSeatingCapacity() << std::endl;
    std::cout << "Truck's make: " << myTruck.getMake() << std::endl;
    std::cout << "Truck's payload capacity: " << myTruck.getPayloadCapacity() << std::endl;

    return 0;
}
