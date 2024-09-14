

// for each

#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<char> vec = {'p', 'i', 'y', 'u', 's', 'h'};
    for (char i : vec) {
        cout << i << " ";
    }
    return 0;
}