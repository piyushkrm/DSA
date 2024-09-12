

// Linear search

#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}


// Reverse an array element
int reverseArray(int array[], int size) {
    int reverse[size];

    for (int i = 0; i < size; i++) {
        reverse[size - i - 1] = array[i];
    }

    for(int i = 0; i < size; i++) {
        cout << reverse[i] << " ";
    }
}
int main () {
    int array[] = {4, 2, 7,8, 1, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);
    // int target = 0;
    // cout << "Target array element are available in the index of : " << linear_search(array, size, target) << endl;

    reverseArray(array, 7);
}