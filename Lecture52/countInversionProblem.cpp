// Count Inversion Problem

#include <iostream>
#include <vector>

using namespace std;

// Function to count inversions using a brute force approach
int countInversions(vector<int>& nums) {
    int count = 0;
    // Check every pair of elements
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            // Count if a larger element appears before a smaller one
            if (nums[i] > nums[j]) {
                count++;
            }
        }
    }
    return count;
}

// Helper function to merge two sorted subarrays and count inversions
int merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp; // Temporary array to store merged elements
    int i = st, j = mid + 1; // Pointers for left and right subarrays
    int count = 0; // Counter for inversions

    // Merge the two subarrays while counting inversions
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            count += mid - i + 1; // Count inversions
        }
    }

    // Copy remaining elements from the left subarray
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    // Copy remaining elements from the right subarray
    while (j <= end) {
        temp.push_back(arr[j++]);
    }

    // Copy merged elements back to the original array
    for (int k = 0; k < temp.size(); k++) {
        arr[st + k] = temp[k];
    }

    return count;
}

// Recursive function to perform merge sort and count inversions
int mergeSort(vector<int>& arr, int st, int end) {
    if (st < end) { // Base case: when the subarray has one or no elements
        int mid = (st + end) / 2;
        // Recursively sort and count inversions in the left and right halves
        int left = mergeSort(arr, st, mid);
        int right = mergeSort(arr, mid + 1, end);
        // Count inversions during the merge step
        int current = merge(arr, st, mid, end);

        return left + right + current;
    }
    return 0; // No inversions in a single-element subarray
}

int main() {
    // Test case: Array to demonstrate the algorithm
    vector<int> nums = {8, 4, 2, 1, 5, 6, 3};
    vector<int> counts = {6, 3, 5, 2, 7};

    // Using the optimal merge sort-based approach to count inversions
    int inversionWithOptimal = mergeSort(counts, 0, counts.size() - 1);
    cout << "Number of inversions: " << inversionWithOptimal << endl;

    // Uncomment the following lines to test the brute force approach
    int inversions = countInversions(nums);
    cout << "Number of inversions (Brute Force): " << inversions << endl;

    return 0;
}
