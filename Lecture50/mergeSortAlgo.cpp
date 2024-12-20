// Merge Sort Algorithm

#include <iostream>
#include <vector>

using namespace std;

// Merge function to merge two sorted sub-arrays
void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;   // Temporary array to store merged elements
    int i = st, j = mid + 1;

    // Merge the sorted sub-arrays into temp (descending order)
    while (i <= mid && j <= end) {
        // Uncomment below line for ascending order sorting
        // if (arr[i] <= arr[j]) {
        if (arr[i] >= arr[j]) {  // For descending order
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Add remaining elements from left sub-array (if any)
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Add remaining elements from right sub-array (if any)
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the sorted elements from temp back to original array
    for (int k = st; k <= end; k++) {
        arr[k] = temp[k - st];
    }
}

// Function to recursively divide and merge the array
void mergeSort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;  // Find the middle point
        mergeSort(arr, st, mid);         // Sort the left sub-array
        mergeSort(arr, mid + 1, end);    // Sort the right sub-array
        merge(arr, st, mid, end);        // Merge the sorted sub-arrays
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};  // Sample array to sort

    // Call mergeSort on the entire array
    mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array is: ";
    for (int val : arr) {
        cout << val << " ";  // Display each element
    }
    cout << endl;

    return 0;
}
