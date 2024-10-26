// Algorithms

#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

// Print elements of the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sorting
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Sort array in ascending order
    sort(arr, arr + n);
    cout << "Sorted array in ascending order: ";
    printArray(arr, n);

    // Sort array in descending order
    sort(arr, arr + n, greater<int>());
    cout << "Sorted array in descending order: ";
    printArray(arr, n);

    // Reverse array
    reverse(arr, arr + n);
    cout << "Reversed array: ";
    printArray(arr, n);

    // Next permutation
    int arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    next_permutation(arr2, arr2 + n2);
    cout << "Next permutation: ";
    printArray(arr2, n2);

    // Previous permutation
    prev_permutation(arr2, arr2 + n2);
    cout << "Previous permutation: ";
    printArray(arr2, n2);

    return 0;
}
