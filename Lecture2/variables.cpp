
// Variables
#include <iostream>
using namespace std;

int main() {
    // Integer
    int age = 18;
    cout << "Age : " << age << endl;

    // print the size of integers(4)
    cout << sizeof(age) << endl;


    // Float
    float pi = 3.14;
    cout << "Pi : " << pi << endl;
    // print the size of floats(4)
    cout << sizeof(pi) << endl;



    // Booleans
    bool isStudent = true;
    cout << "Is Student : " << (isStudent? "Yes" : "No") << endl;
    // print the size of booleans(1)
    cout << sizeof(isStudent) << endl;


    return 0;
}