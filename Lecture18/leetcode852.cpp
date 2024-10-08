

// leet code 852. Peak Index in a Mountain Array

#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return arr[mid];
        } else if (arr[mid- 1] < arr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;  // return the peak index
    // or return right if the peak index is at the right end of the array
}

int main() {
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    cout << "Peak index is : ";
    cout << peakIndexInMountainArray(arr) << endl; // Output: 9
    return 0;
}