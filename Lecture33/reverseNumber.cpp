
// Reverse Number

#include <iostream>

using namespace std;

// Function to print reverse of number
int reverseNumber(int number)  {
    int reverse = 0;
    while (number != 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    return reverse;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Reverse of " << number << " is: " << reverseNumber(number) << endl;
    return 0;
}