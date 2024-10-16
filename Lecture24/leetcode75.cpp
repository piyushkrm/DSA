

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

// Approach 2 ---> Using optimized brute force approach

void sortArrayOptimizedBruteForce(vector<int>& array) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int num : array) {
        if (num == 0) {
            count0++;
        } else if (num == 1) {
            count1++;
        } else {
            count2++;
        }
    }
    
    int index = 0;

    for (int i = 0; i < count0; i++) {
        array[index++] = 0;
    }  

    for (int i = 0; i < count1; i++) {
        array[index++] = 1;
    }

    for (int i = 0; i < count2; i++) {
        array[index++] = 2;
    }
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 0, 1, 0, 2, 1, 0};
    sortArrayBruteForce(arr);
    cout << "Sorted array (Approach 1): ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    

    sortArrayOptimizedBruteForce(arr);
    cout << "Sorted array (Approach 2): ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}