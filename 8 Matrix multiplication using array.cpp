#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], c[2][2];

    cout << "Enter elements of matrix A (2x2): ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> a[i][j];

    cout << "Enter elements of matrix B (2x2): ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> b[i][j];

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            c[i][j] = 0;
            for (int k = 0; k < 2; ++k)
                c[i][j] += a[i][k] * b[i][j];
        }

    cout << "Resultant matrix C (2x2): " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
