#include <iostream>
using namespace std;

class Series {
public:
    void input(int num) {
        n = num;
    }

    void show() {
        int t1 = 0, t2 = 1, nextTerm;
        for (int i = 1; i <= n; ++i) {
            cout << t1 << " ";
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << endl;
    }

private:
    int n;
};

int main() {
    Series series;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    series.input(number);
    series.show();
    return 0;
}
