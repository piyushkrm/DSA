// write simple code snippet

#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    // Arithmetic operations
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


    // Relational operations
    bool isEqual = (a == b);
    bool isNotEqual = (a!= b);
    bool isGreaterThan = (a > b);
    bool isLessThan = (a < b);
    bool isGreaterThanOrEqual = (a >= b);
    bool isLessThanOrEqual = (a <= b);
    // Output the results
    std::cout << "Is equal: " << (isEqual? "True" : "False") << std::endl;
    std::cout << "Is not equal: " << (isNotEqual? "True" : "False") << std::endl;
    std::cout << "Is greater than: " << (isGreaterThan? "True" : "False") << std::endl;
    std::cout << "Is less than: " << (isLessThan? "True" : "False") << std::endl;
    std::cout << "Is greater than or equal to: " << (isGreaterThanOrEqual? "True": "False") << std::endl;


    // Logical operators
    bool isNoEqual = (10 != 10);
    bool OR = (10 == 10) ||  (45 == 48);
    bool AND = (50 == 60) && (10 == 10);

    std::cout << "Is Not Equal : " << (isNoEqual ? "True" : "False") << std::endl;
    std::cout << "OR : " << (OR? "True" : "False") << std::endl;
    std::cout << "AND : " << (AND? "True" : "False") << std::endl;

    return 0;
}