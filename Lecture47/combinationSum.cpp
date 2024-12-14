
// leet code problem 39 Combination Sum

// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Set to store unique combinations (ensures no duplicates in the result)
    set<vector<int>> st;

    // Helper function to find all unique combinations
    void getAllCombination(vector<int>& candidates, int idx, int target, vector<vector<int>>& result, vector<int>& combination) {
        // Base case: if index exceeds array size or target becomes negative, terminate recursion
        if (idx == candidates.size() || target < 0) {
            return;
        }

        // If the target becomes zero, we found a valid combination
        if (target == 0) {
            // Check if the combination is not already present in the set
            if (st.find(combination) == st.end()) {
                result.push_back(combination);  // Add the combination to the result
                st.insert(combination);        // Insert the combination into the set
            }
            return;  // Stop further recursion
        }

        // Include the current candidate in the combination
        combination.push_back(candidates[idx]);
        getAllCombination(candidates, idx, target - candidates[idx], result, combination); // Include current element again
        combination.pop_back(); // Backtrack to remove the last element

        // Move to the next candidate without including the current one
        getAllCombination(candidates, idx + 1, target, result, combination);
    }

    // Main function to return all unique combinations
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;   // Stores the final list of combinations
        vector<int> combination;  // Temporary vector to build combinations
        getAllCombination(candidates, 0, target, ans, combination);  // Start recursion
        return ans;  // Return the result
    }

    int main() {
        vector<int> candidates = {2, 3, 6, 7};
        int target = 7;
        vector<vector<int>> result = combinationSum(candidates, target);
        for (auto& combination : result) {
            for (int num : combination) {
                cout << num << " ";
            }
            cout << endl;
    
        return 0;
        }
    }