

// Homework problems
// Question1: WAF to check if number is prime or not
// Question2:
// Question3:

#include <iostream>
using namespace std;

// Question1:
    bool isPrime(int num){
        if(num <= 1){
            return false;
        }
        for(int i=2; i*i <= num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }

int main(){
    // Question1
    int num;
    cout << "Enter the number to check number is prime or not : ";
    cin >> num;
    cout << "Is " << num << " prime? " << (isPrime(num) ? "Yes" : "No") << endl;


}