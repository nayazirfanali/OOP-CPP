#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<int>> mat;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, vector<int>(cols, 0));
    }

    void setElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            mat[r][c] = value;
        } else {
            cout << "Invalid indices!" << endl;
        }
    }

    int getElement(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return mat[r][c];
        } else {
            cout << "Invalid indices!" << endl;
            return 0; // Returning 0 if indices are invalid
        }
    }
};

int main() {
    Matrix m(3, 3);

    m.setElement(0, 0, 1);
    m.setElement(0, 1, 2);
    m.setElement(0, 2, 3);
    m.setElement(1, 0, 4);
    m.setElement(1, 1, 5);
    m.setElement(1, 2, 6);
    m.setElement(2, 0, 7);
    m.setElement(2, 1, 8);
    m.setElement(2, 2, 9);

    cout << "Element at (1,1): " << m.getElement(1, 1) << endl;

    return 0;
}
