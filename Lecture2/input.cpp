/**
 * This C++ program prompts the user to enter a number, reads the input, and then displays the entered
 * number.
 * 
 * @return The `main` function is returning an integer value of 0. This is a common practice in C++
 * programs to indicate that the program executed successfully.
 */
// write simple code snippet

#include <iostream>
using namespace std;

int main() {
    int num;
    // Take the input
    cout << "Enter any number : " << endl;
    // cout << num <<endl; //print garbage collected
    cin >> num;
    // Print the inputted number
    cout << "You entered: " << num << endl;

    return 0;
}
