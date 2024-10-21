// 88. Merge Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeSorted(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;  // Last element in the initial part of a
    int j = m - 1;  // Last element in b
    int index = n + m - 1;  // Last position in a

    while (i >= 0 && j >= 0) {
        if (a[i] >= b[j]) {
            a[index--] = a[i--];
        } else {
            a[index--] = b[j--];
        }
    }
    while (j >= 0) {
        a[index--] = b[j--];
    }
}

int main() {
    // The size of non-zero elements in 'a' and the total size of 'b'
    vector<int> a = {1, 3, 5, 7, 0, 0, 0, 0};
    vector<int> b = {2, 4, 6, 8};
    
    int n = 4; // Number of non-zero elements in 'a'
    int m = b.size(); // Size of 'b'

    mergeSorted(a, n, b, m);

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}
