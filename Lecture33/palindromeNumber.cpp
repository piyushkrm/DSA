
// Palindrome number leet code problem 9

#include <iostream>

using namespace std;

// Function to reverse the number

int reverseNumber(long long number) {
    long long reverse = 0;
    while (number > 0) {
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    return reverse;
}

// Function to check if the number is palindrome or not
bool isPalindrome(int number) {
    if (number < 0) return false;
    return number == reverseNumber(number);
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Is the number palindrome? " << (isPalindrome(number) ? "Yes" : "No") << endl;
    return 0;
}