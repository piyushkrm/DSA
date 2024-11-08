// Pending
// 74. Search a 2D Matrix
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

#include <iostream>
#include <vector>

using namespace std;

// Search on row
bool searchRow(vector<vector<int>> &matrix, int target, int row)
{
    int n = matrix[0].size();
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == matrix[row][mid])
        { // found the target
            return true;
        }
        else if (target > matrix[row][mid])
        { // right
            start = mid + 1;
        }
        else
        { // left
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int startRow = 0;
    int endRow = m - 1;

    // Binary search to find the correct row
    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;

        // Check if target is within the bounds of the midRow
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
        {
            // Perform binary search on the selected row
            return searchRow(matrix, target, midRow);
        }
        else if (target >= matrix[midRow][n - 1])
        {
        // Move to the lower part of the matrix
            startRow = midRow + 1;
        }
        else
        {
            // Move to the upper part of the matrix
            endRow = midRow - 1;
        }
    }
    return false;       // Target not found in any row
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    int target = 3;
    cout << (searchMatrix(matrix, target) ? "True" : "False") << endl;
    return 0;
}