#include <iostream>
#include <string>
using namespace std;

bool isPalindromeRecursive(const string& str, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (str[left] != str[right]) {
        return false;
    }
    return isPalindromeRecursive(str, left + 1, right - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindromeRecursive(str, 0, str.length() - 1)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

