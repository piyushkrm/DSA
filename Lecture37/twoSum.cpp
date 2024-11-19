

// 1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Approach 1 --> Brute force approach
vector<int> twoSum(vector<int> nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int first = nums[i];
        for (int j = i + 1; j < n; j++) {
            int second = nums[j];
            if (first + second == target) {
                return {i, j};
            }
        }
    }
    return {};  // No pair found
}

// Approach 2 --> Two-pointer approach
void two_sum(vector<int>& numbers, int target) {
    vector<pair<int, int>> indexed_nums;
    for (int i = 0; i < numbers.size(); i++) {
        indexed_nums.push_back({numbers[i], i});
    }

    // Sort based on values
    sort(indexed_nums.begin(), indexed_nums.end());

    int start = 0;
    int end = numbers.size() - 1;

    while (start < end) {
        int sum = indexed_nums[start].first + indexed_nums[end].first;

        if (sum == target) {
            cout << "Indices of the two numbers that add up to target: "
                 << indexed_nums[start].second << ", " << indexed_nums[end].second << endl;
            return;
        } else if (sum < target) {
            start++;
        } else {
            end--;
        }
    }
    // If no solution found
    cout << "No two numbers add up to the target." << endl;
}

// Approach 3 --> Hash map approach
vector<int> two_Sum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};  // No pair found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Brute Force
    vector<int> result = twoSum(nums, target);
    cout << "Brute Force - Indices: " << result[0] << ", " << result[1] << endl;

    // Two-Pointer
    two_sum(nums, target);

    // Hash Map
    vector<int> answer = two_Sum(nums, target);
    cout << "Hash Map - Indices: " << answer[0] << ", " << answer[1] << endl;

    return 0;
}
