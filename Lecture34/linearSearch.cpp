

// Linear Seach

#include <iostream>

using namespace std;

// Linear Seach and return as a pair of index

pair<int, int> linear_seach_pair(int matrix[][3], int rows, int columns, int target) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == target) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);  // Target not found in the matrix  // Time complexity: O(n^2)
}

bool linear_seach(int matrix[][3], int rows, int columns, int target) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == target) {
                return true;
            }
        }
    }
    return false;  // Target not found in the matrix  // Time complexity: O(n^2)
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int target = 9;
    cout << (linear_seach(matrix, 4, 3, target)? "Target found" : "Target not found") << endl;
    pair<int, int> p = linear_seach_pair(matrix, 4, 3, target);
    cout << "Pair of the target is : (" << p.first << ", " << p.second <<")" << endl;
    
    return 0;
}