#include <iostream>

const int MAX = 100; 
void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int colFirst, int rowSecond, int colSecond) {

    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            for (int k = 0; k < colFirst; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];

    std::cout << "Enter rows and columns for first matrix: ";
    std::cin >> rowFirst >> colFirst;
    std::cout << "Enter rows and columns for second matrix: ";
    std::cin >> rowSecond >> colSecond;

    if (colFirst != rowSecond) {
        std::cout << "Error: Number of columns of first matrix must be equal to number of rows of second matrix." << std::endl;
        return 1;
    }

    std::cout << "Enter elements of first matrix:" << std::endl;
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colFirst; ++j) {
            std::cin >> first[i][j];
        }
    }

    std::cout << "Enter elements of second matrix:" << std::endl;
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            std::cin >> second[i][j];
        }
    }

    multiplyMatrices(first, second, result, rowFirst, colFirst, rowSecond, colSecond);

    std::cout << "Resultant matrix is:" << std::endl;
    printMatrix(result, rowFirst, colSecond);

    return 0;
}