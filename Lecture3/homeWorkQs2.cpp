// print factorial of a number N

#include <iostream>
using namespace std;

int main() {
    int n;
    int fact = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n == 0 || n == 1)
        cout << "Factorial : 0" << endl;
    else{
        for (int i = 2; i <= n; i++)
            fact *= i;
        cout << "Factorial : " << fact << endl;
    }

    return 0;
}
