#include <iostream>
using namespace std;

class AverageCalculator {
private:
    int num1, num2, num3;
    float average;

public:
    void readNumbers() {
        cout << "Enter three integers: ";
        cin >> num1 >> num2 >> num3;
    }

    void calculateAverage() {
        average = (num1 + num2 + num3) / 3.0;
    }

    void displayAverage() {
        cout << "The average is: " << average << endl;
    }
};

int main() {
    AverageCalculator avgCalc;
    avgCalc.readNumbers();
    avgCalc.calculateAverage();
    avgCalc.displayAverage();
    return 0;
}