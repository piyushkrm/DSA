//Leet code problem 78. Subsets
// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include <iostream>
#include <vector>

using namespace std;

void getSubSet(vector<int >& nums, vector<int>& subsets, int i, vector<vector<int>>& allSubSets) {
    if (i == nums.size()) {
        allSubSets.push_back(subsets);
        return;
    }

    // Inclusion
    subsets.push_back(nums[i]);
    getSubSet(nums, subsets, i + 1, allSubSets);

    // Backtracking
    subsets.pop_back();

    // Exclusion
    getSubSet(nums, subsets, i + 1, allSubSets);

}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubSet;
    vector<int> ans;
    getSubSet(nums, ans, 0, allSubSet);

    return allSubSet;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> allsubsets = subsets(nums);
    for (auto subset : allsubsets) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
}