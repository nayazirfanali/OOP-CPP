#include <iostream>
using namespace std;

class FloydsTriangle {
public:
    FloydsTriangle(int rows) {
        int num = 1;
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
    
    ~FloydsTriangle() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    int rows;
    cout << "Enter number of rows for Floyd's Triangle: ";
    cin >> rows;
    FloydsTriangle ft(rows);
    return 0;
}
