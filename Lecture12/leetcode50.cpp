
// 50. Pow(x, n)
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

#include <iostream>
#include <vector>

using namespace std;

double myPow(double x, int n) {

    if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;


    long binaryForm = n;
    double ans = 1;
    while (binaryForm > 0) {
        if (binaryForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    }
    return ans;
}

int main() {
    double x = 2.00000;
    int n = 10;
    cout << "Result: " << myPow(x, n) << endl;
    return 0;
 
}