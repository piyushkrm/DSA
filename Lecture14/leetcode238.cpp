

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

// Optimal solution for the same problem
vector<int> productExceptSelfOptimized(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    // prefix
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // suffix
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // result
    for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};

    // Approach 1
    // Function calling
    vector<int> result = productExceptSelf(nums);
    cout << "Product of array except self is: ";
    // Print result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    // Approach 2
    // Calling function 
    vector<int> ans = productExceptSelfOptimized(nums);
    cout << "Product of array except self is: ";
    // Print result
    for (int num : ans) {
        cout << num << " ";
    }

    // Approach 3
    // Calling functions
    
}

