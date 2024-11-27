

// In this folder we are practice the all basics problem


#include <iostream>
#include <climits>

using namespace std;

// 1. Sum of two numbers
int sumOfTwoNumbers(int a, int b) {
    return a + b;
}

// 2. Check if the number is prime or not
bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// 3. Check if the number is negative or not
bool isNegative(int num) {
    return num < 0;
}

// 4. Calculate simple interest
int simpleInterest(int principal, int interest, int time) {
    return (principal * interest * time) / 100;
}

// 5. Minumum and maximum number
int min(int n, int m) {
    if (n > m) return n;
}

int max(int n, int m) {
    if (n < m) return n;
}

// 6. Find the factorial of a number
int factorial(int n) {
    if (n <= 1) return  1;
    return n * factorial(n - 1);
}

// 7. Check if the age is greater than or equal to 18 years old or not
bool age(int n) {
    return n >= 18;  
}

// 8. Ternary operator
int op(int n) {
    return (n % 2 == 0)? n : n + 1;
}

// 9. Calculate sum of 1  to n number with function
int sumOfn(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

// 10. Calculate factorial using loops
int factorialWithLoop(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

// 11. Calculate sum of digits of the number
int sumOfDigits(int n) {
    int digits = 0;
    while ( n > 0) {
        digits += n % 10;
        n /= 10;
    }
    return digits;
}

// 12. Array Linear Search
int linearSearch(int array[], int size, int target) {
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            index = i;
            break;
        }
    }
    return index;
}

// 13. Write a function to Reverse the array element
void printArray(const int array[], int size);
void reverseArray(int array[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap array elements from start to end
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // Move pointers
        start++;
        end--;
    }

    // Print reversed array
    cout << "Reversed Array: ";
    printArray(array, size);
}

// 14. Function to print the array elements
void printArray(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// 15. Write a function to swap the max and min values of an array
void swapMinMax(int array[], int size) {
    int min = INT_MAX;
    int max = INT_MIN;
    int min_INDEX = -1;
    int max_INDEX = -1;

    // Find min and max values
    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
            min_INDEX = i;
        }

        if (array[i] > max) {
            max = array[i];
            max_INDEX = i;
        }
    }
    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;

    // Swap min and max values
    int temp = array[min_INDEX];
    array[min_INDEX] = array[max_INDEX];
    array[max_INDEX] = temp;

    printArray(array, size);
}













int main() {
    // 1 Sum of two numbers
    int sum = sumOfTwoNumbers(5, 7);
    cout << "Sum: " << sum << endl;

    // 2 Check if the number is prime or not
    int num = 27;
    bool isPrimeNumber = isPrime(num);
    cout << num << " is prime: " << (isPrimeNumber? "Yes" : "No") << endl;

    // 3 Check if the number is negative or not
    int negativeNum = -5;
    bool isNegativeNumber = isNegative(negativeNum);
    cout << negativeNum << " is negative: " << (isNegativeNumber? "Yes" : "No") << endl;

    // 4. Calculate the simple interest
    int principal = 1000;
    int interest = 5;
    int time = 2;
    int simpleInterestAmount = simpleInterest(principal, interest, time);
    cout << "Simple Interest: " << simpleInterestAmount << endl;

    // 5. Minumum and maximum number
    cout << "Minimum number: " << min(0, 10) << endl;
    cout << "Maximum number: " << max(10, 0) << endl;

    // 6. Find the factorial of a number
    int factorialNumber = 5;
    cout << "Factorial of " << factorialNumber << ": " << factorial(factorialNumber) << endl;

    // 7. Check if the age is greater than or equal to 18 years old or not
    int ageNumber = 17;
    cout << "Age is valid: " << (age(ageNumber)? "Yes" : "No") << endl;

    // 8. Ternary operator
    cout << "Ternary operator result: " << op(20) << endl;

    // 9. Calculate sum of 1 to n number with function
    cout << "Sum of 1 to " << "50" << ": " << sumOfn(50) << endl;

    // 10. Calculate factorial using loops
    cout << "Factorial of 5 using loops: " << factorialWithLoop(5) << endl;

    // 11. Calculate sum of digits of the number
    int number = 12345;
    cout << "Sum of digits of " << number << ": " << sumOfDigits(number) << endl;

    // 12. Array Linear Search
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 3;
    int index = linearSearch(array, size, target);
    cout << "Target found at index: " << index << endl;

    // 13. Reverse the array element
    reverseArray(array, size);

    // 15. Min and max element of an array
    swapMinMax(array, size);


    
    return 0;
}