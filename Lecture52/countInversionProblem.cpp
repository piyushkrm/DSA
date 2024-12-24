

// Count Inversion Problem


#include <iostream>
#include <vector>

using namespace std;

// Brute Force Approach

int countInversions(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                count++;
            }
        }
    }
    return count;
}

// Optimal implementation

int mergeSort(vector<int>& arr, int st, int end) {
    if (st <= end) {
        int mid = (st + end) / 2;
        int left = mergeSort(arr, st, mid);
        int right = mergeSort(arr, mid + 1, end);
        int current = merge(arr, st, mid, end);

        return left + right + current;
    }
    return 0;
}

int main() {
    vector<int> nums = {8, 4, 2, 1, 5, 6, 3};
    vector<int> counts = {6, 3, 5, 2, 7};
    int inversions = countInversions(counts);
    cout << "Number of inversions: " << inversions << endl;
    return 0;
}