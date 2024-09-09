

// Triangle pattern

#include <iostream>
using namespace std;

int main() {

    // Question1
    // int n = 4;
    // *
    // * *
    // * * *
    // * * * *


    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) { 
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Question2
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4

    //     for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) { 
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }



    // Question3
    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // int x = 5;
    // for (int i = 1; i <= x; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << j <<" ";
    //     }
    //     cout << endl;
    // }

    // Question4
        // A
        // B A
        // C B A
        // D C B A
        // E D C B A
        
        

        // Question5
        // Floyd's Triangle Pattern
        // A
        // B C
        // D E F
        // G H I J
        // K L M N O

        int p = 5;
        char ch = 'A';
        for (int i = 1; i <= p; i++) {
            for (int j = 1; j <= i; j++) {
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }

    return 0;
}