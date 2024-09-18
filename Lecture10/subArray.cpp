

// print subarray of an array

#include <iostream>

using namespace std;

void printSubarray(int arr[], int n) {
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << " ";
        }
        cout << endl;
    }

}

int main() {
    int n = 8;
    int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    printSubarray(array, n);
}