#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;

public:

    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, std::vector<int>(cols, 0));
    }

    void insertElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        } else {
            std::cerr << "Error: Invalid index" << std::endl;
        }
    }
    
    int retrieveElement(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        } else {
            std::cerr << "Error: Invalid index" << std::endl;
            return -1; 
        }
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    Matrix matrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            std::cout << "Enter element at (" << i << ", " << j << "): ";
            std::cin >> value;
            matrix.insertElement(i, j, value);
        }
    }


    std::cout << "Matrix:" << std::endl;
    matrix.display();

    int r, c;
    std::cout << "Enter the row and column of the element to retrieve: ";
    std::cin >> r >> c;
    int element = matrix.retrieveElement(r, c);
    if (element != -1) {
        std::cout << "Element at (" << r << ", " << c << ") is: " << element << std::endl;
    }

    return 0;
}
