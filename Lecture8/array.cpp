

// Array DSA Part 1

#include <iostream>
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

int main()
{
    // array();
    arrayInput();
}