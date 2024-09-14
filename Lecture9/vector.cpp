

// vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Approach 1: Declare and initialize a vector
    vector<int> vec;
    // cout << vec[0] << endl;

    // Approach 2: Declare and initialize a vector with values
    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout << vec2[2] << endl;

    // Approach 3: Declare and initialize a vector with size of vector an values using
    vector<int> vec3(10, 0);
    for (int i = 0; i < 10; i++) {
        cout << vec3[i] << " ";
    }


}