

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


int main() {

    // Question1
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Sum of array elements: " << sumOfArray(arr1, size1) << endl;
    cout << "Product of array elements: " << productOfArray(arr1, size1) << endl;
}