

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

int main () {
    int array[] = {4, 2, 7,8, 1, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 0;
    cout << "Target array element are available in the index of : " << linear_search(array, size, target) << endl;
}