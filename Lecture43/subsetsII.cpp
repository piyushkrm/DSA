// Leet code problem 90. Subsets II
// Given an integer array nums that may contain duplicates, return all possible  subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    void getSubSet(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubSet) {
        if (nums.size() == i) {
            allSubSet.push_back(ans);
            return;
        }

        // Inclusion
        ans.push_back(nums[i]);
        getSubSet(nums, ans, i + 1, allSubSet);

        // Backtracking
        ans.pop_back();

        // Skipping duplicates
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1]) idx++;

        // Exclusion
        getSubSet(nums, ans, idx, allSubSet);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allSubSet;
        vector<int> ans;
        getSubSet(nums, ans, 0, allSubSet);
        return allSubSet;
    }