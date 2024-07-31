#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class SecondLargestFinder {
public:
    int findSecondLargest(vector<int>& arr) {
        int first = INT_MIN, second = INT_MIN;
        for (int num : arr) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second && num != first) {
                second = num;
            }
        }
        return second;
    }
};

int main() {
    vector<int> arr = {12, 35, 11, 24};
    SecondLargestFinder finder;

    int secondLargest = finder.findSecondLargest(arr);
    if (secondLargest == INT_MIN) {
        cout << "there is no second largest element." << endl;
    } else {
        cout << "the second largest element is: " << secondLargest << endl;
    }

    return 0;
}