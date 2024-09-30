

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


int main() {
    int a = 10;
    int* ptr = &a;

    // cout << "Value of a: " << a << endl;
    // cout << "Address of a: " << &a << endl;
    // cout << "Value of ptr: " << ptr << endl;
    // cout << "Dereferenced value of ptr: " << *ptr << endl;

    // call by reference
    changeValue(a);
    cout << "After changeValue: a = " << a << endl;

    // call by reference using alias
    changeValueAlias(a);
    cout << "After changeValueAlias: a = " << a << endl;
}