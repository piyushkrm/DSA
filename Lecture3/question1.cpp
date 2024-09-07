
// simple code snippet
// Question : Check if character is lowercase and uppercase
#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "Enter any character : " << ch;
    cin >> ch;

    if (ch < 97) {
        cout << "Character is in upper case" << endl;
    } else {
        cout << "Character is in lower case" << endl;
    }
    
    // Another method
    if (ch <= 'A' && ch <= 'Z') {
        cout << "Character is in upper case" << endl;
    } else {
        cout << "Character is in lower case" << endl;
    }

    return 0;
}