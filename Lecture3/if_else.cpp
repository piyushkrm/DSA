// write a basics code snippet

#include <iostream>
using namespace std;

int main()
{

    // If-else statements
    int x = 10;

    if (x >= 0)
    {
        cout << "The number is positive." << endl;
    }
    else
    {
        cout << "The number is negative." << endl;
    }

    // Odd even
    int a;
    cout << "Enter the number : ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }

    return 0;
}