// Binary search algorithm 

#include <iostream>
#include <vector>

using namespace std;

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
}

int main() {
    vector<int>arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    // Output: 6 (index of target in the array)
    cout << "Index of " << target << " is: ";
    cout << binarySearch(arr, target) << endl;
}