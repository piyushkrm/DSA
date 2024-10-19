

// 217. Contains Duplicate

#include <iostream>
#include <vector>


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

int main() {
    vector<int> nums = {1, 2, 3, 5};
    cout << (containsDuplicate(nums) ? "true" : "false") << endl;
    return 0;
}