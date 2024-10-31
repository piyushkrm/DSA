

// String part 2
// Valid palindrome     Leet code 125

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isAlphaNumeric(char ch) {
    return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z');
}

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (!isAlphaNumeric(tolower(str[start]))) {
            start++;
            continue;
        }

        if (!isAlphaNumeric(tolower(str[end]))) {
            end--;
            continue;
        }

        if (tolower(str[start])  != tolower(str[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    //  Call the isPalindrome() function
    string str = "Ac3?e3c&a";
    cout << "Is the string palindrome? " << (isPalindrome(str) ? "Yes" : "No") << endl;
}
