

// Merge Sort Algorithm

#include <iostream>
#include <vector>

using namespace std;

// Function to divide array elements
void mergeSort(arr[], st, end) {
    if (st < end) {
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array is: ";
    for (int val : arr) {
        cout << val << endl;
    }
    cout << endl;

    return 0;

}