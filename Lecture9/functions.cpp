
// vector functions

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vector = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // size of a vector
    cout << "Size of vector: " << vector.size() << endl;

    // push_back vector
    vector.push_back(6);
    cout << "After push back, Size of vector: " << vector.size() << endl;

    // pop_back vector
    vector.pop_back();
    cout << "After pop back, Size of vector: " << vector.size() << endl;

    // front vector
    cout << "Front element of vector: " << vector.front() << endl;

    // back vector
    cout << "Back element of vector: " << vector.back() << endl;
}