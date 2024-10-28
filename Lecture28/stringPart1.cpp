

// String part 1

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Approach 1 
bool isPalindrome1(string str) {
    int start = 0;
    int end = str.length() - 1;
    while(start < end) {
        if(str[start++]!= str[end--]) {
            return false;
        } 
    }
    return true;
}

// Approach 2
bool isPalindrome2(string str) {
    string strRev = str;
    reverse(strRev.begin(), strRev.end());
    return str == strRev;
}

int main() {


    char str[100] = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Input and output the string
    char str2[100];
    cout << "Enter a string: ";
    cin >> str2;
    cout << "String entered: " << str2 << endl;

    // Input and output for character arrays
    char str3[100];
    cin.getline(str3, 100);
    cout << "Character array entered: " << str3 << endl;

    String function or operations
    string st1 = "Piyush";
    string st2 = "Mishra";

    // length of strings
    cout << "Length of st1: " << st1.length() << endl;
    cout << "Length of st2: " << st2.length() << endl;

    // String concatenation
    string st3 = st1 + " " + st2;
    cout << "Concatenated string: " << st3 << endl;
    

    // String comparison
    cout << "Comparison of st1 and st2: " << (st1 == st2? "Equal" : "Not equal") << endl;
    cout << "Comparison of st1 and st2: " << (st1 < st2 ? "st1 is less than st2" : "st1 is greater than st2") << endl;

    // Substring
    string st4 = st1.substr(3, 5);
    cout << "Substring: " << st4 << endl;

    // Loops on string
    for (int i = 0; i < st3.length(); i++) {
        cout << st3[i] << " ";
    }
    cout << endl;

    for (char st : st3) {
        cout << st << " ";
    }
    cout << endl;

    //Reverse
    // Reverse for characters
    string s1 = "CodeWithPiyush";
    int st = 0;
    int end = s1.length() - 1;

    while (st < end) {
        swap(s1[st++], s1[end--]);
    }
    cout << "Reversed string: " << s1 << endl;

    // Reverse for string
    string s2 = "CodeWithPihu";
    reverse(s2.begin(), s2.end());
    cout << "Reversed string: " << s2 << endl;


    // HomeWork : Find if a string is a string is palindrome or not.
    // Approach 1
    string str01 = "level";
    string str02 = "car";
    cout << "Is palindrome: " << (isPalindrome1(str01)? "Yes" : "No") << endl;
    cout << "Is palindrome: " << (isPalindrome1(str02)? "Yes" : "No") << endl;

    // Approach 2 : Reverse the string and compare with original
    cout << "Is palindrome: " << (isPalindrome2(str01)? "Yes" : "No") << endl;
    cout << "Is palindrome: " << (isPalindrome2(str02)? "Yes" : "No") << endl;

    return 0;
}