//  bitwise operator


#include <iostream>
using namespace std;

int main() {

    int a = 4;
    int b = 8;
    // bitwise & operator
    cout << (a & b) << endl;

    // bitwise | operator
    cout << (a | b) << endl;

    // bitwise ^ operator
    cout << (a ^ b) << endl;

    // bitwise  << operator
    cout << (a << 1) << endl;

    // bitwise  >> operator
    cout << (b >> 1) << endl;
}