
// Reverse Number  Leet code problem 7

#include <iostream>
#include <climits>

using namespace std;

// Function to print reverse of number
int reverseNumber(int number)  {
    int reverse = 0;
    while (number != 0) {
        int digit = number % 10;

    if(reverse > INT_MAX/10 || reverse < INT_MIN/10) {
        return 0;
    }
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