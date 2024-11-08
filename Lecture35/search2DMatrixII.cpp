
// Search in a 2D MatrixII
// Leet code problem 240

#include <iostream>
#include <vector>

// Function to search element on the 2D matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {        // TC 0(n + m)
    int m = matrix.size();
    int n = matrix[0].size();
    int row = 0;
    int column = n - 1;

    while(roe < m && column >= 0) {
        if (target == matrix[row][column]) {
            return true;
        }
        else if (target < matrix[row][column]) {
            column--;
        }
        else {
            row++;
        }
    }
    return false;
}
int main() {
    int matrix[][] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;
    cout << searchMatrix(matrix, target);
}