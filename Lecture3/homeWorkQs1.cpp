
// Sum of all numbers from 1 to n which are divisible by 3.

#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    cout << "Enter number to calulate sum of all numbers from 1 to n which are divisible by : ";
    cin >> N;

    for (int i = 0; i <= N; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    
    cout << "Sum of all numbers divisible by 3 from 1 to " << N << " is: " << sum << endl;
    return 0;
}