/**
 * The code demonstrates various operations on vectors in C++, such as adding, removing elements,
 * accessing elements by index, and initializing vectors.
 * 
 * @param vec The code snippet you provided demonstrates various operations on vectors in C++. Here's a
 * breakdown of the vector operations performed in the code:
 */
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
    // add more elements
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(80);
    vec.push_back(90);
    vec.push_back(100);
    // add more elements (capacity exceeded)
    vec.push_back(110);
    vec.push_back(120);
    vec.push_back(130);
    vec.push_back(140);
    vec.push_back(150);
    vec.push_back(160);
    vec.push_back(170);
    vec.push_back(180);
    vec.push_back(190);
    vec.push_back(200);

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

    /* The code snippet you provided is creating two vectors `vec01` and `vec02`. */
    vector<int> vec01 = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> vec02(vec01);
    printVector(vec02);


    // erase
    vec.erase(vec.begin());
    printVector(vec);

    cout << endl;
    return 0;
}
