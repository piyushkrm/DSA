

#include <iostream>
using namespace std;

// Question 1 : WAF to calculate sum & product of all numbers in an array.

int sumOfArray(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

//  Product of all numbers in an array
int productOfArray(int array[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= array[i];
    }
    return product;
}


// Question 2 : WAF to swap the max & min number of an array.
int swapMinMax(int array[], int size) {
    int min = 0;
    int max = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] < array[min])
            min = i;
        if (array[i] > array[max])
            max = i;
    }

    // Swapping
    int temp = array[min];
    array[min] = array[max];
    array[max] = temp;
    return 0;
}

int main() {

    // Question1
    // int arr1[] = {1, 2, 3, 4, 5, 6};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // cout << "Sum of array elements: " << sumOfArray(arr1, size1) << endl;
    // cout << "Product of array elements: " << productOfArray(arr1, size1) << endl;

    // Question2
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Array before swapping min and max: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "Min & Max swapped " << endl;
    cout << "Array After swapping min and max: "<< endl;
    swapMinMax(arr2, size2);
    cout << "Array after swapping min and max: " << endl;
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    }