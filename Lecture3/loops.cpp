// loop

#include <iostream>
using namespace std;

int main() {
    // while loop
    int i = 0;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;


    // do-while loop
    int a = 0;
    do {
        cout << a << " ";
        a++;
    } while (a <= 10);
    cout << endl;

    return 0;
}