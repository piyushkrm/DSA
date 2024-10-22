
// C++ STL (Standard Template Library)

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

    // push back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    printVector(vec);

    cout << "Size of vector after push_back : " << vec.size() << endl;

    // pop_back
    vec.pop_back();
    printVector(vec);
    cout << "Size of vector after push_back : " << vec.size() << endl;




    return 0;
}