#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    // Constructor
    Employee(const std::string& name, int id, double salary)
        : name(name), id(id), salary(salary) {}

    // Getters
    std::string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    double getSalary() const {
        return salary;
    }

    // Setters
    void setName(const std::string& name) {
        this->name = name;
    }

    void setId(int id) {
        this->id = id;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    // Constructor
    Manager(const std::string& name, int id, double salary, const std::string& department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}

    // Getters
    std::string getDepartment() const {
        return department;
    }

    double getBonus() const {
        return bonus;
    }

    // Setters
    void setDepartment(const std::string& department) {
        this->department = department;
    }

    void setBonus(double bonus) {
        this->bonus = bonus;
    }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    // Constructor
    Engineer(const std::string& name, int id, double salary, const std::string& specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}

    // Getters
    std::string getSpecialty() const {
        return specialty;
    }

    int getHours() const {
        return hours;
    }

    // Setters
    void setSpecialty(const std::string& specialty) {
        this->specialty = specialty;
    }

    void setHours(int hours) {
        this->hours = hours;
    }
};

// Example usage
int main() {
    Manager myManager("Alice", 1, 75000, "HR", 5000);
    Engineer myEngineer("Bob", 2, 65000, "Software", 40);

    std::cout << "Manager's name: " << myManager.getName() << std::endl;
    std::cout << "Manager's department: " << myManager.getDepartment() << std::endl;
    std::cout << "Engineer's name: " << myEngineer.getName() << std::endl;
    std::cout << "Engineer's specialty: " << myEngineer.getSpecialty() << std::endl;

    return 0;
}
