// Reverse triangle pattern

#include <iostream>
using namespace std;

int main()
{

        // 1 
        // 2 1
        // 3 2 1
        // 4 3 2 1
        // 5 4 3 2 1

    // int x = 5;
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle Pattern

    // 1 
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    
    int g = 5;
    int k = 1;
    for (int i = 1; i <= g; i++) {
        for (int j = 1; j <= i; j++) {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

}