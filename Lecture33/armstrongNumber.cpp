
// Armstrong number

#include <iostream>
using namespace std;


// Function to check if a number is Armstrong or not
bool isArmstrongNumber(int number) {
    int originalNumber  = number;
    int sumOfCubes = 0;
    
    while(number != 0) {
        int digit = number%10;
        sumOfCubes += digit * digit * digit;
        number /= 10;
    }

    return (originalNumber == sumOfCubes);
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if(isArmstrongNumber(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}