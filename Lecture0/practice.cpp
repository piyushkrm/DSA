

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

// 6. Find the factorial of a number
int factorial(int n) {
    if (n <= 1) return  1;
    return n * factorial(n - 1);
}

// 7. Check if the age is greater than or equal to 18 years old or not
bool age(int n) {
    return n >= 18;  
}

// 8. Ternary operator
int op(int n) {
    return (n % 2 == 0)? n : n + 1;
}

// 9. Calculate sum of 1  to n number with function
int sumOfn(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

// 10. Calculate factorial using loops
int factorialWithLoop(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
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

    // 6. Find the factorial of a number
    int factorialNumber = 5;
    cout << "Factorial of " << factorialNumber << ": " << factorial(factorialNumber) << endl;

    // 7. Check if the age is greater than or equal to 18 years old or not
    int ageNumber = 17;
    cout << "Age is valid: " << (age(ageNumber)? "Yes" : "No") << endl;

    // 8. Ternary operator
    cout << "Ternary operator result: " << op(20) << endl;

    // 9. Calculate sum of 1 to n number with function
    cout << "Sum of 1 to " << "50" << ": " << sumOfn(50) << endl;

    // 10. Calculate factorial using loops
    cout << "Factorial of 5 using loops: " << factorialWithLoop(5) << endl;



    return 0;
}