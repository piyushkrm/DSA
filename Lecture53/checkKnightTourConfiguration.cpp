

// leet code problem 2596 Check Knight Tour Configuration
// There is a knight on an n x n chessboard. In a valid configuration, the knight starts at the top-left cell of the board and visits every cell on the board exactly once.

// You are given an n x n integer matrix grid consisting of distinct integers from the range [0, n * n - 1] where grid[row][col] indicates that the cell (row, col) is the grid[row][col]th cell that the knight visited. The moves are 0-indexed.

// Return true if grid represents a valid configuration of the knight's movements or false otherwise.

// Note that a valid knight move consists of moving two squares vertically and one square horizontally, or two squares horizontally and one square vertically. The figure below illustrates all the possible eight moves of a knight from some cell.

#include <iostream>
#include <vector>

using namespace std;

// Helper function to check if the knight's move is valid at a given position
bool isValid(vector<vector<int>> &grid, int row, int col, int n, int expectedValue)
{

    // Check if the current position (row, col) is within grid boundaries
    // Also check if the value at this position matches the expected value in the knight's tour
    if (row < 0 || row >= n || col < 0 || col >= n || grid[row][col] != expectedValue)
    {
        return false; // Return false if out of bounds or the value is not the expected one
    }

    // If we reached the last expected value (n * n - 1), return true (successfully completed the tour)
    if (expectedValue == n * n - 1)
    {
        return true;
    }

    // Check all 8 possible knight's moves from the current position
    // These moves correspond to moving either two steps vertically and one step horizontally,
    // or one step vertically and two steps horizontally.
    bool ans1 = isValid(grid, row - 2, col + 1, n, expectedValue + 1); // Move 1
    bool ans2 = isValid(grid, row - 2, col - 1, n, expectedValue + 1); // Move 2
    bool ans3 = isValid(grid, row - 1, col + 2, n, expectedValue + 1); // Move 3
    bool ans4 = isValid(grid, row - 1, col - 2, n, expectedValue + 1); // Move 4
    bool ans5 = isValid(grid, row + 1, col + 2, n, expectedValue + 1); // Move 5
    bool ans6 = isValid(grid, row + 1, col - 2, n, expectedValue + 1); // Move 6
    bool ans7 = isValid(grid, row + 2, col + 1, n, expectedValue + 1); // Move 7
    bool ans8 = isValid(grid, row + 2, col - 1, n, expectedValue + 1); // Move 8

    // Return true if any of the 8 possible knight's moves lead to a valid knight's tour
    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

// Function to check if the given grid represents a valid knight's tour
bool checkValidGrid(vector<vector<int>> &grid)
{
    // Start the knight's tour check from the top-left corner (0, 0) with expected value 0
    return isValid(grid, 0, 0, grid.size(), 0);
}

int main()
{
    // Example grid where the knight's moves are represented
    vector<vector<int>> grid = {
        {5, 0, 8, 6}, // Row 0
        {7, 4, 2, 3}, // Row 1
        {1, 9, 5, 2}, // Row 2
        {3, 5, 1, 7}  // Row 3
    };

    // Call the checkValidGrid function and output the result
    // If the knight's tour is valid, print "valid", otherwise print "invalid"
    cout << (checkValidGrid(grid) ? "valid" : "invalid") << endl;

    return 0;
}