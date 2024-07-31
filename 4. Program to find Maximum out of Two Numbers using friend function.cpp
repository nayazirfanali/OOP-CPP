 #include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2;
public:
    MaxFinder(int n1, int n2) : num1(n1), num2(n2) {}

    friend int findMax(const MaxFinder& obj); // Friend function declaration
};

int findMax(const MaxFinder& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    MaxFinder numbers(10, 20);
    cout << "Maximum number is: " << findMax(numbers) << endl;

    return 0;
}
