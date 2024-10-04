// leet code 33. Search in Rotated Sorted Array

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[left] <= nums[mid]) {  //left side is  sorted
            if (nums[left] <= target && target <= nums[mid]) {
                right = mid - 1;    // target is in the left half
            } else {
                left = mid + 1;     // target is in the right half
            } 
        } else { //right side is sorted
                if (nums[mid] <= target && target <= nums[right]) {
                    left = mid + 1;  // target is in the right half
                } else {
                    right = mid - 1; // target is in the left
                }
            }
        } 
    return -1;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << search(nums, target) << endl; // Output: 4
    return 0;
}