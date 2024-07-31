#include <iostream>
#include <algorithm> // for std::sort
#include <iomanip>   // for std::fixed and std::setprecision

// Function to sort an integer array
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

// Function to sort a double array
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}

// Helper function to display the contents of an array
template<typename T>
void displayArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Sorting an integer array
    int intArray[] = {5, 2, 8, 1, 3};
    int intSize = sizeof(intArray) / sizeof(int);
    sortArray(intArray, intSize);
    std::cout << "Sorted Integer Array: ";
    displayArray(intArray, intSize);

    // Sorting a double array
    double doubleArray[] = {3.3, 1.1, 2.2, 5.5, 4.4};
    int doubleSize = sizeof(doubleArray) / sizeof(double);
    sortArray(doubleArray, doubleSize);
    std::cout << "Sorted Double Array: ";
    displayArray(doubleArray, doubleSize);

    return 0;
}
