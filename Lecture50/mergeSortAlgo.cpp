

// Merge Sort Algorithm

#include <iostream>
#include <vector>

using namespace std;

// Merge function for sorting algorithm
void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    // Merge the sorted sub-arrays
    while (i <= mid && j <= end) {
        // if (arr[i] <= arr[j]) {                 // Accending ordering
        if (arr[i] >= arr[j]) {                 // Decending ordering
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the sorted elements to original array
    for (int k = st; k <= end; k++) {
        arr[k] = temp[k - st];
    }
}

// Function to divide array elements
void mergeSort(vector<int>& arr, int st, int end) {
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
        cout << val << " ";
    }
    cout << endl;

    return 0;

}