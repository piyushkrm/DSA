

// print subarray of an array

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void printSubArray(int arr[], int n) {
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << " ";
        }
        cout << endl;
    }

}

void maxSumOfSubArray(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++) {
    int currentSum = 0;
        for (int end = start; end < n; end++) {
                currentSum += arr[end];
                maxSum = max(maxSum, currentSum);
        }
    }
    cout << "Maximum sum of a subArray is: " << maxSum << endl;

}

int main() {
    int n = 8;
    int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    // printSubArray(array, n);

    int arr[]= {3, -4, 5, 4, -1, 7, -8};
    maxSumOfSubArray(arr, 7);
    return 0;
}