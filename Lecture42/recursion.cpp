
// Recursion part 2

// 509. Fibonacci Number
// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

#include <iostream>

using namespace std;


// Recursive function to print nth fibonacci digit
int fibonacciNum(int n) {
    if (n == 0 || n == 1) return n;

    return fibonacciNum(n-1) + fibonacciNum(n-2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacciNum(n) << endl;
    return 0;
}