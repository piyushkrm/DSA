

// Merge Sort Algorithm

#include <iostream>
#include <vector>

using namespace std;

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