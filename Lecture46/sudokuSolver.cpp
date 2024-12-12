
// leet code problem 37. Sudoku Solver

// Write a program to solve a Sudoku puzzle by filling the empty cells.

// A sudoku solution must satisfy all of the following rules:

// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
// The '.' character indicates empty cells.

#include <iostream>
#include <vector>

using namespace std;

// Function to check if placing a digit 'dig' at position (row, col) is valid
    bool isSafe(vector<vector<char>>& board, int row, int col, char dig) {
        // Check the row for duplicate digits
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == dig) {
                return false; // Digit already exists in the row
            }
        }

        // Check the column for duplicate digits
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == dig) {
                return false; // Digit already exists in the column
            }
        }

        // Check the 3x3 subgrid for duplicate digits
        int srow = (row / 3) * 3; // Starting row of the subgrid
        int scol = (col / 3) * 3; // Starting column of the subgrid

        for (int i = srow; i <= srow + 2; i++) {
            for (int j = scol; j <= scol + 2; j++) {
                if (board[i][j] == dig) {
                    return false; // Digit already exists in the subgrid
                }
            }
        }

        // The digit 'dig' can be safely placed at (row, col)
        return true;
    }

    // Helper function to solve the Sudoku puzzle using backtracking
    bool helper(vector<vector<char>>& board, int row, int col) {
        // If we have reached past the last row, the board is solved
        if (row == 9) {
            return true;
        }

        // Calculate the next cell to process
        int nextRow = row;       // Default to the current row
        int nextCol = col + 1;   // Move to the next column

        // Move to the next row if the column exceeds the board width
        if (nextCol == 9) {
            nextRow = row + 1;
            nextCol = 0;
        }

        // If the current cell is already filled, move to the next cell
        if (board[row][col] != '.') {
            return helper(board, nextRow, nextCol);
        }

        // Try placing digits '1' to '9' in the current cell
        for (char dig = '1'; dig <= '9'; dig++) {
            // Check if placing 'dig' is valid
            if (isSafe(board, row, col, dig)) {
                board[row][col] = dig; // Place the digit
                // Recursively solve for the rest of the board
                if (helper(board, nextRow, nextCol)) {
                    return true; // Board is solved
                }
                board[row][col] = '.'; // Undo the placement (backtrack)
            }
        }

        // No valid digit could be placed, so return false
        return false;
    }

    // Function to solve the Sudoku puzzle
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0); // Start solving from the top-left cell
    }

    int main() {
        // Test the solveSudoku function with a sample Sudoku puzzle
        vector<vector<char>> board = {
            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
        };
        solveSudoku(board);
        // Print the solved Sudoku puzzle
        for (const auto& row : board) {
            for (char c : row) {
                cout << c << " ";
            }
            cout << endl;
        }
        return 0;
        
    }