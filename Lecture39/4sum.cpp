// LeetCode Problem 18: 4Sum
// Given an array nums of n integers, return an array of all unique quadruplets [nums[a], nums[b], nums[c], nums[d]]
// such that:
// - 0 <= a, b, c, d < n
// - a, b, c, and d are distinct
// - nums[a] + nums[b] + nums[c] + nums[d] == target
// The answer may be returned in any order.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find all unique quadruplets that sum up to the target
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> answer;

    // Sort the array to enable the two-pointer approach
    sort(nums.begin(), nums.end());

    // Outer loop to fix the first element
    for (int i = 0; i < n; i++) {
        // Skip duplicate elements for the first pointer
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        // Second loop to fix the second element
        for (int j = i + 1; j < n;) {
            int p = j + 1;      // Left pointer
            int q = n - 1;      // Right pointer

            // Two-pointer technique for the remaining two elements
            while (p < q) {
                // Calculate the sum of the current quadruplet
                long long sum = (long long) nums[i] + (long long) nums[j] 
                                + (long long) nums[p] + (long long) nums[q];

                if (target < sum) {
                    // If the sum is greater than the target, move the right pointer left
                    q--;
                } else if (target > sum) {
                    // If the sum is less than the target, move the left pointer right
                    p++;
                } else {
                    // If the sum matches the target, store the quadruplet
                    answer.push_back({nums[i], nums[j], nums[p], nums[q]});
                    
                    // Move both pointers and skip duplicates
                    p++;
                    q--;
                    while (p < q && nums[p] == nums[p - 1]) p++;
                }
            }

            // Move to the next unique element for the second pointer
            j++;
            while (j < n && nums[j] == nums[j - 1]) j++;
        }
    }
    return answer;
}

int main() {
    // Example input
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    // Call the fourSum function and store the result
    vector<vector<int>> result = fourSum(nums, target);

    // Print the resulting quadruplets
    for (auto &v : result) {
        for (int &num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
