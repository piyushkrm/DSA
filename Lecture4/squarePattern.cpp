// square pattern
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { 
            cout << j <<" ";
        }
        cout << endl;
    }  
}