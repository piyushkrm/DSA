

// String part 1

#include <iostream>
#include <string>

using namespace std;

int main() {
    // char str[100] = "Hello, World!";
    // cout << "Original string: " << str << endl;

    // // Input and output the string
    // char str2[100];
    // cout << "Enter a string: ";
    // cin >> str2;
    // cout << "String entered: " << str2 << endl;

    // // Input and output for character arrays
    // char str3[100];
    // cin.getline(str3, 100);
    // cout << "Character array entered: " << str3 << endl;

    //String function or operations
    string st1 = "Piyush";
    string st2 = "Mishra";

    // length of strings
    cout << "Length of st1: " << st1.length() << endl;
    cout << "Length of st2: " << st2.length() << endl;

    // String concatenation
    string st3 = st1 + " " + st2;
    cout << "Concatenated string: " << st3 << endl;
    


    return 0;
}