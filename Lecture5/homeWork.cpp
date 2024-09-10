

// Homework problems
// Question1: WAF to check if number is prime or not
// Question2: WAF to print all prime numbers from 2 to N;
// Question3: WAF to print nth fibonacci series

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

// Question2:
    void printPrime(int num){
        if(num <= 1){
            cout << "ERROR";
            return;
        }
        for(int i=2; i <= num; i++){ // Change condition to i <= num
        if(isPrime(i)){
            cout << i << " "; // Add space after printing each prime number
            }
        }
    }


// Question3:
    int fibonacci(int n){
        if(n <= 1){
            return n;
        }
        int fib[n+1];
        fib[0] = 0;
        fib[1] = 1;

        for (int i = 2; i <= n; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        return fib[n];
    }


int main(){
    // Question1
    int num;
    cout << "Enter the number to check number is prime or not : ";
    cin >> num;
    cout << "Is " << num << " prime? " << (isPrime(num) ? "Yes" : "No") << endl;

    // Question2
    cout << "Enter the number to print prime numbers from 2 to N : ";
    cin >> num;
    printPrime(num);

    // Question3
    int n;
    cout << "Enter the value of n for the nth Fibonacci series: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
}