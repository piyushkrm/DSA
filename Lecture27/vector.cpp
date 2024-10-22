#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// print vector elements
void printVector(vector<int> vec) {
    cout << "Vector elements are : ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec;
    printVector(vec);

    // Size
    cout << "Size of vector : "<< vec.size() << endl;
    cout << endl;

    // push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    printVector(vec);

    cout << "Size of vector after push_back : " << vec.size() << endl;
    cout << endl;

    // pop_back
    vec.pop_back();
    printVector(vec);
    cout << "Size of vector after pop_back : " << vec.size() << endl;
    cout << endl;

    // capacity
    cout << "Capacity of vector : " << vec.capacity() << endl;
    cout << endl;

    // at(index)
    cout << "Element at index 1 : " << vec.at(1) << endl;
    cout << endl;

    // or[index]
    cout << "Element at index 1 : " << vec[1] << endl;
    cout << endl;

    // front
    cout << "Front element of vector : " << vec.front() << endl;
    cout << endl;

    // back
    cout << "Back element of vector : " << vec.back() << endl;
    cout << endl;

    // Initialize the vector
    vector<int> newVector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVector(newVector);

    // The code `vector<int> newVec(5, 10);` creates a vector named `newVec` with 5 elements, each initialized to the value 10.
    vector<int> newVec(5, 10);
    printVector(newVec);

    cout << endl;
    return 0;
}
