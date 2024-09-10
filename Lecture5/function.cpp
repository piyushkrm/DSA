

// Function

#include <iostream>
using namespace std;

// function definition
void printHello() {
    cout << "Hello, World!" << endl;
}

// function with parameter and i wiil calculate the sum of two numbers  
int sum(int a, int b) {
    return a + b;
}

// find minimum of two numbers
int min(int a, int b) {
    return (a > b)? a : b;
}

int main() {
    // function calling
    printHello();
    cout << "Sum of 2 and 3: " << sum(2, 3) << endl;
    cout << "Minimum of 5 and 3: " << min(5, 3) << endl;

    return 0;
}