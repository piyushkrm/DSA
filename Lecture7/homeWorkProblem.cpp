

// 6 & 10
// 6 | 10
// 6 ^ 10
// 10 << 2
// 10 >> 1

#include <iostream>
using namespace std;

int reverseInt(int x) {
    // Write a program to reverse an integer
    int reversed = 0;
    while (x!= 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return reversed;
}

// figure out how to find if a number is power of 2 without any loops.
    // 1010 in binary is 1010, and 1010 is 1010 shifted 1 bit to the right, which is 101.
    // So, 1010 & 101 is 101, which means 1010 is a power of 2.
    bool isPowerOf2(int x) {
    bool isPowerOfTwo = (x & (x - 1)) == 0;
    cout << "Is " << x << " a power of 2? " << (isPowerOfTwo? "Yes" : "No") << endl;

    return 0;
}



int main() {
    // 6 & 10
    cout << (6& 10) << endl;

    // 6 | 10
    cout << (6 | 10) << endl;

    // 6 ^ 10
    cout << (6 ^ 10) << endl;

    // 10 << 2
    cout << (10 << 2) << endl;

    // 10 >> 1
    cout << (10 >> 1) << endl;

    // Write a program to reverse an integer
    int x = 12345;
    int reversed = reverseInt(x);
    cout << "Reversed integer: " << reversed << endl;

    // Find if a number is power of 2 without using loops
    int n = 34;
    isPowerOf2(n);

    return 0;
}