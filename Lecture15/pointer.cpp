

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Dereferenced value of ptr: " << *ptr << endl;
}