
// check the number is prime or not

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number : ";
    cin >> num;
    
    if (num <= 1) {
            cout << "Number " << num << " is not prime." << endl;
    } else {
        bool isPrime = true;

        for (int i = 2; i <= num-1; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            } 
        }

        if (isPrime) {
            cout << "Number " << num << " is prime." << endl;
        } else {
            cout << "Number " << num << " is non-prime." << endl;
        }
    }
    
    return 0;
}