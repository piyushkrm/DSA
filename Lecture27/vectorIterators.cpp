
// vector iterators

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // begin
    cout << *(vec.begin()) << endl;  // 1

    // end
    cout << *(vec.end()) << endl;  // Garbage values

    // forward iterator vector
    vector<int> :: iterator it;
    for (it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";  // 1 2 3 4 5
    }
    cout << endl;


    return 0;
}