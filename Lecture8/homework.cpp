

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

// Question 3 : WAF to print all the unique valuess in an array.
    void arrayUnique(int array1[],int size1, int array2[], int size2) {

        for (int i = 0; i < size1; i++) {
            bool isUnique = true;
            for (int j = 0; j < size2; j++) {
                if (array1[i] == array2[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                cout << array1[i] << " ";
            }
        }

        for (int i = 0; i < size2; i++) {
            bool isUnique = true;
            for (int j = 0; j < size1; j++) {
                if (array2[i] == array1[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                cout << array2[i] << " ";
            }
        }

    }

// Question 4 : WAF to print intersection of 2 array

void arrayIntersection(int array1[], int size1, int array2[], int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                cout << array1[i] << " ";
                break;
            }
        }
    }
}


int main() {

    // Question1
    // int arr1[] = {1, 2, 3, 4, 5, 6};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // cout << "Sum of array elements: " << sumOfArray(arr1, size1) << endl;
    // cout << "Product of array elements: " << productOfArray(arr1, size1) << endl;

    // Question2
    // int arr2[] = {1, 2, 3, 4, 5, 6};
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);
    // cout << "Array before swapping min and max: " << endl;
    // for (int i = 0; i < size2; i++) {
    //     cout << arr2[i] << " ";
    // }
    // cout << endl;
    // cout << "Min & Max swapped " << endl;
    // cout << "Array After swapping min and max: "<< endl;
    // swapMinMax(arr2, size2);
    // cout << "Array after swapping min and max: " << endl;
    // for (int i = 0; i < size2; i++) {
    //     cout << arr2[i] << " ";
    // }
    // cout << endl;

    // Question3
    // int arr1[] = {1, 2, 3, 4, 5};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // int arr2[] = {2, 3, 8, 9, 5, 10};
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);
    // cout << "Unique elements in array1 and array2: ";
    // arrayUnique(arr1, size1, arr2, size2);
    // cout << endl;

    // Question4    
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {4, 5, 6, 7, 8, 9};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Intersection of array1 and array2: ";
    arrayIntersection(arr1, size1, arr2, size2);
    cout << endl;

}