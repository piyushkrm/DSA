

// In this folder we are practice the all basics problem


#include <iostream>

using namespace std;

// 1. Sum of two numbers
int sumOfTwoNumbers(int a, int b) {
    return a + b;
}

// Check if the number is prime or not
bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Check if the number is negative or not
bool isNegative(int num) {
    return num < 0;
}
int main() {
    // 1 Sum of two numbers
    int sum = sumOfTwoNumbers(5, 7);
    cout << "Sum: " << sum << endl;

    // 2 Check if the number is prime or not
    int num = 27;
    bool isPrimeNumber = isPrime(num);
    cout << num << " is prime: " << (isPrimeNumber? "Yes" : "No") << endl;

    // 3 Check if the number is negative or not
    int negativeNum = -5;
    bool isNegativeNumber = isNegative(negativeNum);
    cout << negativeNum << " is negative: " << (isNegativeNumber? "Yes" : "No") << endl;

    return 0;
}