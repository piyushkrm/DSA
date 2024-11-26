
// Recursion part 2

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