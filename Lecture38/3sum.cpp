#include <vector>
#include <iostream>
#include <set>  // For set data structure
#include <algorithm>  // For sorting the triplet

using namespace std;

// Approach 1: Brute Force Approach
// This approach checks every possible triplet and adds it to the result if the sum is zero.
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();  // Get the size of the input array
    vector<vector<int>> result;  // Vector to store the result triplets
    set<vector<int>> st;  // Set to store unique triplets (no duplicates)

    // Triple nested loops to check every combination of three numbers
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                // If the sum of the triplet is zero, process the triplet
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());  // Sort the triplet to handle duplicates
                    // Insert the sorted triplet into the set to ensure uniqueness
                    if (st.find(trip) == st.end()) {
                        st.insert(trip);  // Insert the triplet into the set
                        result.push_back(trip);  // Add the triplet to the result vector
                    }
                }
            }
        }
    }
    return result;  // Return the unique triplets
}

// Approach 2: With Hashing
// This approach uses a set to store the numbers seen so far, and checks if the complement exists for each pair.
vector<vector<int>> threeSumHashing(vector<int>& nums) {
    int n = nums.size();  // Get the size of the input array
    vector<vector<int>> result;  // Vector to store the result triplets
    set<vector<int>> uniqueTriplets;  // Set to store unique triplets

    // Iterate over each number as the first element of the triplet
    for (int i = 0; i < n; i++) {
        int target = -nums[i];  // Find the target sum that we need to reach
        set<int> st;  // Set to store elements seen so far

        // Iterate over the remaining elements to find the other two elements that sum to the target
        for (int j = i + 1; j < n; j++) {
            int third = target - nums[j];  // The third element required to complete the triplet
            // If the third element is in the set, we have found a valid triplet
            if (st.find(third) != st.end()) {
                vector<int> triplet = {nums[i], nums[j], third};
                sort(triplet.begin(), triplet.end());  // Sort to handle duplicates
                uniqueTriplets.insert(triplet);  // Insert into the set to ensure uniqueness
            }
            st.insert(nums[j]);  // Insert the current element into the set for future pairs
        }
    }

    // Convert the set of unique triplets into a vector and return it
    vector<vector<int>> result(uniqueTriplets.begin(), uniqueTriplets.end());
    return result;
}

// Approach 3: Two Pointers Approach
// This approach first sorts the array and then uses two pointers to find pairs that sum to a given target.
vector<vector<int>> threeSumTwoPointers(vector<int>& nums) {
    int n = nums.size();  // Get the size of the input array
    vector<vector<int>> result;  // Vector to store the result triplets
    sort(nums.begin(), nums.end());  // Sort the array for the two-pointer approach

    // Iterate over the array and use two pointers for the rest of the elements
    for (int i = 0; i < n; i++) {
        // Skip duplicate elements for the first pointer
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int j = i + 1;  // Left pointer
        int k = n - 1;  // Right pointer

        // Move the pointers towards each other to find the triplet
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];  // Sum of the current triplet

            // If the sum is greater than zero, move the right pointer to the left
            if (sum > 0) {
                k--;
            }
            // If the sum is less than zero, move the left pointer to the right
            else if (sum < 0) {
                j++;
            }
            // If the sum is zero, we've found a valid triplet
            else {
                result.push_back({nums[i], nums[j], nums[k]});  // Add the triplet to the result
                k--;  // Move the right pointer to the left
                j++;  // Move the left pointer to the right

                // Skip duplicate elements for the left pointer
                while (j < k && nums[j] == nums[j - 1]) j++;
                // Skip duplicate elements for the right pointer
                while (j < k && nums[k] == nums[k + 1]) k--;
            }
        }
    }
    return result;  // Return the result triplets
}

int main() {
    // Example input
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Approach 1: Brute Force Approach
    cout << "Approach 1 - Brute force approach:" << endl;  
    vector<vector<int>> triplets = threeSum(nums);
    for (auto& triplet : triplets) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Approach 2: Hashing Approach
    cout << "Approach 2 - Hashing approach:" << endl;
    cout << "---------------------------------------" << endl;
    vector<vector<int>> tripletsHashing = threeSumHashing(nums);
    for (auto& triplet : tripletsHashing) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Approach 3: Two Pointer Approach
    cout << "Approach 3 - Two pointers approach:" << endl;
    cout << "---------------------------------------" << endl;
    vector<vector<int>> tripletsTwoPointers = threeSumTwoPointers(nums);
    for (auto& triplet : tripletsTwoPointers) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
