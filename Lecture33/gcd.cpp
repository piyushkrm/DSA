

// GCD and HCF

#include <iostream>
using namespace std;

// Function to calculate GCD and HCF
int gcd(int x, int y) {
    if (x == 0) return y;
    if (y == 0) return x;

    int gcd = 1;

    for (int i = 1; i < min(x, y); i++) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

// Optimized approach to find out the GCD and HCF using Euclid's algorithm

int gcdOptimized(int x, int y) {
    while(x > 0 && y > 0) {
        if (x > y) {
            x = x % y;
            // x -= y;
        } else {
            y = y % x;
            // y -= x;
        }
    }
    return (x == 0 ) ? y : x;  // If x is 0, return y, otherwise return x
}

// Euclid's algorithm with recursion
int gcdRecursion(int x, int y) {
    if (x == 0) return y; 
    return gcdRecursion(y % x, x);
}

int main() {
    int num1, num2;
    cout << "Enter 1st numbers: ";
    cin >> num1;
    cout << "Enter 2nd numbers: ";
    cin >> num2;

    // Calculate GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

    // Calculate HCF
    cout << "HCF of " << num1 << " and " << num2 << " is: " << gcdOptimized(num1, num2) << endl;

    // Calculate GCD using recursion
    cout << "GCD of " << num1 << " and " << num2 << " using recursion is: " << gcdRecursion(num1, num2) << endl;
    return 0;
}