

// print continous character star pattern

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    char character = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << character << " ";
            character++;
        }
        cout << endl;
    }
}