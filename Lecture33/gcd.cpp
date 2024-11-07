

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

int main() {
    int num1, num2;
    cout << "Enter 1st numbers: ";
    cin >> num1;
    cout << "Enter 2nd numbers: ";
    cin >> num2;

    // Calculate GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}