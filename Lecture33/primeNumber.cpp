/**
 * The given C++ program uses the Sieve of Eratosthenes algorithm to efficiently find and count prime
 * numbers within a specified range.
 * 
 * @param n The code you provided implements the Sieve of Eratosthenes algorithm to count the number of
 * prime numbers in a given range from 2 to a specified upper limit `n`. The `countPrimes` function
 * initializes a vector `isPrime` to track whether each number is prime or not
 * 
 * @return The `countPrimes` function returns the number of prime numbers in the range from 2 to the
 * specified upper limit `n`.
 */

// Best approach to finding the prime number in a range  with Sieve of Eratosthenes algorithm

#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    int count = 0;
    
    // Sieve of Eratosthenes algorithm
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int p = i * i; p <= n; p += i) {
                isPrime[p] = false;
            }
        }
    }
    
    // Count the prime numbers
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;
    
    int count = countPrimes(n);
    cout << "Number of prime numbers in the range 2 to " << n << " is: " << count << endl;
    
    return 0;
}
