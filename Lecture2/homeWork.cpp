
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    // Output the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;

}