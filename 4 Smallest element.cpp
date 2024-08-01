#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int size) {
    int missing = 0;
    int i = 0;

    while (i < size) {
        if (arr[i] == missing) {
            missing++;
            i++;
        } else {
            break;
        }
    }

    return missing;
}

int main() {
    int arr[] = {0, 1, 2, 6, 9, 11, 15}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findSmallestMissing(arr, size);

    cout << "The smallest missing element is: " << missing << endl;

    return 0;
}
