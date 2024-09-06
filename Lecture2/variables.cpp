
/**
 * The code defines and prints variables of different data types (int, float, bool, double) along with
 * their sizes in C++.
 * 
 * @return The program is returning 0, which is the standard return value for a C++ program that has
 * executed successfully.
 */
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

    // Double
    double e = 2.71828;
    cout << "E : " << e << endl;
    // print the size of doubles(8)
    cout << sizeof(e) << endl;

    return 0;
}