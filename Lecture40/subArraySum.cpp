
// 560. Subarray Sum Equals K
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

#include <iostream>
#include <vector>

using namespace std;

// Brute force multiplication
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum == k) count++;
        }
    }
    return count;

}

int main() {
    vector<int> nums = {9, 4, 20, 3, 10, 5};
    int k = 33;
    cout << "Total number of subarrays with sum equal to " << k << ": " << subarraySum(nums, k) << endl;
    return 0;
}