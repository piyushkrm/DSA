

// Product of an array except it self

# include <iostream>
# include <vector>

using namespace std;

vector <int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != i) {
                result[i] *= nums[j];
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    // Function returns
    vector<int> result = productExceptSelf(nums);
    // Print result
    for (int num : result) {
        cout << num << " ";
    }
}

