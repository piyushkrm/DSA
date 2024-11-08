// Pending

// Spiral Matrix Leet code problem 54

#include <iostream>
#include <vector>

using namespace std;

// Function to print all the elements in spiral order of the matrix
vector<int> spiralOrder(vector<vector<int>> & matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = n - 1;
    
    vector<int> ans;

    while(startRow <= endRow && startCol <= endCol) {
        // For top boundary
        for (int j = startCol; j <= endCol; j++) {
            ans.push_back(matrix[startRow][j]);
        }

        // Right boundary
        for (int i = startRow + 1; i <= endRow; i++) {
            ans.push_back(matrix[i][endCol]);
        }

        // Bottom boundary
        for (int j = endCol - 1; j >= startCol; j--) {
            if (startRow == endRow) {
                break;
            }
            ans.push_back(matrix[endRow][j]);
        }

        // Left boundary
        for (int i = endRow - 1; i >= startRow + 1; i--) {
            if (startCol == endCol) {
                break;
            }
            ans.push_back(matrix[i][startRow]);
        }
        startRow++; // Move down the top boundary
        endRow--;   // Move up the bottom boundary
        startCol++; // Move right the left boundary
        endCol--;   // Move left the right boundary
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> result = spiralOrder(matrix);

    // Output the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
