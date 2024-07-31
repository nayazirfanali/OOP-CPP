#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {15, 14, 25, 14, 32, 14, 31};
    set<int> s(arr.begin(), arr.end());
    vector<int> sortedArr(s.begin(), s.end());

    cout << "Sorted Array = {";
    for (size_t i = 0; i < sortedArr.size(); ++i) {
        cout << sortedArr[i];
        if (i != sortedArr.size() - 1) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
