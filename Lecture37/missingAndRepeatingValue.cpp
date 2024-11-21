
// 2965. Find Missing and Repeated Values
// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findMissingAndRepeated(vector<vector<int>>& grid) {
    vector<int> result;
    unordered_set<int> st;
    int n = grid.size();
    int expectedSum = 0;
    int actualSum = 0;
    int a , b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            actualSum += grid[i][j];

            if (st.find(grid[i][j]) != st.end()) {
                a = grid[i][j];
                result.push_back(a);
            }
            st.insert(grid[i][j]);
        }
    }
    expectedSum = (n * n) * (n * n + 1) / 2;
    b = expectedSum + a - actualSum;
    result.push_back(b);
    return result;
}
int main() {
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans = findMissingAndRepeated(grid);
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl; // Output: 9 5
    return 0;
}