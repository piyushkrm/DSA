

// Triangle pattern

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) { 
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4

        for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) { 
            cout << i+1 << " ";
        }
        cout << endl;
    }

    return 0;
}