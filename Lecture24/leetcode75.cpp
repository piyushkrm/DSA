

// Sort an array of 0's 1's and 2's 

    // Approach:
    // 1. Initialize three pointers: low, mid, high. low points to the first element, mid points to the current element being checked, and high points to the last element.
    // 2. Iterate through the array:
    //  - If the current element is 0, swap it with the element at low, then increment both low and mid.
    //  - If the current element is 1, increment mid.
    //  - If the current element is 2, swap it with the element at high, then decrement high.
    // 3. After the iteration, the array will be sorted in ascending order.
    // Time Complexity: O(n)
    // Space Complexity: O(1)



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// Approach 1 ---> Using brute force approach

void sortArrayBruteForce(vector<int>& array) {
    sort(array.begin(), array.end());
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 0, 1, 0, 2, 1, 0};
    sortArrayBruteForce(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}