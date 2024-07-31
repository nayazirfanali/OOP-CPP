#include <iostream>
#include<cmath>
double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle: " << areaOfCircle(radius) << std::endl;
    return 0;
}