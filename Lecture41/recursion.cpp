

// Recursion part - 1

#include <iostream>

using namespace std;

// Recursive function to print numbers from n to 1
int printNums(int n) {
    if (n == 0) return 0;
    cout << n << " ";
    return printNums(n - 1);
}

int main() {
    int n;
    cout << "Enter the number to print numbers from n to 1: ";
    cin >> n;
    printNums(n);
    return 0;
}