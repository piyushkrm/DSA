// square pattern
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5


#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int num = 1;

        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { 
            cout << num <<" ";
            num++;
        }
        cout << endl;
    }
}
