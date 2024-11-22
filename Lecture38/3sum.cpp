// leet code problem 15 3Sum
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

#include <vector>
#include <iostream>
#include <set>  // For set data structure
#include <algorithm>  // For sorting the triplet

using namespace std;

// Approach 1 Brute force approach 
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    set<vector<int>> st;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                // Check if the sum of the three numbers is equal to zero
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    // Sort the triplet to remove duplicates
                    if (st.find(trip) == st.end()) {
                        st.insert(trip);  // Insert the triplet into the set
                        result.push_back(trip);  // Add the triplet to the result vector
                    }
                }
            }
        }
    }
    return result;
}

// Approach 2 - With hashing

vector<vector<int>> threeSumHashing(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        int target = -nums[i];
        set<int> st;

        for (int j = i + 1; j < n; j++) {
            int third = target - nums[j];
            if (st.find(third)!= st.end()) {
                vector<int> triplet = {nums[i], nums[j], third};
                sort(triplet.begin(), triplet.end());
                uniqueTriplets.insert(triplet);
            }
            st.insert(nums[j]);
        }
    }
    vector<vector<int>> result(uniqueTriplets.begin(), uniqueTriplets.end());
    return result;
}
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    // Approach 1 
    cout << "Approach 1 - Brute force approach:" << endl;  // Output: [-1, -1, 2], [-1, 0, 1], [0, 0, 0]  // Sorting the triplets to remove duplicates
    vector<vector<int>> triplets = threeSum(nums);
    for (auto triplet : triplets) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << "Approach 2 - Hashing approach:" << endl;  // Output: [-1, -1, 2], [-1, 0, 1], [0, 0, 0]  // Sorting the triplets to remove duplicates
    cout << "---------------------------------------" << endl;
    // Approach 2 
    vector<vector<int>> tripletsHashing = threeSumHashing(nums);
    for (auto triplet : tripletsHashing) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}