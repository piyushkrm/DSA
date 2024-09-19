

// find major element

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// brute force approach
int findMajorElements(vector<int> &array) {
    int n = array.size();

    for (int val : array) {
        int freq = 0;

        for (int ele : array) {
            if (ele == val) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return val;
        }
    }
    return -1;
}


// Optimized approach
int findMajorEle(vector<int> &array) {

    int n = array.size();

    // sorting
    sort(array.begin(), array.end());

    // frequency
    int freq = 1;
    int ans = array[0];

    // iteration
    for (int i = 1; i < n; i++) {
        if (array[i] == array[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = array[i];
        }
        if (freq > n / 2) {
            return ans;
        }
    }
    return -1;
}

int main() {
    vector<int> array = {1, 2, 2, 1, 1, 2, 2};
    // cout << findMajorElements(array) << endl;
    cout << findMajorEle(array) << endl;
    return 0;
}
