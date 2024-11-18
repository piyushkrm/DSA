

// 1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Approach 1 --> Brute force approach
vector<int> twoSum(vector<int> vector, int target) {
    int n = vector.size();
    for (int i = 0; i < n; i++) {
        int first = vector[i];
        for (int j = i + 1; j < n; j++) {
            int second = vector[j];
            if (first + second == target) {
                return {i, j};
            }
        }
    }
    return {};  // No pair found
}

// Approach 2 --> Two pointer approach
void two_sum(vector<int>& numbers, int target) {
    sort(numbers.begin(), numbers.end());  // Sort the array for easier lookup
    int start = 0;
    int end = numbers.size() - 1;

    while (start < end) {
        int sum = numbers[start] + numbers[end];

        if (sum == target) {
            cout << "Indices of the two numbers that add up to target: " << start << ", " << end << endl;
            return;
        } else if (sum < target) {
            start++;
        } else {
            end--;
        }
    }
    // If no solution found
    cout << "No two numbers add up to the target." << endl;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "Indices of the two numbers that add up to target: " << result[0] << ", " << result[1] << endl;
    two_sum(nums, target);
    return 0;
}