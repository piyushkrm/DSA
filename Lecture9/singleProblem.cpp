

// 136. Single Number

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int val : nums) {
        result ^= val;
    }

    return result;
}

int main() {
    vector<int> nums = {2, 2, 3, 4, 4, 5, 5};
    cout << "Single number : " << singleNumber(nums) << endl;
    return 0;
}