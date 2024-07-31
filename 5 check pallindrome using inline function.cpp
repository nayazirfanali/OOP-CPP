#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

inline bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }

    return 0;
}
