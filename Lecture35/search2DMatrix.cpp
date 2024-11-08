
// 74. Search a 2D Matrix
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

#include <iostream>
#include <vector>

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    // Binary Search
    int m = matrix.size();
    int n = matrix[0].size();
    int startRow = 0;
    int endRow = m - 1;

    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;

        if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
        {
            // Found the row
            // Binary Search on this row
            return searchRow(matrix, target, startRow);
        }
        else if (target >= matrix[midRow][n - 1])
        {
            // Down
            startRow = midRow + 1;
        }
        else
        {
            // Up
            endRow = midRow - 1;
        }
    }
    return false;
}

int main()
{
    int matrix[][] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    int target = 3;
    cout << (searchMatrix(matrix, target) ? "True" : "False") << endl;
    return 0;
}