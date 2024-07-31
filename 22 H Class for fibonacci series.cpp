#include <iostream>
using namespace std;

class Series {
private:
    int limit;

public:
    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }

    void show() {
        if (limit < 0) {
            cout << "Invalid input" << endl;
            return;
        }
        int a = 0, b = 1, c;
        for (int i = 0; i < limit; ++i) {
            if (i <= 1)
                c = i;
            else {
                c = a + b;
                a = b;
                b = c;
            }
            cout << c << " ";
        }
        cout << endl;
    }
};

int main() {
    Series series;
    series.input();
    series.show();

    return 0;
}
