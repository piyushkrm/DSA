

// In this folder we are practice the all basics problem


#include <iostream>

using namespace std;

// 1. Sum of two numbers
int sumOfTwoNumbers(int a, int b) {
    return a + b;
}

// 2. Check if the number is prime or not
bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// 3. Check if the number is negative or not
bool isNegative(int num) {
    return num < 0;
}

// 4. Calculate simple interest
int simpleInterest(int principal, int interest, int time) {
    return (principal * interest * time) / 100;
}

// 5. Minumum and maximum number
int min(int n, int m) {
    if (n > m) return n;
}

int max(int n, int m) {
    if (n < m) return n;
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

    // 4. Calculate the simple interest
    int principal = 1000;
    int interest = 5;
    int time = 2;
    int simpleInterestAmount = simpleInterest(principal, interest, time);
    cout << "Simple Interest: " << simpleInterestAmount << endl;

    // 5. Minumum and maximum number
    cout << "Minimum number: " << min(0, 10) << endl;
    cout << "Maximum number: " << max(10, 0) << endl;

    return 0;
}