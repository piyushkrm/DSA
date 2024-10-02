// Binary search algorithm 

#include <iostream>
#include <vector>

using namespace std;

// Iterative search approach
int binarySearch(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) {
        int mid = start + (end - start)/2;

        // Search on 1st half of an array
        if (arr[mid] < target) {
            start = mid + 1;
        } 
        // Search on 2nd half of an array
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        // Target found
        else {
            return mid;
        }
    }
    return -1; // Target not found in the array
    // Time Complexity = 0(log n)
}

// Now we use recursive approach to find the target
int binarySearchRecursive(vector<int> array, int target, int start, int end) {
    if (start <= end) {
        int mid = start + (end - start)/2;
        // Find the target in the 2nd half of an array
        if (array[mid] < target) {
            return binarySearchRecursive(array, target, mid+1, end);
        }
        // Find the target in the 1st half of the array
        else if(array[mid] > target) {
            return binarySearchRecursive(array, target, start, mid-1);
        }
        // Target found
        else {
            return mid;
        }
    }
    return -1; // Target not found in the array
}
int main() {
    vector<int>arr = {-1, 0, 3, 4, 5, 9, 12, 49, 56, 20};
    int target = 12;
    // Output: 6 (index of target in the array)
    cout << "Index of " << target << " is: " << binarySearch(arr, target) << endl;
    cout << "Index of " << target << " is: " << binarySearchRecursive(arr, target, 0, arr.size()-1) << endl;
    return 0;  // End of the program
}