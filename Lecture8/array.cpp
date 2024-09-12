

// Array DSA Part 1

#include <iostream>
#include <climits>
using namespace std;

// array initilization
int array()
{
    int Marks[5] = {15, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks[" << i << "] = " << Marks[i] << endl;
    }
}

// Array input from the users

int arrayInput()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> arr[i];
    }

    // print array elements
    cout << "Array elements are : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << " : " << arr[i] << endl;
    }
}

// Find max and min element in the array

int maxMin() {
    int arr[5] = {15, 20, 30, 40, 50};
    int max = arr[0]; // Initialize max with the first element
    int min = arr[0]; // Initialize min with the first element

    for (int i = 1; i < 5; i++) { // Loop through the array
        if (arr[i] > max) { // Check for max
            max = arr[i];
        }
        if (arr[i] < min) { // Check for min
            min = arr[i];
        }
    }

    cout << "Minimum element in the array is : " << min << endl;
    cout << "Maximum element in the array is : " << max << endl;

    return 0;
}

int minMax() {
    int arr[5] = {15, 20, 30, 40, 50};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < 5; i++) {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "Minimum element in the array is : " << smallest << endl;
    cout << "Minimum element in the array is : " << largest << endl;

    return 0;

}


int main()
{
    // array();
    // arrayInput();
    // maxMin();
    minMax();
}