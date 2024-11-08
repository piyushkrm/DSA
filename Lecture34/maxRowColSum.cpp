

// Write a function to return the maximum row of sum

#include <iostream>
#include <climits>


using namespace std;

// function to return the maximum row of sum
int get_max_row_of_sum(int matrix[][3], int row, int column) {
    int maxSum = INT_MIN;

    for (int i = 0; i < row; i++) {
        int rowSum = 0;
        for (int j = 0; j < column; j++) {
            rowSum += matrix[i][j];
        }
        maxSum = max(rowSum, maxSum);
    }
    return maxSum;
}

// function to return the maximum column of sum
int get_max_column_of_sum(int matrix[][3], int row, int column) {
    int maxSum = INT_MIN;

    for (int j = 0; j < column; j++) {
        int columnSum = 0;
        for (int i = 0; i < row; i++) {
            columnSum += matrix[i][j];
        }
        maxSum = max(columnSum, maxSum);
    }
    return maxSum;
}

int main() {
        int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int maxRowSum = get_max_row_of_sum(matrix, 4, 3);
    cout << "Maximum row sum: " << maxRowSum << endl;
    int maxColumnSum = get_max_column_of_sum(matrix, 4, 3);
    cout << "Maximum column sum: " << maxColumnSum << endl;
    return 0;
}