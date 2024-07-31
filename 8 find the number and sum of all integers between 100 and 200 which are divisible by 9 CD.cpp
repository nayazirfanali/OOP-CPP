#include <iostream>
using namespace std;

class DivByNine {
public:
    DivByNine() {
        int count = 0, sum = 0;
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                cout << i << " ";
                sum += i;
                count++;
            }
        }
        cout << "\nNumber of integers divisible by 9: " << count << endl;
        cout << "Sum of integers divisible by 9: " << sum << endl;
    }
    ~DivByNine() {}
};

int main() {
    DivByNine dbn;
    return 0;
}
