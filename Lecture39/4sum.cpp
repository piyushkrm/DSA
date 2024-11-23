
// Leet code problem 18. 4Sum problem
// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n;) {
            int p = j + 1;
            int q = n - 1;
            while (p < q) {
                long long sum = (long long) nums[i] + (long long) nums[j] + (long long) num[p] + (long long) num[q];

                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[p], nums[q]});
                    while (p < q && num[p] == nums[p - 1]) p++;
                    p++;
                    q--;
                } else if (sum < target) {
                    q--;
                } else {
                    p++;
                }
            }
            while (j < n && nums[j] == nums[j - 1]) j++;
        }
    }
    return result;
}

