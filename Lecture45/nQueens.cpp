
// Leet code problem 51. N-Queens

// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

#include <iostream>
#include <vector>

using namespace std;

// Function to check if placing a queen at board[row][col] is safe
    bool isSafe(vector<string>& board, int row, int col, int n) {
        // Check the same row (horizontal)
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }

        // Check the same column (vertical)
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check the upper left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check the upper right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // If no conflicts, the position is safe
        return true;
    }

    // Recursive function to solve the N-Queens problem
    void nQueens(vector<string>& board, int row, int n, vector<vector<string>>& ans) {
        // Base case: All queens are placed
        if (row == n) {
            ans.push_back(board); // Add the current configuration to the solution
            return;
        }

        // Iterate over each column in the current row
        for (int j = 0; j < n; j++) {
            // Check if placing a queen at board[row][j] is safe
            if (isSafe(board, row, j, n)) {
                board[row][j] = 'Q'; // Place the queen
                nQueens(board, row + 1, n, ans); // Recur to place the next queen
                board[row][j] = '.'; // Backtrack by removing the queen
            }
        }
    }

    // Main function to solve the N-Queens problem
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.')); // Initialize the chessboard
        vector<vector<string>> ans; // To store all possible solutions
        nQueens(board, 0, n, ans); // Start solving from the first row
        return ans; // Return all valid configurations
    }

    // Print the solutions
    void printSolutions(vector<vector<string>>& solutions) {
        for (const auto& solution : solutions) {
            for (const auto& row : solution) {
                cout << row << endl;
            }
            cout << endl;
        }
    }

    int main() {
        int n = 4; // Number of queens
        vector<vector<string>> solutions = solveNQueens(n);
        cout << "Number of solutions: " << solutions.size() << endl;
        printSolutions(solutions);
        return 0;
    }

// Time complexity: O(n!), where n is the number of queens. This is because there are n! possible configurations of placing n queens on an n x n chessboard.    

// Space complexity: O(n^2), where n is the number of queens. This is because we store the chessboard configuration and the solutions in two separate data structures.
