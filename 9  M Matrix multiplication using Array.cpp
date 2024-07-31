#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;

    int matrix1[row][column], matrix2[row][column], result[row][column];

    cout << "Enter the first matrix elements:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the second matrix elements:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize result matrix
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            for (int k = 0; k < column; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Multiplication of the matrices:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
