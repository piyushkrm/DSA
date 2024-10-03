// leetcode 33. Search in Rotated Sorted Array

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << search(nums, target) << endl; // Output: 4
    return 0;
}