// Quick Sort Algorithm Implementation in C++
// This code sorts an array of integers using the Quick Sort algorithm.

#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array into two subarrays around a pivot
int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[high]; // Pivot element (last element in the array)
    int i = low - 1;        // Index for smaller elements

    // Traverse the array and rearrange elements based on pivot
    for (int j = low; j <= high - 1; j++) {
        if (nums[j] <= pivot) {
            i++;
            swap(nums[i], nums[j]); // Swap if element is smaller than pivot
        }
    }
    // Place the pivot element in its correct position
    swap(nums[i + 1], nums[high]);
    return (i + 1); // Return the pivot index
}

// Recursive function to perform Quick Sort
void quickSort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pi = partition(nums, low, high); // Partition the array
        quickSort(nums, low, pi - 1);        // Sort elements before pivot
        quickSort(nums, pi + 1, high);      // Sort elements after pivot
    }
}

int main() {
    vector<int> nums = {12, 7, 11, 18, 9, 15}; // Input array
    int n = nums.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Perform Quick Sort
    quickSort(nums, 0, n - 1);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
