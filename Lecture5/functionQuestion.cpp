
// function questions

#include <iostream>
using namespace std;

// Qs1. Calculate sum of two numbers using the function
int calSum(int N) {
    int sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += i;
    }
    return sum;
}

// Qs2. Calculate factorial of a number N
int factorial(int N) {
    if (N == 0 || N == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= N; i++) {
        fact *= i;
    }
    return fact;
}

// Qs3. Calculate the sum of the digits of a number
int sumOfDigits(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main() {
    int num1;
    cout << "Enter number to calculate sum from 1 : ";
    cin >> num1;
    cout << "Sum of numbers from 1 to " << num1 << " are : " << calSum(num1);

    int num2;
    cout << "\nEnter number to calculate factorial : ";
    cin >> num2;
    cout << "Factorial of " << num2 << " is : " << factorial(num2);

    int num3;
    cout << "\nEnter number to calculate sum of digits : ";
    cin >> num3;
    cout << "Sum of digits of " << num3 << " is : " << sumOfDigits(num3);
}