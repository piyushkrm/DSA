/**
 * The above code implements the Quick Sort algorithm in C++ to sort a vector of integers.
 * 
 * @param nums The `nums` vector contains the elements {12, 7, 11, 18, 9, 15}.
 * @param low The `low` parameter in the Quick Sort algorithm represents the starting index of the
 * subarray that needs to be sorted. It is the index of the first element in the subarray.
 * @param high In the given code snippet, the parameter `high` represents the index of the last element
 * in the array (vector) being sorted. It is used in the `quickSort` function to determine the range of
 * elements to be sorted within the vector.
 * 
 * @return The `partition` function in the Quick Sort algorithm returns the index of the pivot element
 * after partitioning the array.
 */


// Quick Sort Algorithm

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (nums[j] <= pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[high]);
    return (i + 1);
}

void quickSort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pi = partition(nums, low, high);
        quickSort(nums, low, pi - 1);
        quickSort(nums, pi + 1, high);
    }
}

int main() {
    vector<int> nums = {12, 7, 11, 18, 9, 15};
    int n = nums.size();
    quickSort(nums, 0, n);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
}