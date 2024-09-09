

// print continous character star pattern

#include <iostream>
using namespace std;

int main()
{

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

    // Butterfly pattern

    int n = 10;
    for (int i = 0; i < n; i++) {
        // print 1st
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        for (int j = 1; j < (2 * n - 2 * i - 1); j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
        // print 2nd
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        for (int j = 0; j <= (2 * n - 2 * i - 1); j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

}