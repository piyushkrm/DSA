
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

// Recursive function to check if the array is sorted or not
bool isSorted(int arr[], int n) {
    if (n == 0 || n == 1) return true;
        return (arr[n-1] >= arr[n-2] && isSorted(arr, n-1));
}

// Recursive function for Binary search Leet code problem 704
int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == target)
            return mid;

        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, right, target);
    }

    // We reach here when element is not present in array
    return -1;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacciNum(n) << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << "Is the array sorted? " << (isSorted(arr, 5)? "Yes" : "No") << endl;

    int target = 2;
    cout << "Index of " << target << " is: " << binarySearch(arr, 0, 4, target) << endl;

    return 0;
}