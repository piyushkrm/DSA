
// Leet code problem 51. N-Queens

// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

#include <iostream>
#include <vector>

using namespace std;




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
