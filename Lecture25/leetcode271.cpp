

// 217. Contains Duplicate

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n - 1;  i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;  // No duplicates found  // Time complexity: O(n^2)
}

bool containsDuplicate2(vector<int> &duplicates) {
    int n = duplicates.size();
    sort(duplicates.begin(), duplicates.end());
    for (int i = 0; i < n - 1; i++) {
        if (duplicates[i] == duplicates[i + 1]) {
            return true;
        }
    }
    return false;  // No duplicates found  // Time complexity: O(n log n)
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << (containsDuplicate(nums) ? "true" : "false") << endl;
    cout << (containsDuplicate2(nums) ? "true" : "false") << endl;
    return 0;
}