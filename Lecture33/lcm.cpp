

// Calculate LCM 
// LCM = (x * y) / gcd(x, y)

#include <iostream>

using namespace std;

// Function to calculate gcd(x, y)
int gcd(int x, int y) {
    if (x == 0) return y;
    return gcd(y % x, x);
}

// Function to calculate the LCM
int lcm(int x, int y) {
    return (x * y) / gcd(x, y);
}

int main() {
    int x = 12, y = 18;
    cout << "LCM of " << x << " and " << y << " is : " << lcm(x, y);
    return 0;
}