#include <iostream>
#include <algorithm>
using namespace std;

inline bool isPalindrome(string str) {
    string original = str;
    reverse(str.begin(), str.end());
    return original == str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
    return 0;
}
