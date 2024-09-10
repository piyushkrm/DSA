
// function questions

#include <iostream>
using namespace std;

// Qs1. Calculate sum of two numbers using the function
int calSum(int N) {
    int sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int num1;
    cout << "Enter number to calculate sum from 1 : ";
    cin >> num1;
    cout << "Sum of numbers from 1 to " << num1 << " are : " << calSum(num1);

}