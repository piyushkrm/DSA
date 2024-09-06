/**
 * The C++ program demonstrates implicit and explicit type casting in variables.
 * 
 * @return The program returns the value of the grade 'O' as an integer and the weight 65.5 as an
 * integer after type casting.
 */
// write snippet

#include <iostream>
using namespace std;

int main() {
    // Implicit conversion
    char grade = 'O';
    int value = grade;
    cout << "Value of grade " << grade << " is: " << value << endl;

    // Explicit conversion
    double weight = 65.5;
    int weightInt = int(weight);
    cout << "Weight in integer: " << weightInt << endl;

    return 0;
}

// g++ typeCasting.cpp -o a.exe; ./a.exe

