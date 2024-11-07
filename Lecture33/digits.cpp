

// Digits in a number

#include <iostream>
using namespace std;

// Function to count the number of digits in a number
void countDigits(int x) {
    int count = 0;
    while (x != 0) {
        int digit = x % 10;
        count++;
        x /= 10;
    }
    cout << "Number of digits: " << count << endl;
}

// Function to print the number of digits in a number
void printDigits(int x) {
    while (x != 0) {
        int digit = x % 10;
        cout << digit << " ";
        x /= 10;
    }
    cout << endl;
}

// Function to calculate the sum of digits
void sumDigits(int x) {
    int sum = 0;
    while (x != 0) {
        int digit = x % 10;
        sum += digit;
        x /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    countDigits(num);
    printDigits(num);
    sumDigits(num);
    shortCut(num);
    return 0;
}