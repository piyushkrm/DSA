
// Pyramid pattern

#include <iostream>
using namespace std;    

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // print space
        for (int j = 0; j <= n-i-1; j++) {
            cout << "  ";
        }

        // print numbers
        for (int j = 1; j <= i+1; j++) {
            cout<< j << " ";
        }

        // print number
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

}