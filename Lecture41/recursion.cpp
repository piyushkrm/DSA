

// Recursion part - 1

#include <iostream>

using namespace std;

// Recursive function to print numbers from n to 1
int printNums(int n) {
    if (n == 0) return 0;
    cout << n << " ";
    return printNums(n - 1);
}

// Recursion function to calculate the factorial of the given number
int factPrint(int n) {
    if (n == 0) return 1;
    return n * factPrint(n - 1);
}

int main() {
    int n;
    cout << "Enter the number to print numbers from n to 1: ";
    cin >> n;
    printNums(n);

    cout << "\nEnter the number to calculate its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factPrint(n);
    

    return 0;
}