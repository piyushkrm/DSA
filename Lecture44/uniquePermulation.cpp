
// Leet code problem 47. Permutations II 
// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

// Backtracking function to compute unique permutations
void getPermutations(vector<int>& nums, int idx, vector<vector<int>>& ans) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++) {
        // Skip duplicates
        if (i != idx && nums[i] == nums[idx]) continue;

        // Swap current index with the loop index
        swap(nums[idx], nums[i]);
        
        // Recurse
        getPermutations(nums, idx + 1, ans);

        // Backtrack
        swap(nums[idx], nums[i]);
        
        // Skip further iterations for duplicates
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end()); // Ensure array is sorted to handle duplicates
    getPermutations(nums, 0, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> result = permuteUnique(nums);

    cout << "Unique Permutations are:" << endl;
    for (auto &v : result) {
        for (int &num : v) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
