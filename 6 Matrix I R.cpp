#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** mat;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            mat[i] = new int[cols];
        }
    }

    void insertElement(int r, int c, int value) {
        if (r < rows && c < cols) {
            mat[r][c] = value;
        }
    }

    int retrieveElement(int r, int c) {
        if (r < rows && c < cols) {
            return mat[r][c];
        }
        return -1;
    }

    void displayMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] mat[i];
        }
        delete[] mat;
    }
};

int main() {
    int rows = 3, cols = 3;
    Matrix matrix(rows, cols);
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix.insertElement(i, j, i * cols + j + 1);
        }
    }
    matrix.displayMatrix();

    int r = 1, c = 1;
    cout << "Element at (" << r << ", " << c << ") is: " << matrix.retrieveElement(r, c) << endl;

    return 0;
}