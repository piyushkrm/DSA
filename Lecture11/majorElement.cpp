

// find major element

#include <iostream>
#include <vector>

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

int main() {
    vector<int> array = {1, 2, 2, 1, 1, 2, 2};
    cout << findMajorElements(array) << endl;
    return 0;
}