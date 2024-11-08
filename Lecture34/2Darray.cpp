#include <iostream>

using namespace std;

int main() {
    // Declaration and Initialization
    int matrix[4][4] = {
        {1, 2, 9, 8},
        {3, 4, 7, 9},
        {7, 8, 1, 2},
        {4, 5, 6, 3}
    };

    // Accessing values
    cout << "Element at (2, 3): " << matrix[2][3] << endl;

    // Loops to display matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
