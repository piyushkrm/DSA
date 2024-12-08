// leet code problem 46. Permutations


// Given an array nums of distinct integers, return all the possible permutations.  You can return the answer in any order.

#include <iostream>
#include <vector>

using namespace std;

void getPermutation(vector<int>& nums, int idx, vector<vector<int>>& result) {
    if (idx == nums.size()) {
        result.push_back(nums);
    }

    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);

        getPermutation(nums, idx+1, result);
        
        swap(nums[idx], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    getPermutation(nums, 0, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> nums1 = {10, 20, 30};
    // vector<vector<int>> result = permute(nums);
    vector<vector<int>> result = permute(nums1);


    cout << "Permutations:" << endl;
    for (const auto& permutation : result) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}