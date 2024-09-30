

#include <iostream>

using namespace std;

// pass by references
int changeValue(int value) {
    value = 100;
}

// pass by reference using alias
int changeValueAlias(int &value) {
    value = 500;
}

// Array Pointer
int pointerArr() {
    int arr[] = {10, 1, 2, 3, 4, 5};
    cout << "Array pointer " << *arr << endl;
}

// Pointer Arithmetic Operations 
int arithmeticOp() {
    int arr[] = {15, 30, 45, 65, 89, 49};
    int x = 10;
    int* ptr = &x;
    cout << "Pointer arithmetic operation " << *ptr << endl;
    ptr++;
    cout << "Pointer increment: " << *ptr << endl;
    ptr--;
    cout << "Pointer decrement: " << *ptr << endl;
    ptr += 2;
    cout << "Pointer addition: " << *ptr << endl;
    ptr -= 2;
    cout << "Pointer subtraction: " << *ptr << endl;
    ptr = arr + 2;
    cout << "Pointer addition with array index: " << *ptr << endl;
    ptr = arr - 2;
    cout << "Pointer subtraction with array index: " << *ptr << endl;
    return 0;
}


int main() {
    int a = 10;
    int* ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Dereferenced value of ptr: " << *ptr << endl;

    // call by reference
    changeValue(a);
    cout << "After changeValue: a = " << a << endl;

    // call by reference using alias
    changeValueAlias(a);
    cout << "After changeValueAlias: a = " << a << endl;

    // Array Pointer
    pointerArr();

    // Pointer Arithmetic Operations
    arithmeticOp();
}