
// 560. Subarray Sum Equals K
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

#include <iostream>
#include <vector>

#include <unordered_map>

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

// Optimize approach with prefix
int subarraySumPrefix(vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();
    vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }
    unordered_map<int, int> m;
    for (int j = 0; j < nums.size(); j++) {
        if (prefixSum[j] == k) count++;
        int val = prefixSum[j] - k;

        if (m.find(val) != m.end()) {
            count += m[val];
        }

        if (m.find(prefixSum[j]) == m.end()) {
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
    }

int main() {
    vector<int> nums = {9, 4, 20, 3, 10, 5};
    int k = 33;
    cout << "Total number of subarrays with sum equal to " << k << ": " << subarraySum(nums, k) << endl;

    // calling optimized function
    cout << "Total number of subarrays with sum equal to " << k << ": " << subarraySumPrefix(nums, k) << endl;

    return 0;
}