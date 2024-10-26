
// Algorithms

#include <iostream>
#include <algorithm>

using namespace std;

// print elements of array

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    //Sorting
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Sorted array in ascending order: ";
    printArray(arr, n);
}