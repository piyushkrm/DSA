// Leet code problem 90. Subsets II
// Given an integer array nums that may contain duplicates, return all possible  subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allSubSet;
        vector<int> ans;
        getSubSet(nums, ans, 0, allSubSet);
        return allSubSet;
    }