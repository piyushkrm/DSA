// Inverted triangle pattern

#include <iostream>
using namespace std;

int main() {

// 1 1 1 1 1 1 1 
//   2 2 2 2 2
//      3 3 3 3
//         4 4 4
//           5 5
//              6
    int q = 6;

    for (int i = 1; i <= q; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "  ";
        }

        for (int k = q; k >= i; k--) {
            cout << i << " ";
        }

        cout << endl;
    }
}