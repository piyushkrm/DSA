//Leet code problem 78. Subsets
// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include <iostream>
#include <vector>

using namespace std;

void getSubSet(vector<int >& num, vector<int>& subsets, int i, vector<int>&allSubSets) {
    if (i == nums.size()) {
        allSubSets.push_back(subsets);
        return;
    }

    // Inclusion
    ans.push_back(nums[i]);
    getSubSet(nums, subsets, i + 1, allSubSets);

    // Backtracking
    ans.pop_back();

    // Exclusion
    getSubSet(nums, subsets, i + 1, allSubSets);

}

