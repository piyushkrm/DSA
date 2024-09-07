// sum of all odd numbers from 1 to n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    // another solution
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}