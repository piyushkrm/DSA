

// print subarray of an array

#include <iostream>
#include <vector>
#include <climits>

using namespace std;
/**
 * The function `printSubArray` prints all possible subarrays of an input array.
 * 
 * @param arr The `arr` parameter is an integer array that contains the elements of the array for which
 * you want to print all possible subarrays.
 * @param n The parameter `n` in the `printSubArray` function represents the size of the array `arr[]`,
 * indicating the number of elements in the array that you want to consider for printing subarrays.
 */

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


/**
 * The function calculates the maximum sum of a subarray within a given array.
 * 
 * @param arr The function `maxSumOfSubArray` takes an array `arr` of integers and its size `n` as
 * input parameters. It calculates the maximum sum of a subarray within the given array using a nested
 * loop approach.
 * @param n The parameter `n` in the `maxSumOfSubArray` function represents the size of the array
 * `arr[]`, which is the number of elements in the array. This parameter is used to determine the
 * length of the array and iterate over its elements to find the maximum sum of a subarray
 */

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

// Find maximum of an sub array using Kadane's Algorithm
int maxSubArray(int arr[], int n) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    cout << "Maximum sum of a subArray is: " << maxSum << endl;
}


int main() {
    int n = 8;
    int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    // printSubArray(array, n);

    int arr[8]= {3, -4, 5, 4, -1, 7, -8};
    // maxSumOfSubArray(arr, 7);
    maxSubArray(arr, 8);
    return 0;
}