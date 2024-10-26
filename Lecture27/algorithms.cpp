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

    // Min and max elements
    cout << "Min element (10, 15) : " << min(10, 15) << endl;
    cout << "Max element (10, 15) : " << max(10, 15) << endl;
    
    // Swap elements
    int a = 5, b = 10;
    swap(a, b);
    cout << "After swapping a and b: a = " << a << ", b = " << b << endl;

    // Min and max elements of the array
    int arr3[] = {5, 2, 8, 1, 3};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int minValue = *min_element(arr3, arr3 + n3);
    int maxValue = *max_element(arr3, arr3 + n3);
    cout << "Min element in array (5, 2, 8, 1, 3): " << minValue << endl;
    cout << "Max element in array (5, 2, 8, 1, 3): " << maxValue << endl;

    // Binary search
    int arr4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int x = 5;
    int result = binary_search(arr4, arr4 + n4, x);
    (result)? cout << x << " is present in array" : cout << x << " is not present in array";

    // Count and set bits
    int num = 10;
    cout << "Number of set bits in " << num << ": " << __builtin_popcount(num) << endl;
    cout << "Number of set bits in " << num << ": " << __builtin_popcountl(num) << endl;
    cout << "Number of set bits in " << num << ": " << __builtin_popcountll(num) << endl;



    return 0;
}
