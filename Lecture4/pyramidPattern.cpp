
// Pyramid pattern

#include <iostream>
using namespace std;    

int main() {
    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // for (int i = 0; i < n; i++) {
    //     // print space
    //     for (int j = 0; j <= n-i-1; j++) {
    //         cout << "  ";
    //     }

    //     // print numbers
    //     for (int j = 1; j <= i+1; j++) {
    //         cout<< j << " ";
    //     }

    //     // print number
    //     for (int j = i; j > 0; j--) {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }


    // Hollow diamond pattern
    // top part
    int k = 5;
    for (int i = 0; i < k; i++) {
        // print space
        for (int j = 0; j < k - i - 1; j++) {
            cout << "  ";
        }

        cout << "* ";

        if (i != 0 ){
            // print number
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;



        
    }

}