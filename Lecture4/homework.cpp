

// print continous character star pattern

#include <iostream>
using namespace std;

int main() {

    // A B C D
    // E F G H
    // I J K L
    // M N O P

    
    int n = 3;
    char character = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << character << " ";
            character++;
        }
        cout << endl;
    }

    // A
    // B B 
    // C C C 
    // D D D D 

    int k = 4;
    char c = 'A';

    for (int i = 0; i < k; i++) {
        for (int j = 0; j <= i; j++) { 
            cout << c << " ";
        }
        cout << endl;
        c++;
    }

}